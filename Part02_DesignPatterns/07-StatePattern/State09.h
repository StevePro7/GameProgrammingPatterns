#ifndef cpp_state09_h
#define cpp_state09_h

#include "State00.h"
using namespace StateNS;

namespace EnterActions
{
    class Heroine;

    class HeroineState
    {
    public:
        virtual ~HeroineState();
        virtual void enter(Heroine& heroine);
        virtual HeroineState* handleInput(Heroine& heroine, Input input);
    };

    class Heroine
    {
    public:
        void handleInput(Input input);
        void setGraphics(Animate animate);

    private:
        HeroineState* state;
    };

    class StandingState : public HeroineState
    {
    public:
        void enter(Heroine& heroine);
        HeroineState* handleInput(Heroine& heroine, Input input);
    };

    class DuckingState : public HeroineState
    {
    public:
        HeroineState* handleInput(Heroine& heroine, Input input);
    };
}

#endif//cpp_state09_h