#include "Swarm.h"

namespace de {
	Swarm::Swarm() {
		m_pParticles = new Particle[NPARTICLES];
	}
	Swarm::~Swarm() {
		delete [] m_pParticles;
	}
}