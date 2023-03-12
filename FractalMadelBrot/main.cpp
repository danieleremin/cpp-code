#include "FractalCreator.h"
using namespace std;
using namespace de;

int main() {

	int height = 600;
	FractalCreator fractalCreator(800, 600);

	fractalCreator.addZoom(Zoom(295, height - 202, 0.1));
	fractalCreator.addZoom(Zoom(312, height - 304, 0.1));
	fractalCreator.calculateIteration();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("fractalMandelbrot.bmp");

	return 0;
}
