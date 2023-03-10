#pragma once

#include <string>
#include "ZoomList.h"
using namespace std;

namespace de {

	class FractalCreator {
	public:
		FractalCreator(int width, int height);
		virtual ~FractalCreator();

		void calculateIteration();
		void drawFractal();
		void addZoom(const Zoom& zoom);
		void writeBitmap(string name);
	};
}
