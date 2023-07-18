#include "FractalCreator.h"

namespace de {

	void FractalCreator::run(string name) {
		calculateIteration();
		calculateTotalIterations();
		calculateRangeTotals();
		drawFractal();
		writeBitmap(name);
	}

	FractalCreator::FractalCreator(int width, int height) : m_width(width), m_height(height),
		m_histogram(new int[Mandelbrot::MAX_ITERATIONS] {0}),
		m_fractal(new int[m_width * m_height] {0}), m_bitmap(m_width, m_height), m_zoomList(m_width, m_height)
	{
		m_zoomList.add(Zoom(m_width / 2, m_height / 2, 4.0 / m_width));
		// cannot be implemented easily in main file
	}
	FractalCreator::~FractalCreator() {}

	void FractalCreator::addRange(double rangeEnd, const RGB& rgb) {
		m_ranges.push_back(rangeEnd * Mandelbrot::MAX_ITERATIONS);
		m_colors.push_back(rgb);

		if (m_bGotFirstRange) {
			m_rangeTotals.push_back(0);
		}
		m_bGotFirstRange = true;
	}

	void FractalCreator::calculateRangeTotals() {

		int rangeIndex = 0;

		for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
			int pixels = m_histogram[i];

			if (i >= m_ranges[rangeIndex + 1]) {
				rangeIndex++;
			}

			m_rangeTotals[rangeIndex] += pixels;
		}

	}

	void FractalCreator::calculateTotalIterations() {
		for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
			m_total += m_histogram[i];
		}
	}
	void FractalCreator::calculateIteration() {
		// total iterations can be in this method method

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
	}
	void FractalCreator::drawFractal() {

		RGB startColor(0, 0, 0);
		RGB endColor(0, 0, 255); // Best color 200 green, 255 blue
		RGB colorDiff = endColor - startColor;

		for (int y = 0; y < m_height; y++) {
			for (int x = 0; x < m_width; x++) {

				uint8_t red = 0;
				uint8_t green = 0;
				uint8_t blue = 0;

				int iterations = m_fractal[y * m_width + x];

				if (iterations != Mandelbrot::MAX_ITERATIONS) {

					double hue = 0.0;

					for (int i = 0; i <= iterations; i++) {
						hue += ((double)m_histogram[i]) / m_total;
					}

					red = startColor.r + pow(colorDiff.r, hue);
					green = startColor.g + pow(colorDiff.g, hue);
					blue = startColor.b + pow(colorDiff.b, hue);
					// For different effect use hue * 255
				}

				m_bitmap.setPixel(x, y, red, green, blue);

			}
		}
	}

	void FractalCreator::addZoom(const Zoom& zoom) {
		m_zoomList.add(zoom);
	} 
	void FractalCreator::writeBitmap(string name) {
		m_bitmap.write(name);
	}

}