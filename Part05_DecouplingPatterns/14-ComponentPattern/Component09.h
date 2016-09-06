#ifndef cpp_component09_h
#define cpp_component09_h

#include "Component00.h"

namespace BaseGameObject
{
    class GameObject;
    
    class InputComponent
    {
    public:
        virtual ~InputComponent();
        virtual void update(GameObject& obj) = 0;
    };
    class PlayerInputComponent : public InputComponent
    {
    public:
        void update(GameObject& obj);
    };

    class PhysicsComponent
    {
    public:
        virtual ~PhysicsComponent();
        virtual void update(GameObject& obj, World& world) = 0;
    };
    class BjornPhysicsComponent : public PhysicsComponent
    {
    public:
        void update(GameObject& obj, World& world);
    };

    class GraphicsComponent
    {
    public:
        virtual ~GraphicsComponent();
        virtual void update(GameObject& obj, Graphics& graphics) = 0;
    };
    class BjornGraphicsComponent : public GraphicsComponent
    {
        void update(GameObject& obj, Graphics& graphics);
    };

    class GameObject
    {
    public:
        GameObject(InputComponent* inputComponent, PhysicsComponent* physicsComponent, GraphicsComponent* graphicsComponent);
        void update(World& world, Graphics& graphics);

        int velocity;
        int x, y;

    private:
        InputComponent* inputComponent;
        PhysicsComponent* physicsComponent;
        GraphicsComponent* graphicsComponent;
    };
}

#endif//cpp_component09_h