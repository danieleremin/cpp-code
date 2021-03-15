#ifndef SWARM_H
#define SWARM_H

#include "Particle.h"

namespace de {
	class Swarm {
	private:
		Particle* m_pParticles;
		int lastTime;
	public:
		const static int NPARTICLES = 1000;
		Swarm();
		~Swarm();
		Particle* getParticles() { return m_pParticles; }
		void update(int elapsed);
	};
}

#endif // !SWARM_H

