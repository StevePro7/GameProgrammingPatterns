#ifndef cpp_component03_h
#define cpp_component03_h

#include "Component00.h"

namespace SplittingInputComponent
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

    private:
        static const int WALK_ACCELERATION = 1;
    };
}

#endif//cpp_component03_h