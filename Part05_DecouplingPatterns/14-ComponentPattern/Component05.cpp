#include "Component05.h"

namespace Components
{
    void InputComponent::update(Bjorn& bjorn)
    {
    }

    void PhysicsComponent::update(Bjorn& bjorn, World& world)
    {
        bjorn.x += bjorn.velocity;
        world.resolveCollision(volume, bjorn.x, bjorn.y, bjorn.velocity);
    }

    void GraphicsComponent::update(Bjorn& bjorn, Graphics& graphics)
    {
        Sprite* sprite = &spriteStand;
        if (bjorn.velocity < 0)
        {
            sprite = &spriteWalkLeft;
        }
        else
        {
            sprite = &spriteWalkRight;
        }

        graphics.draw(*sprite, bjorn.x, bjorn.y);
    }
}