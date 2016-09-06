#ifndef cpp_objectpool05_h
#define cpp_objectpool05_h

namespace Temp05
{
    class Particle
    {
    public:
        void init(double x, double y);
        void init(double x, double y, double angle);
        void init(double x, double y, double xVel, double yVel);
    };

    class ParticlePool
    {
    public:
        Particle* create();

    private:
        Particle pool[100];
    };
}

#endif//cpp_objectpool05_h