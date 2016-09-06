#ifndef cpp_state06_h
#define cpp_state06_h

#include "State00.h"
using namespace StateNS;

namespace InstancedStates
{
    class HeroineState;

    class Heroine
    {
    public:
        virtual void handleInput(Input input);

    private:
        HeroineState* state;
    };

    class HeroineState
    {
    public:
        virtual ~HeroineState();
        virtual HeroineState* handleInput(Heroine& heroine, Input input);
        virtual void update(Heroine& heroine);
    };

    class DuckingState : public HeroineState
    {
    };

    class StandingState : public HeroineState
    {
    public:
        HeroineState* handleInput(Heroine& heroine, Input input);
    };
}

#endif//cpp_state06_h