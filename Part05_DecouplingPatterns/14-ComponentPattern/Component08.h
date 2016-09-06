#ifndef cpp_component08_h
#define cpp_component08_h

#include "Component00.h"

namespace AbstractInputBjorn
{
    class Bjorn;

    class InputComponent
    {
    public:
        virtual ~InputComponent();
        virtual void update(Bjorn& bjorn) = 0;
    };

    class PlayerInputComponent : public InputComponent
    {
    public:
        void update(Bjorn& bjorn);
    };
    class DemoInputComponent : public InputComponent
    {
    public:
        void update(Bjorn& bjorn);
    };

    class PhysicsComponent
    {
    public:
        void update(Bjorn& bjorn, World& world);
    };

    class GraphicsComponent
    {
    public:
        void update(Bjorn& bjorn, Graphics& graphics);
    };

    class Bjorn
    {
    public:
        Bjorn(InputComponent* inputComponent);
        void update(World& world, Graphics& graphics);

        int velocity;
        int x, y;

    private:
        InputComponent* inputComponent;
        PhysicsComponent physicsComponent;
        GraphicsComponent graphicsComponent;
    };
}

#endif//cpp_component08_h