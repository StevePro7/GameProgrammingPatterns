#include "Command05.h"

namespace UndoBefore
{
    Command::~Command()
    {
    }


    MoveUnitCommand::MoveUnitCommand(Unit* u, int x, int y)  : unit(u), x(x), y(y)
    {
    }

    void MoveUnitCommand::execute()
    {
        unit->moveTo(x, y);
    }


    InputHandler::InputHandler()
    {
    }
    InputHandler::~InputHandler()
    {
    }
    Command* InputHandler::handleInput(Unit* unit)
    {
        if (isPressed(BUTTON_X))
        {
            int destX = unit->X();
            int destY = unit->Y() - 1;

            return new MoveUnitCommand(unit, destX, destY);
        }
        else if (isPressed(BUTTON_Y))
        {
            int destX = unit->X();
            int destY = unit->Y() + 1;

            return new MoveUnitCommand(unit, destX, destY);
        }

        return NULL;
    }

}