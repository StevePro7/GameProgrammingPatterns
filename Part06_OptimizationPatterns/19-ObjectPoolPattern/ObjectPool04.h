#ifndef cpp_objectpool04_h
#define cpp_objectpool04_h

namespace Temp04
{
    class ParticlePool;

    class Particle
    {
    private:
        friend class ParticlePool;

        // Multiple ways to initialize.
        void init(double x, double y);
        void init(double x, double y, double angle);
        void init(double x, double y, double xVel, double yVel);
    };

    class ParticlePool
    {
    public:
        void create(double x, double y);
        void create(double x, double y, double angle);
        void create(double x, double y, double xVel, double yVel);

    private:
        Particle particle;
    };
}

#endif//cpp_objectpool04_h