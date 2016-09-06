#include "SubclassSandbox02.h"

namespace Elaborated
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

    double Superpower::getHeroX()
    {
        return 0;
    }
    double Superpower::getHeroY()
    {
        return 0;
    }
    double Superpower::getHeroZ()
    {
        return 0;
    }

    void SkyLaunch::activate()
    {
        double height = getHeroZ();
        if (0 == height)
        {
            // On the ground so spring into the air.
            playSound(SOUND_SPRING, 1.0f);
            spawnParticles(PARTICLE_DUST, 10);
            move(0, 0, 20);
        }
        else if (height < 10.0f)
        {
            // Near the ground so do a double jump.
            playSound(SOUND_SWOOP, 1.0f);
            move(0, 0, height - 20);
        }
        else
        {
            // Way up in the air so do a dive attack.
            playSound(SOUND_DIVE, 0.7f);
            spawnParticles(PARTICLE_SPARKLES, 1);
            move(0, 0, -height);
        }
    }
}