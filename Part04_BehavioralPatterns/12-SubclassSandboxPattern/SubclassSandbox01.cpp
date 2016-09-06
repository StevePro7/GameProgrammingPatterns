#include "SubclassSandbox01.h"

namespace SimpleExample
{
    Superpower::~Superpower()
    {
    }

    void Superpower::move(double x, double y, double z)
    {
    }
    void Superpower::playSound(SoundId sound, double volume)
    {
    }
    void Superpower::spawnParticles(ParticleType type, int count)
    {
    }

    void SkyLaunch::activate()
    {
        // Spring into the air.
        playSound(SOUND_SPRING, 1.0f);
        spawnParticles(PARTICLE_DUST, 10);
        move(0, 0, 20);
    }
}