#include "ObjectPool00.h"

#include <iostream>

namespace Version00
{
    Particle::Particle() : framesLeft(0)
    {
    }

    void Particle::init(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime)
    {
        x = inputX;
        y = inputY;
        xVel = inputXvel;
        yVel = inputYVel;
        framesLeft = lifetime;
    }
    void Particle::animate()
    {
        if (!isInUse())
        {
            return;
        }

        framesLeft--;
        x += xVel;
        y += yVel;
    }
    bool Particle::isInUse() const
    {
        return framesLeft > 0;
    }

    void ParticlePool::create(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime)
    {
        // Find an available particle.
        for (int i = 0; i < POOL_SIZE; ++i)
        {
            if (!particles[i].isInUse())
            {
                particles[i].init(inputX, inputY, inputXvel, inputYVel, lifetime);
                std::cout << "created " << i << std::endl;

                return;
            }
        }
    }

    void ParticlePool::animate()
    {
        for (int i = 0; i < POOL_SIZE; ++i)
        {
            particles[i].animate();
        }
    }
}