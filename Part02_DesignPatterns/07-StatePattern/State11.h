#ifndef cpp_state11_h
#define cpp_state11_h

#include "State00.h"
using namespace StateNS;

namespace Hsm
{
    class Heroine;

    class HeroineState
    {
    public:
        virtual void handleInput(Heroine& heroine, Input input);
    };

    class Heroine
    {
    public:
        void handleInput(Input input);

    private:
        HeroineState* state;
    };

    class OnGroundState : public HeroineState
    {
    public:
        void handleInput(Heroine& heroine, Input input);
    };

    class DuckingState : public OnGroundState
    {
    public:
        void handleInput(Heroine& heroine, Input input);
    };
}

#endif//cpp_state11_h