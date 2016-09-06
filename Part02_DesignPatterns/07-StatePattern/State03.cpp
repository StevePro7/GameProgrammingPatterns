#include "State03.h"

namespace Spaghetti03
{
    void Heroine::setGraphics(Animate animate)
    {
    }
    void Heroine::handleInput(Input input)
    {
        if (PRESS_B == input)
        {
            if (!isJumping && !isDucking)
            {
                // Jump if not jumping.
                yVelocity = JUMP_VELOCITY;
                setGraphics(IMAGE_JUMP);
                isJumping = true;
            }
        }
        else if (PRESS_DOWN == input)
        {
            if (!isJumping)
            {
                isDucking = true;
                setGraphics(IMAGE_DUCK);
            }
            else
            {
                isJumping = true;
                setGraphics(IMAGE_DIVE);
            }
        }
        else if (RELEASE_DOWN == input)
        {
            if (isDucking)
            {
                // Stand.
                isDucking = false;
                setGraphics(IMAGE_STAND);
            }
        }
    }
}