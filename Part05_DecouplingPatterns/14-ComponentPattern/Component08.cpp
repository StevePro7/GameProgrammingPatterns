#include "Component08.h"

namespace AbstractInputBjorn
{
    InputComponent::~InputComponent()
    {
    }
    void PlayerInputComponent::update(Bjorn& bjorn)
    {
    }
    void DemoInputComponent::update(Bjorn& bjorn)
    {
        // AI to automatically control Bjorn.
    }

    void PhysicsComponent::update(Bjorn& bjorn, World& world)
    {
    }

    void GraphicsComponent::update(Bjorn& bjorn, Graphics& graphics)
    {
    }

    Bjorn::Bjorn(InputComponent* inputComponent) : inputComponent(inputComponent)
    {
    }
    void Bjorn::update(World& world, Graphics& graphics)
    {
        inputComponent->update(*this);
        physicsComponent.update(*this, world);
        graphicsComponent.update(*this, graphics);
    }
}