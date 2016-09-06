#ifndef cpp_state07_h
#define cpp_state07_h

#include "State00.h"
using namespace StateNS;

namespace StaticStateInstances
{
    class StandingState;
    class DuckingState;
    class JumpingState;
    class DivingState;

    class HeroineState
    {
    public:
        static StandingState standing;
        static DuckingState ducking;
        static JumpingState jumping;
        static DivingState diving;
    };

    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void changeState(HeroineState* state);

    private:
        friend class JumpingState;
        HeroineState* state;
    };

    /*class StandingState : public HeroineState
    {
    };

    class DuckingState : public HeroineState
    {
    };

    class JumpingState : public HeroineState
    {
        void handleInput(Heroine& heroine, Input input)
        {
            if (input == PRESS_B)
            {
                heroine.state = &HeroineState::jumping;
                heroine.setGraphics(IMAGE_JUMP);
            }
        }
    };

    class DivingState : public HeroineState
    {
    };*/
}

#endif//cpp_state07_h