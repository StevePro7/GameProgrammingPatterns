#ifndef cpp_state08_h
#define cpp_state08_h

#include "State00.h"
using namespace StateNS;

namespace EnterActionState
{
    class HeroineState
    {
    };

    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void changeState(HeroineState* state);

    private:
        friend class JumpingState;
    };

    class StandingState : public HeroineState
    {
    };

    class DuckingState : public HeroineState
    {
    public:
        HeroineState* handleInput(Heroine& heroine, Input input);
    };
}

#endif//cpp_state08_h