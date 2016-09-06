#include "UpdateMethod03.h"

namespace SampleCode
{
    Entity::Entity() : x(0), y(0)
    {
    }
    Entity::~Entity()
    {
    }
    double Entity::getX() const
    {
        return x;
    }
    double Entity::getY() const
    {
        return y;
    }
    void Entity::setX(double tx)
    {
        x = tx;
    }
    void Entity::setY(double ty)
    {
        y = ty;
    }

    World::World() : numEntities(0)
    {
    }
    void World::gameLoop()
    {
        while (true)
        {
            // Handle user input.

            // Update each entity.
            for (int i = 0; i < numEntities; ++i)
            {
                entities[i]->update();
            }

            // Physics and rendering.
        }
    }

    Skeleton::Skeleton() : patrollingLeft(false)
    {
    }
    void Skeleton::update()
    {
        if (patrollingLeft)
        {
            int x = getX();
            setX(x - 1);

            x = getX();
            if (0 == x)
            {
                patrollingLeft = false;
            }
        }
        else
        {
            int x = getX();
            setX(x + 1);

            x = getX();
            if (100 == x)
            {
                patrollingLeft = true;
            }
        }
    }

    Statue::Statue(int delay) : frames(0), delay(delay)
    {
    }
    void Statue::update()
    {
        if (++frames == delay)
        {
            shootLightning();
            frames = 0;
        }
    }
    void Statue::shootLightning()
    {
        // Shoot the lightning.
    }
}