#include "TypeObject08.h"

#define LOW_HEALTH 1

namespace OverrideAttack
{
    Breed::Breed(const char* attack) : attack(attack)
    {
    }
    const char* Breed::getAttack()
    {
        return attack;
    }

    Monster::Monster(Breed& breed) : breed(breed)
    {
    }
    const char* Monster::getAttack()
    {
        if (health < LOW_HEALTH)
        {
            return "The monster flails weakly.";
        }

        return breed.getAttack();
    }
}