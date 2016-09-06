#include "DataLocality02.h"
#include <assert.h>

namespace DataLocality02
{
    bool Particle::isActive()
    {
        return false;
    }
    void Particle::update()
    {
    }

    Particle particles[100];
    int numActive = 0;

    ParticleSystem::ParticleSystem() : numParticles(0)
    {
    }
    void ParticleSystem::update()
    {
        for (int i = 0; i < numParticles; ++i)
        {
            particles[i].update();
        }
    }
    void ParticleSystem::activateParticle(int index)
    {
        assert(index >= numActive);

        // Swap it with the first inactive particle
        // right after the active ones.
        Particle temp = particles[numActive];
        particles[numActive] = particles[index];
        particles[index] = temp;

        // Now there's one more.
        numActive++;
    }
    void ParticleSystem::deactivateParticle(int index)
    {
        // Shouldn't already be active!
        assert(index < numActive);

        // There's one fewer.
        numActive--;

        // Swap it with the last active particle
        // right before the inactive ones.
        Particle temp = particles[numActive];
        particles[numActive] = particles[index];
        particles[index] = temp;
    }

    // Non-member functions.
    void updateParticlesSlow()
    {
        Particle particles[100];
        int numParticles = 0;

        for (int i = 0; i < numParticles; ++i)
        {
            if (particles[i].isActive())
            {
                particles[i].update();
            }
        }
    }
    void updateParticles()
    {
        for (int i = 0; i < numActive; ++i)
        {
            particles[i].update();
        }
    }

    enum Mood
    {
        MOOD_WISTFUL
    };

    
}