#ifndef cpp_subclass06_h
#define cpp_subclass06_h

#include "SubclassSandbox00.h"

namespace PasstoConstructor
{
    class ParticleSystem
    {
    };

    class Superpower
    {
    public:
        Superpower(ParticleSystem* particles);

        // Sandbox method and other operations.
    private:
        ParticleSystem* particles;
    };

    class SkyLaunch : public Superpower
    {
    public:
        SkyLaunch(ParticleSystem* particles);
    };
}

#endif//cpp_subclass06_h