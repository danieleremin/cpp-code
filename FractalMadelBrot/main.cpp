#include "FractalCreator.h"
using namespace std;
using namespace de;

int main() {

	int height = 600;
	FractalCreator fractalCreator(800, 600);
	fractalCreator.run("test.bmp");

	return 0;
}
