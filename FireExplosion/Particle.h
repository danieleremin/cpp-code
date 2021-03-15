#ifndef PARTICLE_H
#define PARTICLE_H

namespace de {
	struct Particle {
		double m_x;
		double m_y;
	private:
		double m_speed;
		double m_direction;
	public:
		Particle();
		void update(int interval);
	};
}
#endif /* !PARTICLE_H */
