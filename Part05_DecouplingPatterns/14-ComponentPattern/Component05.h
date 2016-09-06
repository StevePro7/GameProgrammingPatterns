#ifndef cpp_component05_h
#define cpp_component05_h

#include "Component00.h"

namespace Components
{
    class Bjorn
    {
    public:
        int velocity;
        int x, y;
    };

    class InputComponent
    {
    public:
        void update(Bjorn& bjorn);
    };

    class PhysicsComponent
    {
    public:
        void update(Bjorn& bjorn, World& world);

    private:
        Volume volume;
    };

    class GraphicsComponent
    {
    public:
        void update(Bjorn& bjorn, Graphics& graphics);

    private:
        Sprite spriteStand;
        Sprite spriteWalkLeft;
        Sprite spriteWalkRight;
    };
}

#endif//cpp_component05_h