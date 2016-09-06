#include "TypeObject06.h"
#include <stdlib.h>

namespace CopyDown
{
    Breed::Breed(Breed* parent, int health, const char* attack) : health(health), attack(attack)
    {
        // Inherit non-overridden attributes.
        if (NULL != parent)
        {
            if (0 == health)
            {
                health = parent->getHealth();
            }
            if (NULL == attack)
            {
                attack = parent->getAttack();
            }
        }
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