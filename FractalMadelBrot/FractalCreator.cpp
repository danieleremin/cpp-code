#include "FractalCreator.h"

namespace de {
	FractalCreator::FractalCreator(int width, int height) : m_width(width), m_height(height), m_histogram(new int[Mandelbrot::MAX_ITERATIONS] {0}) {}
	FractalCreator::~FractalCreator() {}

	void FractalCreator::calculateIteration() {}
	void FractalCreator::drawFractal() {}
	void FractalCreator::addZoom(const Zoom& zoom) {} 
	void writeBitmap(string name) {}
}