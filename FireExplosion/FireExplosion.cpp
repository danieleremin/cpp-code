#include <iostream>
#include "Screen.h"
using namespace std;
using namespace de;
int main(int argc, char* argv[]) {
	Screen screen;
	if (!screen.init()) {
		cout << "Init failed. \n";
		return 1;
	}

	while (true) {
		// Update particles
		// Draw particles
		// Check for messages/events

		if (screen.processEvents() == false) {
			break;
		}
	}

	screen.close();
    return 0;
}