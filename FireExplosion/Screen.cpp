#include <iostream>
#include "Screen.h"

namespace de {
	Screen::Screen() :
		m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer(NULL) {
		init();
	}
	bool Screen::init() {
		if (SDL_Init(SDL_INIT_VIDEO)) { return false; }

		m_window = SDL_CreateWindow("Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HIGHT, SDL_WINDOW_SHOWN);
		m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);

		if (m_window == NULL) {
			SDL_Quit();
			return false;
		}

		/*
		* // Another method of setting color
		SDL_SetRenderDrawColor(renderer, 17, 114, 114, 0);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		*/
		m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HIGHT);

		if (m_renderer == NULL) {
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}
		if (m_texture == NULL) {
			SDL_DestroyRenderer(m_renderer);
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		// Uint32* buffer = new Uint32[SCREEN_WIDTH * SCREEN_HIGHT];
		memset(m_buffer, 0, SCREEN_WIDTH * SCREEN_HIGHT * sizeof(Uint32));

		for (int i = 0; i < SCREEN_WIDTH * SCREEN_HIGHT; i++) { m_buffer[i] = 0xFFFFFFFF; }

		for (int i = 100; i < 240000; i++) { m_buffer[i] = 0x00FF8888; }
		for (int i = 0; i < 800; i++) { m_buffer[i] = 0x00000000; }
		m_buffer[30000] = 0x00000000;
		m_buffer[50000] = 0x00000000;

		SDL_UpdateTexture(m_texture, NULL, m_buffer, SCREEN_WIDTH*sizeof(Uint32));
		SDL_RenderClear(m_renderer);
		SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
		SDL_RenderPresent(m_renderer);

		return true;
	}
	bool Screen::processEvents() {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				return false;
			}
		}
		return true;
	}
	void Screen::close() {
		delete [] m_buffer;
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyTexture(m_texture);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
	} // namespace de
}
