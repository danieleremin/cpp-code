#pragma once

#include <iostream>
#include <memory>
#include <iostream>
#include <cstdint>
#include <math.h>
#include <vector>
#include "Bitmap.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "RGB.h"
using namespace std;

namespace de {

	class FractalCreator {
	private:
		int m_width;
		int m_height;
		int m_total{ 0 };
		unique_ptr<int[]> m_histogram;
		unique_ptr<int[]> m_fractal;
		Bitmap m_bitmap;
		ZoomList m_zoomList;

		vector<int> m_ranges;
		vector<RGB> m_colors;
		vector<int> m_rangeTotals;

		bool m_bGotFirstRange = false;

		void calculateIteration();
		void calculateTotalIterations();
		void calculateRangeTotals();
		void drawFractal();
		void writeBitmap(string name);
	public:
		FractalCreator(int width, int height);
		void addRange(double rangeEnd, const RGB& rgb);
		virtual ~FractalCreator();
		void addZoom(const Zoom& zoom);
		void run(string name);
	};
}
