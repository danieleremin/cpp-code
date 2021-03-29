
#include <iostream>
#include "SDL.h"
#include <stdlib.h>
#include "Swarm.h"
using namespace std;
using namespace de;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;
Uint32* buffer1 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];
Uint32* buffer2 = new Uint32[SCREEN_WIDTH * SCREEN_HEIGHT];

void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
    if (x < 0 || x >= SCREEN_HEIGHT || y < 0 || y >= SCREEN_WIDTH) { return; }

    Uint32 color = 0;

    color += red;
    color <<= 8;
    color += green;
    color <<= 8;
    color += blue;
    color <<= 8;
    color += 0xFF;

    buffer1[y * SCREEN_HEIGHT + x] = color;
}

void boxBlur() {
    // Swap buffers. so pixel is in buffer2 and we are drawing to buffer1
    Uint32* temp = buffer1;
    buffer1 = buffer2;
    buffer2 = temp;

    for (int y = 0; y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < SCREEN_WIDTH; x++) {
            /*
            * 0 0 0
            * 0 1 0
            * 0 0 0
            */

            int redTotal = 0;
            int greenTotal = 0;
            int blueTotal = 0;

            for (int row = -1; row <= 1; row++) {
                for (int col = -1; col <= 1; col++) {
                    int currentX = x + col;
                    int currentY = y + row;

                    if (currentX >= 0 && currentX < SCREEN_WIDTH && currentY >= 0 && currentY < SCREEN_HEIGHT) {
                        Uint32 color = buffer2[currentY * SCREEN_WIDTH + currentX];

                        Uint8 red = color >> 24;
                        Uint8 green = color >> 16;
                        Uint8 blue = color >> 8;

                        redTotal += red;
                        greenTotal += green;
                        blueTotal += blue;
                    }
                }
            }
            Uint8 red = redTotal / 9;
            Uint8 green = greenTotal / 9;
            Uint8 blue = blueTotal / 9;

            setPixel(x, y, red, green, blue);
        }
    }
}

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        return 1;
    }

    srand(time(NULL));

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

    Swarm swarm;

    memset(buffer1, 0, SCREEN_WIDTH * SCREEN_HEIGHT * sizeof(Uint32));

    bool quit = false;
    SDL_Event event;
    while (!quit) {
        int elapsed = SDL_GetTicks();
        // clear();
        swarm.update(elapsed);

        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

        const Particle* const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * SCREEN_WIDTH / 2;
            int y = particle.m_y * SCREEN_WIDTH / 2 + SCREEN_HEIGHT / 2;

            setPixel(y, x, red, green, blue);
        }
        boxBlur();

        /*
        for (int y = 0; y < SCREEN_HEIGHT; y++) {
            for (int x = 0; x < SCREEN_WIDTH; x++) {
               setPixel(x, y, red, green, blue);
            }
        }
        */

        SDL_UpdateTexture(texture, NULL, buffer1, SCREEN_WIDTH * sizeof(Uint32));
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, NULL);
        SDL_RenderPresent(renderer);

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    delete[] buffer1;
    delete[] buffer2;
    SDL_DestroyRenderer(renderer);
    SDL_DestroyTexture(texture);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
