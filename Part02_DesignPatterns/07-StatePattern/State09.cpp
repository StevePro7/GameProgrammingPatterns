#include "State09.h"

namespace EnterActions
{
    HeroineState::~HeroineState()
    {
    }
    void HeroineState::enter(Heroine& heroine)
    {
    }
    HeroineState* HeroineState::handleInput(Heroine& heroine, Input input)
    {
        return NULL;
    }

    void Heroine::handleInput(Input input)
    {
        // Change state.
        HeroineState* newState = state->handleInput(*this, input);
        if (NULL != state)
        {
            delete state;
            state = newState;

            // Call the enter action on the new state.
            state->enter(*this);
        }
    }
    void Heroine::setGraphics(Animate animate)
    {
    }

    // Enter with standing state.
    void StandingState::enter(Heroine& heroine)
    {
        heroine.setGraphics(IMAGE_STAND);
    }
    HeroineState* StandingState::handleInput(Heroine& heroine, Input input)
    {
        return NULL;
    }

    // Enter with standing state.
    HeroineState* DuckingState::handleInput(Heroine& heroine, Input input)
    {
        if (RELEASE_DOWN == input)
        {
            return new StandingState();
        }

        return NULL;
    }
}