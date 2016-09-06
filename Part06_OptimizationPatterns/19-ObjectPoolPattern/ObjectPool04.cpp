#include "ObjectPool04.h"

namespace Temp04
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

    void ParticlePool::create(double x, double y)
    {
        // Forward to particle.
        particle.init(x, y);
    }
    void ParticlePool::create(double x, double y, double angle)
    {
        // Forward to particle.
        particle.init(x, y, angle);
    }
    void ParticlePool::create(double x, double y, double xVel, double yVel)
    {
        // Forward to particle.
        particle.init(x, y, xVel, yVel);
    }
}