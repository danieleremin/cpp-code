#include <iostream>
#include "SDL.h"
using namespace std;
int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        cout << endl << "Press any key to quit. \n";
        cin.get();
        return 1;
    }
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HIGHT = 600;

    SDL_Window* window = SDL_CreateWindow("Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HIGHT, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

    if (window == NULL) {
        SDL_Quit();
        cout << "Could not create window: \n" << SDL_GetError() << endl;
        return 2;
    }

    // Set color
    SDL_SetRenderDrawColor(renderer, 17, 114, 114, 0);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);

    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HIGHT);

    if(renderer == NULL) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        cout << "Could not create renderer \n" << SDL_GetError() << endl;
        return 3;
    }

    if(texture == NULL) {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        cout << "Could not create texture \n" << SDL_GetError();
        return 4;
    }

    Uint32* buffer = new Uint32[SCREEN_WIDTH * SCREEN_HIGHT];
    memset(buffer, 0xFF, SCREEN_WIDTH*SCREEN_HIGHT*sizeof(Uint32));

    bool quit = false;
    SDL_Event event;
    while (!quit) {
        // Update and draw particles
        // Check for messages or events

        SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH*sizeof(Uint32));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    delete [] buffer;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}