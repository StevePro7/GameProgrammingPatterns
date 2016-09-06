#include "State06.h"

namespace InstancedStates
{
    void Heroine::handleInput(Input input)
    {
        HeroineState* tempState = state->handleInput(*this, input);
        if (NULL != state)
        {
            delete state;
            state = tempState;
        }
    }

    HeroineState::~HeroineState()
    {
    }
    HeroineState* HeroineState::handleInput(Heroine& heroine, Input input)
    {
        return NULL;
    }
    void HeroineState::update(Heroine& heroine)
    {
    }

    HeroineState* StandingState::handleInput(Heroine& heroine, Input input)
    {
        if (PRESS_DOWN == input)
        {
            // Other code.
            return new DuckingState();
        }

        // Stay in this state.
        return NULL;
    }
}