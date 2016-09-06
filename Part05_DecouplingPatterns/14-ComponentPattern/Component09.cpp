#include "Component09.h"

namespace BaseGameObject
{
    InputComponent::~InputComponent()
    {
    }
    void PlayerInputComponent::update(GameObject& obj)
    {
    }

    PhysicsComponent::~PhysicsComponent()
    {
    }
    void BjornPhysicsComponent::update(GameObject& obj, World& world)
    {
    }

    GraphicsComponent::~GraphicsComponent()
    {
    }
    void BjornGraphicsComponent::update(GameObject& obj, Graphics& graphics)
    {
    }

    GameObject::GameObject(InputComponent* inputComponent, PhysicsComponent* physicsComponent, GraphicsComponent* graphicsComponent) :
        inputComponent(inputComponent),
        physicsComponent(physicsComponent),
        graphicsComponent(graphicsComponent)
    {
    }

    void GameObject::update(World& world, Graphics& graphics)
    {
    }
}