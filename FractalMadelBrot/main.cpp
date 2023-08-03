#include "FractalCreator.h"
using namespace std;
using namespace de;

int main() {

	// Create Image
	FractalCreator fractalCreator(800, 600);

	// Add color ranges
	fractalCreator.addRange(0.0, RGB(0, 0, 0));
	fractalCreator.addRange(0.3, RGB(255, 0, 0));
	fractalCreator.addRange(0.5, RGB(255, 255, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));
	// getRange can be made temporarily public for debugging. getRange(x) is the syntax

	// add zooms
	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));

	// export file
	fractalCreator.run("test.bmp");

	cout << "Finished \n";

	return 0;
}
