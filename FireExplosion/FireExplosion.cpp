
#include <iostream>
#include "SDL.h"
#include <stdlib.h>
#include "Swarm.h"
#include "Screen.h"
using namespace std;
using namespace de;

int main(int argc, char* argv[]) {
    srand(time(NULL));

    Screen screen;

    if (screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }

    Swarm swarm;

    while (true) {
        // Update particles
        // Draw particles

        int elapsed = SDL_GetTicks();

        swarm.update(elapsed);

        unsigned char green =
            (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

        const Particle* const pParticles = swarm.getParticles();

        for (int i = 0; i < Swarm::NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH / 2;
            int y = particle.m_y * Screen::SCREEN_WIDTH / 2 + Screen::SCREEN_HEIGHT / 2;

            screen.setPixel(x, y, red, green, blue);
        }

        screen.boxBlur();

        // Draw the screen
        screen.update();

        // Check for messages/events
        if (screen.processEvents() == false) {
            break;
        }
    }

    screen.close();

    return 0;
}
