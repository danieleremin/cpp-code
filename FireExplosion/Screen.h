#ifndef SCREEN_H
#define SCREEN_H

#include "SDL.h"
namespace de {
	class Screen {
	public:
		const static int SCREEN_WIDTH = 800;
		const static int SCREEN_HIGHT = 600;

		Screen();
		bool init();
		bool processEvents();
		void close();
	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer;
	};

} // namespace de

#endif // !SCREEN_H