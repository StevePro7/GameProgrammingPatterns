#ifndef cpp_state03_h
#define cpp_state03_h

#include "State00.h"
using namespace StateNS;

namespace Spaghetti03
{
    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void handleInput(Input input);

    private:
        double yVelocity;
        bool isJumping;
        bool isDucking;
    };
}

#endif//cpp_state03_h