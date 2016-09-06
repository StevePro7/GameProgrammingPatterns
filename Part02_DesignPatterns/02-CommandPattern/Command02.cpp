#include "Command02.h"
#include "Command01.h"

using namespace CommandPattern;

namespace BeforeCommand
{
    void InputHandler::handleInput()
    {
        if (isPressed(BUTTON_X))
        {
            jump();
        }
        else if (isPressed(BUTTON_Y))
        {
            fireGun();
        }
        else if (isPressed(BUTTON_A))
        {
            swapWeapon();
        }
        else if (isPressed(BUTTON_B))
        {
            lurchIneffectively();
        }
    }
}