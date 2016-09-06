#include "TypeObject04.h"

namespace BreedCtorMonster
{
    int Breed::getHealth()
    {
        return 0;
    }
    const char* Breed::getAttack()
    {
        return "s";
    }

    const char* Monster::getAttack()
    {
        return breed.getAttack();
    }
    Monster::Monster(Breed& breed) : breed(breed), health(breed.getHealth())
    {
    }
}