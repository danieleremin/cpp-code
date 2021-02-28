#include "Particle.h"
#include <stdlib.h>

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

namespace de {
	Particle::Particle() {
		m_x = ((2.0 * rand()) / RAND_MAX) - 1;
		m_y = ((2.0 * rand()) / RAND_MAX) - 1;

		xSpeed = 0.0005 * (((2.0 * rand()) / RAND_MAX) - 1);
		ySpeed = 0.0005 * (((2.0 * rand()) / RAND_MAX) - 1);
	}
	void Particle::update() {
		m_x += xSpeed;
		m_y += ySpeed;

		if (m_x <= -1.0 || m_x >= 1.0) { xSpeed = -xSpeed; }
		if (m_y <= -1.0 || m_y >= 1.0) { ySpeed = -ySpeed; }
	}
}