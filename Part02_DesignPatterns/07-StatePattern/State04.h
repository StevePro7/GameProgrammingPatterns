#ifndef cpp_state04_h
#define cpp_state04_h

#include "State00.h"
using namespace StateNS;

namespace FSM
{
    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void handleInput(Input input);
        void superBomb();
        void update();

    private:
        State state;
        double yVelocity;
        int chargeTime;
    };
}

#endif//cpp_state04_h