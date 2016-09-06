#ifndef cpp_objectpool02_h
#define cpp_objectpool02_h

namespace Temp02
{
    class ParticlePool;

    class Particle
    {
    private:
        friend class ParticlePool;

        Particle();
        bool inUse;
    };

    class ParticlePool
    {
    private:
        Particle pool[100];
    };
}

#endif//cpp_objectpool02_h