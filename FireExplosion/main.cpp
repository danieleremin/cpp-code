//  main.cpp
//  FireExplosion
//  Created by Daniel Eremin on 12/26/20.
#include <iostream>
#include "SDL.h"
using namespace std;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        return 1;
    }
    else {
        cout << "SDL Init succeeded \n";
        SDL_Quit();
        return 0;
    }
}
