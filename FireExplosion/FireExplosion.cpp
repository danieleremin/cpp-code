#include <iostream>
#include "SDL.h"
using namespace std;
int main(int argc, char* argv[])
{
    if (SDL_Init(SDL_INIT_VIDEO)) {
        cout << "SDL init failed \n";
        return 1;
    }
    else {
        cout << "SDL Init succeeded \n";
        SDL_Quit();
        return 0;
    }
   cout << endl << "Press any key to quit. \n";
   cin.get();
}