#pragma once
namespace de {
	class Mandelbrot {
	public:
		static const int MAX_ITERATIONS = 1000;
		Mandelbrot();
		virtual ~Mandelbrot();

		static int getIterations(double x, double y);
	};
}
