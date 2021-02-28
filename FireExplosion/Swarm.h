#ifndef SWARM_H
#define SWARM_H

#include "Particle.h"

namespace de {
	class Swarm {
	private:
		Particle* m_pParticles;
	public:
		const static int NPARTICLES = 5000;
		Swarm();
		~Swarm();
		Particle* getParticles() { return m_pParticles; }
	};
}

#endif // !SWARM_H

