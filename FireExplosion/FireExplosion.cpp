
#include <iostream>
#include "SDL.h"
using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
Uint32* buffer = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {

    Uint32 color = 0;

    color += red;
    color <<= 8;
    color += green;
    color <<= 8;
    color += blue;
    color <<= 8;
    color += 0xFF;

    buffer[y * SCREEN_HEIGHT + x] = color;

}

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("Fire Explosion", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

    if (window == NULL) {
        SDL_Quit();
        cout << "Could not create window: \n" << SDL_GetError() << endl;
        return 2;
    }

    /*
    * // Another method of setting color
    SDL_SetRenderDrawColor(renderer, 17, 114, 114, 0);
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
    */
    SDL_Texture* texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH, SCREEN_HEIGHT);

    if (renderer == NULL) {
        SDL_DestroyWindow(window);
        SDL_Quit();
        cout << "Could not create renderer \n" << SDL_GetError() << endl;
        return 3;
    }
    if (texture == NULL) {
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        cout << "Could not create texture \n" << SDL_GetError();
        return 4;
    }

    memset(buffer, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));
    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            setPixel(y, x, 32, 0, 32);
        }
    }

    int max = 0;
    bool quit = false;
    SDL_Event event;
    while (!quit) {
        /*
        for (int i = 0; i < ??; i++) {
           setPixel((rand() % SCREEN_HEIGHT), (rand() % SCREEN_WIDTH), (rand() % 256), (rand() % 256), (rand() % 256));
        }
        */
       int elapsed = SDL_GetTicks();
       unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
       unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
       unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

       for (int y = 0; y < SCREEN_HEIGHT; y++) {
           for (int x = 0; x < SCREEN_WIDTH; x++) {
              setPixel(y, x, red, green, blue);
           }
       }

        SDL_UpdateTexture(texture, NULL, buffer, SCREEN_WIDTH * sizeof(Uint32));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
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
