#ifndef cpp_command0_h
#define cpp_command06_h

#include "Command01.h"
using namespace CommandPattern;

namespace UndoAfter
{
    class Command
    {
    public:
        virtual ~Command();
        virtual void execute() = 0;
        virtual void undo() = 0;
    };


    class MoveUnitCommand : public Command
    {
    public:
        MoveUnitCommand(Unit* unit, int x, int y);
        void execute();
        void undo();

    private:
        Unit* unit;
        int xBefore, yBefore;
        int x, y;
    };


    class InputHandler
    {
    public:
        InputHandler();
        ~InputHandler();
        Command* handleInput(Unit* unit);
    };
}

#endif//cpp_command06_h