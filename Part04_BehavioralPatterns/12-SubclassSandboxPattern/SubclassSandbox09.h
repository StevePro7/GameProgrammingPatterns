#ifndef cpp_subclass09_h
#define cpp_subclass09_h

#include "SubclassSandbox00.h"

namespace StaticState
{
    class ParticleSystem
    {
    };

    class Superpower
    {
    public:
        static void init(ParticleSystem* input);

        // Sandbox method and other operations.
    private:
        static ParticleSystem* particles;
    };
}

#endif//cpp_subclass09_h