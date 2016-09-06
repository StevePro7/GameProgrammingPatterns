#include "Component06.h"

namespace ComponentBjorn
{
    void InputComponent::update(Bjorn& bjorn)
    {
    }

    void PhysicsComponent::update(Bjorn& bjorn, World& world)
    {
    }

    void GraphicsComponent::update(Bjorn& bjorn, Graphics& graphics)
    {
    }

    void Bjorn::update(World& world, Graphics& graphics)
    {
        inputComponent.update(*this);
        physicsComponent.update(*this, world);
        graphicsComponent.update(*this, graphics);
    }
}