#ifndef cpp_command04_h
#define cpp_command04_h

namespace CommandedActors
{
    class GameActor
    {
    public:
        void jump();
        void swap();
    };


    class Command
    {
    public:
        virtual ~Command();
        virtual void execute(GameActor& actor) = 0;
    };

    class JumpCommand : public Command
    {
    public:
        void execute(GameActor& actor);
    };
     class SwapCommand : public Command
    {
    public:
        void execute(GameActor& actor);
    };


    class InputHandler
    {
    public:
        InputHandler();
        ~InputHandler();
        Command* handleInput();

    private:
        Command* buttonX;
        Command* buttonY;
        Command* buttonA;
        Command* buttonB;
    };

}

#endif//cpp_command04_h