#include "TypeObject01.h"

namespace Subclasses
{
    Monster::~Monster()
    {
    }
    Monster::Monster(int startingHealth) : health(health)
    {
    }

    Dragon::Dragon() : Monster(230)
    {
    }
    const char* Dragon::getAttack()
    {
        return "The dragon breathes fire!";
    }

    Troll::Troll() : Monster(48)
    {
    }
    const char* Troll::getAttack()
    {
        return "The troll clubs you!";
    }
}