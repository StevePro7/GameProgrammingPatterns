#include "State01.h"

namespace Spaghetti01
{
    void Heroine::setGraphics(Animate animate)
    {
    }
    void Heroine::handleInput(Input input)
    {
        if (PRESS_B == input)
        {
            yVelocity = JUMP_VELOCITY;
            setGraphics(IMAGE_JUMP);
        }
    }
}