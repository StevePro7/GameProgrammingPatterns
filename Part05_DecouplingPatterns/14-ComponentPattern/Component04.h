#ifndef cpp_component04_h
#define cpp_component04_h

#include "Component00.h"

namespace SplittingAIComponent
{
    class Bjorn;

    class InputComponent
    {
    public:
        void update(Bjorn& bjorn);
    };

    class Bjorn
    {
    public:
        void update(World& world, Graphics& graphics);
        int velocity;
        int x, y;

    private:
        InputComponent input;
        Volume volume;

        Sprite spriteStand;
        Sprite spriteWalkLeft;
        Sprite spriteWalkRight;
    };
}

#endif//cpp_component04_h