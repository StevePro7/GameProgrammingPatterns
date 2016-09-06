#include "State08.h"

namespace EnterActionState
{
    void Heroine::setGraphics(Animate animate)
    {
    }

    void Heroine::changeState(HeroineState* state)
    {
    }

    // Enter standing before.
    HeroineState* DuckingState::handleInput(Heroine& heroine, Input input)
    {
        if (RELEASE_DOWN ==  input)
        {
            heroine.setGraphics(IMAGE_STAND);
            return new StandingState();
        }

        return NULL;
    }

}