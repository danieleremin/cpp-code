#include <iostream>
#include <cstdint>
#include <memory>
#include <math.h>
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "FractalCreator.h"
using namespace std;
using namespace de;

int main() {
	int const m_width = 800;
	int const m_height = 600;
	// remove these later

	FractalCreator fractalCreator(800, 600);

	Bitmap m_bitmap(m_width, m_height);

	ZoomList m_zoomList(m_width, m_height);

	m_zoomList.add(Zoom(m_width/2, m_height/2, 4.0/m_width));
	m_zoomList.add(Zoom(295, m_height - 202, 0.1));
	m_zoomList.add(Zoom(312, m_height - 304, 0.1));

	for (int y = 0; y < m_height; y++) {
		for (int x = 0; x < m_width; x++) {
			pair<double, double> coords = m_zoomList.doZoom(x, y);

			int iterations = Mandelbrot::getIterations(coords.first, coords.second);

			m_fractal[y * m_width + x] = iterations;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				m_histogram[iterations]++;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
		total += m_histogram[i];
	}

	for (int y = 0; y < m_height; y++) {
		for (int x = 0; x < m_width; x++) {

			uint8_t red = 0;
			uint8_t green = 0;
			uint8_t blue = 0;

			int iterations = m_fractal[y * m_width + x];

			if (iterations != Mandelbrot::MAX_ITERATIONS) {

				double hue = 0.0;

				for (int i = 0; i <= iterations; i++) {
					hue += ((double)m_histogram[i]) / total;
				}

				green = pow(255, hue); // For different effect use hue * 255
			}

			m_bitmap.setPixel(x, y, red, green, blue);

		}
	}

	m_bitmap.write("test.bmp");
	return 0;
}
