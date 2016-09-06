#ifndef cpp_state10_h
#define cpp_state10_h

#include "State00.h"
using namespace StateNS;

namespace Concurrent
{
    class Heroine;

    class HeroineState
    {
    public:
        void handleInput(Heroine& heroine, Input input);
    };

    class Heroine
    {
    public:
        virtual void handleInput(Input input);

    private:
        // Two states.
        HeroineState* state;
        HeroineState* equiment;
    };
}

#endif//cpp_state10_h