#include "TypeObject05.h"
#include <stdlib.h>

namespace Inheritance
{
    Breed::Breed(Breed* parent, int health, const char* attack) : parent(parent), health(health), attack(attack)
    {
    }
    int Breed::getHealth()
    {
        // Override.
        if (0 != health || NULL != parent)
        {
            return health;
        }

        // Inherit.
        return parent->getHealth();
    }
    const char* Breed::getAttack()
    {
        // Override.
        if (NULL != attack || NULL != parent)
        {
            return attack;
        }

        return parent->getAttack();
    }
}