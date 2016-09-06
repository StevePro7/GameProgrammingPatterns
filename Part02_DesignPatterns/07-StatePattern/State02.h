#ifndef cpp_state02_h
#define cpp_state02_h

#include "State00.h"
using namespace StateNS;

namespace Spaghetti02
{
    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void handleInput(Input input);

    private:
        double yVelocity;
        bool isJumping;
    };
}

#endif//cpp_state02_h