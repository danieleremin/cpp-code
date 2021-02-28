#ifndef PARTICLE_H
#define PARTICLE_H

namespace de {
	struct Particle {
		double m_x;
		double m_y;
	private:
		double xSpeed;
		double ySpeed;
	public:
		Particle();
		void update();
	};
}
#endif /* !PARTICLE_H */
