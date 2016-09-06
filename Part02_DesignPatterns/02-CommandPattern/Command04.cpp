#include "Command04.h"
#include "Command01.h"

using namespace CommandPattern;

namespace CommandedActors
{
    void GameActor::jump()
    {
    }
    void GameActor::swap()
    {
    }

    Command::~Command()
    {
    }
    void Command::execute(GameActor& actor)
    {
    }


    void JumpCommand::execute(GameActor& actor)
    {
        actor.jump();
    }
    void SwapCommand::execute(GameActor& actor)
    {
        actor.swap();
    }

    InputHandler::InputHandler()
    {
        buttonX = new JumpCommand();
        buttonY = new SwapCommand();
        buttonA = new JumpCommand();
        buttonB = new JumpCommand();
    }
    InputHandler::~InputHandler()
    {
        delete buttonX;
        delete buttonY;
        delete buttonA;
        delete buttonB;
    }
    Command* InputHandler::handleInput()
    {
        if (isPressed(BUTTON_X))
        {
            return buttonX;
        }
        else if (isPressed(BUTTON_Y))
        {
            return buttonY;
        }
        else if (isPressed(BUTTON_A))
        {
            return buttonA;
        }
        else if (isPressed(BUTTON_B))
        {
            return buttonB;
        }

        return NULL;
    }
}