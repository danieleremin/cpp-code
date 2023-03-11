#pragma once

#include <string>
#include "ZoomList.h"
using namespace std;

namespace de {

	class FractalCreator {
	private:
		int m_width;
		int m_height;
		unique_ptr<int[]> m_histogram();
		unique_ptr<int[]> m_fractal(new int[m_width * m_height] {0});
	public:
		FractalCreator(int width, int height);
		virtual ~FractalCreator();

		void calculateIteration();
		void drawFractal();
		void addZoom(const Zoom& zoom);
		void writeBitmap(string name);
	};
}
