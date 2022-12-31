#include "Bitmap.h"

namespace de {
	Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]) {
		
	}

	bool Bitmap::write(string filename) {
		return false;
	}

	void Bitmap::setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue) {
	
	}

	Bitmap::~Bitmap() {
		
	}
}
