#include "Component10.h"

namespace DirectComponentRef
{
    bool BjornPhysicsComponent::isOnGround()
    {
        return true;
    }

    BjornGraphicsComponent::BjornGraphicsComponent(BjornPhysicsComponent* physics) : physics(physics)
    {
    }
    void BjornGraphicsComponent::Update(GameObject& obj, Graphics& graphics)
    {
        Sprite* sprite;
        if (!physics->isOnGround())
        {
            sprite = &spriteJump;
        }
        else
        {
            sprite = NULL;
        }

        graphics.draw(*sprite, obj.x, obj.y);
    }
}