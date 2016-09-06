#include "ObjectPool00.h"
#include "ObjectPool05.h"

#include <iostream>
#include <stdlib.h>

using namespace Temp05;

void TestParticlePool();

int main()
{
    ParticlePool pool;
    pool.create()->init(1, 2);
    pool.create()->init(1, 2, 0.3);
    pool.create()->init(1, 2, 0.3, 4.4);

    Particle* particle = pool.create();
    if (NULL != particle)
    {
        particle->init(1, 2);
    }

    return 0;
}

void TestParticlePool()
{
    std::cout << "Object pool " << std::endl;

    Version00::ParticlePool pool = Version00::ParticlePool();
    pool.create(0, 0, 1, 1, 10);
    pool.create(1, 0, 1, 1, 10);
    pool.create(2, 0, 1, 1, 10);
}