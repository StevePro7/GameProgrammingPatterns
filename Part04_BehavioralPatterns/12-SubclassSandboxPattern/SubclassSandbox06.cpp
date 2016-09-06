#include "SubclassSandbox06.h"

namespace PasstoConstructor
{
    Superpower::Superpower(ParticleSystem* particles) : particles(particles)
    {
    }

    SkyLaunch::SkyLaunch(ParticleSystem* particles) : Superpower(particles)
    {
    }
}