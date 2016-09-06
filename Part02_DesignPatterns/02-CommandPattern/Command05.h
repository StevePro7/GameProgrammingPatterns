#ifndef cpp_command05_h
#define cpp_command05_h

#include "Command01.h"
using namespace CommandPattern;

namespace UndoBefore
{
    class Command
    {
    public:
        virtual ~Command();
        virtual void execute() = 0;
    };


    class MoveUnitCommand : public Command
    {
    public:
        MoveUnitCommand(Unit* u, int x, int y);
        void execute();

    private:
        Unit* unit;
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

#endif//cpp_command05_h