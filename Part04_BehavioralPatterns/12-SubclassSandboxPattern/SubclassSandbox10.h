#ifndef cpp_subclass10_h
#define cpp_subclass10_h

#include "SubclassSandbox00.h"

namespace UseServiceLocator
{
    struct ParticleSystem
    {
        void spawn(ParticleType type, int count);
    };

    class Locator
    {
    public:
        static ParticleSystem& getParticles();

    private:
        static ParticleSystem particles;
    };

    class Superpower
    {
    public:
        void spawnParticles(ParticleType type, int count);
    };
}

#endif//cpp_subclass10_h