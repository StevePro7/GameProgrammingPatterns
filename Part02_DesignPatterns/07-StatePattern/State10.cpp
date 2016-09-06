#include "State10.h"

namespace Concurrent
{
    void HeroineState::handleInput(Heroine& heroine, Input input)
    {
    }

    void Heroine::handleInput(Input input)
    {
        state->handleInput(*this, input);
        equiment->handleInput(*this, input);
    }
};