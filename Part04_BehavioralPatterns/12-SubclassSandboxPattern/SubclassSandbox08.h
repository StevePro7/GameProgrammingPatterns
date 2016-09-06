#ifndef cpp_subclass08_h
#define cpp_subclass08_h

#include "SubclassSandbox00.h"

namespace TwoStageInitEncapsulated
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

#endif//cpp_subclass08_h