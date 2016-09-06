#include "Component02.h"

namespace Monolithic
{
    Bjorn::Bjorn() : velocity(0), x(0), y(0)
    {
    }

    void Bjorn::update(World& world, Graphics& graphics)
    {
        // Apply user input to hero velocity.
        switch (Controller::getJoystickDirection())
        {
        case DIR_LEFT:
            velocity -= WALK_ACCERLERATION;
            break;

        case DIR_RIGHT:
            velocity += WALK_ACCERLERATION;
            break;

        case DIR_NONE:
            break;

        default:
            break;
        }

        // Modify position by velocity.
        x += velocity;
        world.resolveCollision(volume, x, y, velocity);

        // Draw the appropriate sprite.
        Sprite* sprite = &spriteStand;
        if (velocity < 0)
        {
            sprite = &spriteWalkLeft;
        }
        else
        {
            sprite = &spriteWalkRight;
        }

        graphics.draw(*sprite, x, y);
    }
};