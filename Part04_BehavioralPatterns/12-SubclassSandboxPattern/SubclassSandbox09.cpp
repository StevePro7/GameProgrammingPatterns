#include "SubclassSandbox09.h"


namespace StaticState
{
    ParticleSystem* Superpower::particles = NULL;

    void Superpower::init(ParticleSystem* input)
    {
        particles = input;
    }
}