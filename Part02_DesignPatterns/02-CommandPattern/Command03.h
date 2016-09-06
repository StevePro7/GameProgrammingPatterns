#ifndef cpp_command03_h
#define cpp_command03_h

namespace InputHandlingCommand
{
    class Command
    {
    public:
        virtual ~Command();
        virtual void execute() = 0;
    };

    class JumpCommand : public Command
    {
    public:
        void execute();
    };
    class FireCommand : public Command
    {
    public:
        void execute();
    };
    class SwapCommand : public Command
    {
    public:
        void execute();
    };
    class LeanCommand : public Command
    {
    public:
        void execute();
    };

    class InputHandler
    {
    public:
        InputHandler();
        ~InputHandler();
        void handleInput();

    private:
        Command* buttonX;
        Command* buttonY;
        Command* buttonA;
        Command* buttonB;
    };
}

#endif//cpp_command03_h