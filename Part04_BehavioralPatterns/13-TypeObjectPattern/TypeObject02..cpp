#include "TypeObject02.h"

namespace NoInheritance
{
    Breed::Breed(int health, const char* attack) : health(health), attack(attack)
    {
    }
    int Breed::getHealth()
    {
        return health;
    }
    const char* Breed::getAttack()
    {
        return attack;
    }

    Monster::Monster(Breed& breed) : breed(breed), health(breed.getHealth())
    {
    }
    const char* Monster::getAttack()
    {
        return breed.getAttack();
    }
}