#include "Command06.h"
#include "Command01.h"

using namespace UndoAfter;
using namespace CommandPattern;

int main()
{
    Unit* unit = new Unit();

    InputHandler* inputHandler = new InputHandler();
    Command* command = inputHandler->handleInput(unit);
    if (command)
    {
        command->execute();
        command->undo();
    }

    delete inputHandler;
    delete unit;
    return 0;
}



/*
//Command03
int main()
{
    InputHandler* ih = new InputHandler();
    ih->handleInput();
    delete ih;
}
*/

/*
//Command04

#include "Command04.h"
#include "Command01.h"

int main()
{
    GameActor actor;
    InputHandler* inputHandler = new InputHandler();

    if (inputHandler)
    {
        Command* command = inputHandler->handleInput();
        if (command)
        {
            command->execute(actor);
        }

        use(actor);
        delete inputHandler;
    }


    return 0;
}
*/


/*
//Command05
#include "Command05.h"
#include "Command01.h"

int main()
{
    Unit* unit = new Unit();
    //MoveUnitCommand* mu = new MoveUnitCommand(unit, 1, 2);
    //mu->execute();

    InputHandler* inputHandler = new InputHandler();
    Command* command = inputHandler->handleInput(unit);
    if (command)
    {
        command->execute();
    }

    delete inputHandler;
    //delete mu;
    delete unit;
    return 0;
}
*/