#ifndef cpp_data_locality02_h
#define cpp_data_locality02_h

namespace DataLocality02
{
    class Particle
    {
    public:
        bool isActive();
        void update();
        // Position, velocity, etc.
    };

    class ParticleSystem
    {
        ParticleSystem();
        void update();
        void activateParticle(int index);
        void deactivateParticle(int index);

    private:
        static const int MAX_PARTICLES = 100000;

        int numParticles;
        Particle particles[MAX_PARTICLES];
    };
}

#endif//cpp_data_locality02_h