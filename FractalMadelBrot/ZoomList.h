#pragma once

#include <vector>
#include <utility>
#include "Zoom.h"

using namespace std;

namespace de {
	class ZoomList {
	public:
		ZoomList(int width, int height);
		void add(const Zoom& zoom);
		pair<double, double> doZoom(int x, int y);
	private:
		int m_width{ 0 };
		int m_height{ 0 };
		vector<Zoom> zooms;
	};
}
