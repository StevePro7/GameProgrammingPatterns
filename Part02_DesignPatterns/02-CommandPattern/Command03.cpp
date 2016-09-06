#include "Command03.h"
#include "Command01.h"

using namespace CommandPattern;

namespace InputHandlingCommand
{
    Command::~Command()
    {
    }

    void JumpCommand::execute()
    {
        jump();
    }
    void FireCommand::execute()
    {
        fireGun();
    }
    void SwapCommand::execute()
    {
        swapWeapon();
    }
    void LeanCommand::execute()
    {
        lurchIneffectively();
    }


    InputHandler::InputHandler()
    {
        buttonX = new JumpCommand();
        buttonY = new FireCommand();
        buttonA = new SwapCommand();
        buttonB = new LeanCommand();
    }
     InputHandler::~InputHandler()
    {
        delete buttonX;
        delete buttonY;
        delete buttonA;
        delete buttonB;
    }

    void InputHandler::handleInput()
    {
        if (isPressed(BUTTON_X))
        {
            buttonX->execute();
        }
        else if (isPressed(BUTTON_Y))
        {
            buttonY->execute();
        }
        else if (isPressed(BUTTON_A))
        {
            buttonA->execute();
        }
        else if (isPressed(BUTTON_B))
        {
            buttonB->execute();
        }
    }

}