#ifndef cpp_component07_h
#define cpp_component07_h

#include "Component00.h"

namespace AbstractInput
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
        virtual ~InputComponent();
        virtual void update(Bjorn& bjorn) = 0;
    };

    class PlayerInputComponent : public InputComponent
    {
    public:
        void update(Bjorn& bjorn);

    private:
        static const int WALK_ACCELERATION = 1;
    };
}

#endif//cpp_component07_h