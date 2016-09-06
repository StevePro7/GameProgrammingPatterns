#include "SubclassSandbox10.h"

namespace UseServiceLocator
{
    void ParticleSystem::spawn(ParticleType type, int count)
    {
    }

    ParticleSystem Locator::particles;

    ParticleSystem& Locator::getParticles()
    {
        return particles;
    }

    void Superpower::spawnParticles(ParticleType type, int count)
    {
        ParticleSystem& particles = Locator::getParticles();
        particles.spawn(type, count);
    }
}