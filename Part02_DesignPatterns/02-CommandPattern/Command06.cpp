#include "Command06.h"

namespace UndoAfter
{
    Command::~Command()
    {
    }


    MoveUnitCommand::MoveUnitCommand(Unit* u, int x, int y) : unit(u), xBefore(0), yBefore(0), x(x), y(y)
    {
    }

    void MoveUnitCommand::execute()
    {
        // Remember the unit position before
        // So we can restore it as necessary
        xBefore = unit->X();
        yBefore = unit->Y();

        unit->moveTo(x, y);
    }

    void MoveUnitCommand::undo()
    {
        unit->moveTo(xBefore, yBefore);
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