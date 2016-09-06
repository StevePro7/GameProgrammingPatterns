#include "Prototype01.h"

namespace PrototypePattern
{
    namespace Classes
    {
        Spawner::~Spawner()
        {
        }

        Monster* GhostSpawner::spawnMonster()
        {
            return new Ghost();
        }
        Monster* DemonSpawner::spawnMonster()
        {
            return new Demon();
        }
        Monster* SorcererSpawner::spawnMonster()
        {
            return new Sorcerer();
        }
    }

    namespace Clone
    {
        Monster::~Monster()
        {
        }

        Ghost::Ghost(int health, int speed) : health(health), speed(speed)
        {
        }
        Monster* Ghost::clone()
        {
            return new Ghost(health, speed);
        }

        Spawner::Spawner(Monster* prototype) : prototype(prototype)
        {
        }

        Monster* Spawner::spawnMonster()
        {
            return prototype->clone();
        }
    }
}