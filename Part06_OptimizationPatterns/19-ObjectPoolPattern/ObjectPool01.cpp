#include "ObjectPool01.h"

#include <assert.h>
#include <stdlib.h>

namespace Temp01
{
    void Particle::init(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime)
    {
    }
    bool Particle::animate()
    {
        if (!inUse())
        {
            return false;
        }

        framesLeft--;
        x += xVel;
        y += yVel;

        return 0 == framesLeft;
    }
    bool Particle::inUse() const
    {
        return false;
    }
    Particle* Particle::getNext() const
    {
        return state.next;
    }
    void Particle::setNext(Particle* next)
    {
        state.next = next;
    }

    ParticlePool::ParticlePool()
    {
        // The first one is available.
        firstAvailable = &particles[0];

        // Each particle p oints to the next.
        for (int i = 0; i < POOL_SIZE - 1; ++i)
        {
            particles[i].setNext(&particles[i + 1]);
        }

        // The last one terminats the list.
        particles[POOL_SIZE - 1].setNext(NULL);
    }
    void ParticlePool::create(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime)
    {
        // Ensure the pool is not full.
        assert(NULL != firstAvailable);

        // Remove it from the available list.
        Particle* newParticle = firstAvailable;
        firstAvailable = newParticle->getNext();

        newParticle->init(inputX, inputY, inputXvel, inputYVel, lifetime);
    }
    void ParticlePool::animate()
    {
        for (int i = 0; i < POOL_SIZE; ++i)
        {
            if (particles[i].animate())
            {
                // Add this particle to the front of the list.
                particles[i].setNext(firstAvailable);
                firstAvailable = &particles[i];
            }
        }
    }
}