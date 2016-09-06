#include "Component04.h"

namespace SplittingAIComponent
{
    void InputComponent::update(Bjorn& bjorn)
    {
    }

    void Bjorn::update(World& world, Graphics& graphics)
    {
        input.update(*this);

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
}