#include "State11.h"

namespace Hsm
{
    void HeroineState::handleInput(Heroine& heroine, Input input)
    {
    }

    void Heroine::handleInput(Input input)
    {
    }

    void OnGroundState::handleInput(Heroine& heroine, Input input)
    {
        if (PRESS_B == input)
        {
            // Jump.
        }
        else if (PRESS_DOWN == input)
        {
            // Duck.
        }
    }

    void DuckingState::handleInput(Heroine& heroine, Input input)
    {
        if (RELEASE_DOWN == input)
        {
            // Stand up.
        }
        else
        {
            // Didn't handle input so walk up hierarchy.
            OnGroundState::handleInput(heroine, input);
        }
    }
}