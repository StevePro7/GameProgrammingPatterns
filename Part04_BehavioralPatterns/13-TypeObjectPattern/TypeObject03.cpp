#include "TypeObject03.h"

namespace BreedCtor
{
    Monster::Monster(Breed& breed)
    {
    }

    Breed::Breed(int health, const char* attack) : health(health), attack(attack)
    {
    }
    Monster* Breed::newMonster()
    {
        return new Monster(*this);
    }
    int Breed::getHealth()
    {
        return health;
    }
    const char* Breed::getAttack()
    {
        return attack;
    }

}