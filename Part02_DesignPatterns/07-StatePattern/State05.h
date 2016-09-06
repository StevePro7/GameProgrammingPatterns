#ifndef cpp_state05_h
#define cpp_state05_h

#include "State00.h"
using namespace StateNS;

namespace StatePattern
{
    class HeroineState;

    class Heroine
    {
    public:
        void handleInput(Input input);
        void update();
        void setGraphics(Animate animate);
        void superBomb();

    private:
        friend class StandingState;
        friend class JumpingState;

        HeroineState* state;
        double yVelocity;
    };

    class JumpingState;

    class HeroineState
    {
    public:
        virtual ~HeroineState();
        virtual void handleInput(Heroine& heroine, Input input);
        virtual void update(Heroine& heroine);

    private:
        static JumpingState jumping;
    };

    class JumpingState : public HeroineState
    {
    };

    class StandingState : public HeroineState
    {
    };

    class DuckingState : public HeroineState
    {
    public:
        DuckingState();
        void handleInput(Heroine& heroine, Input input);
        void update(Heroine& heroine);

    private:
        int chargeTime;
    };
}

#endif//cpp_state05_h