#ifndef cpp_component06_h
#define cpp_component06_h

#include "Component00.h"

namespace ComponentBjorn
{
    class Bjorn;

    class InputComponent
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
        void update(World& world, Graphics& graphics);

        int velocity;
        int x, y;

    private:
        InputComponent inputComponent;
        PhysicsComponent physicsComponent;
        GraphicsComponent graphicsComponent;
    };
}

#endif//cpp_component06_h