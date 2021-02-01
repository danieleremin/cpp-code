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
    if (window == NULL) {
        SDL_Quit();
        cout << "Window creation failed \n";
        cout << "Could not create window: %s\n" << SDL_GetError() << endl;
        return 2;
    }

    bool quit = false;
    SDL_Event event;
    while (!quit) {
        // Update and draw particles
        // Check for messages or events

        while(SDL_PollEvent(&event)) {
            if(event.type == SDL_QUIT) {
                quit = true;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
    cout << endl << "Press any key to quit. \n";
    cin.get();
    return 0;
}