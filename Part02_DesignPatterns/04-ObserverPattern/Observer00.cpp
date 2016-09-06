#include "Observer00.h"

namespace ObserverPattern
{
    Entity::Entity()
    {
    }

    Entity::~Entity()
    {
    }

    bool Entity::isHero() const
    {
        return false;
    }

    bool Entity::isStandingOn(int surface) const
    {
        return false;
    }

    bool Entity::isOnSurface()
    {
        return true;
    }

    void Entity::accelerate(int force)
    {
    }

    void Entity::update()
    {
    }
}