#include "State02.h"

namespace Spaghetti02
{
    void Heroine::setGraphics(Animate animate)
    {
    }
    void Heroine::handleInput(Input input)
    {
        if (PRESS_B == input)
        {
            // Jump if not jumping.
            yVelocity = JUMP_VELOCITY;
            setGraphics(IMAGE_JUMP);
            isJumping = true;
        }
        else if (PRESS_DOWN == input)
        {
            if (!isJumping)
            {
                setGraphics(IMAGE_DUCK);
            }
        }
        else if (RELEASE_DOWN == input)
        {
            setGraphics(IMAGE_STAND);
        }
    }
}