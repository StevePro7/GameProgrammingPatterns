#ifndef cpp_subclass07_h
#define cpp_subclass07_h

#include "SubclassSandbox00.h"

namespace TwoStageInit
{
    class ParticleSystem
    {
    };

    class Superpower
    {
    public:
        void init(ParticleSystem* particles);
    };

    class SkyLaunch : public Superpower
    {
    };
}

#endif//cpp_subclass07_h