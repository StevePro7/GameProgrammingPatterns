#include "ObjectPool05.h"

namespace Temp05
{
    void Particle::init(double x, double y)
    {
    }
    void Particle::init(double x, double y, double angle)
    {
    }
    void Particle::init(double x, double y, double xVel, double yVel)
    {
    }

    Particle* ParticlePool::create()
    {
        // Return references to available particle.
        return &pool[0];
    }
}