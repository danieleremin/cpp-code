#include <iostream>
#include "SDL.h"
using namespace std;
int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        cout << endl << "Press any key to quit. \n";
        cin.get();
        return 1;
    }
    else {
        cout << "SDL Init succeeded \n";
        SDL_Quit();
        cout << endl << "Press any key to quit. \n";
        cin.get();
        return 0;
    }
}