#include "State04.h"


namespace FSM
{
    void Heroine::setGraphics(Animate animate)
    {
    }
    void Heroine::handleInput(Input input)
    {
        switch (state)
        {
        case StateNS::STATE_STANDING:
            if (PRESS_B == input)
            {
                state = STATE_JUMPING;
                yVelocity = JUMP_VELOCITY;
                setGraphics(IMAGE_JUMP);
            }
            else if (PRESS_DOWN == input)
            {
                state = STATE_DUCKING;
                chargeTime = 0;
                setGraphics(IMAGE_DUCK);
            }
            break;

        case StateNS::STATE_JUMPING:
            if (PRESS_DOWN == input)
            {
                state = STATE_DIVING;
                setGraphics(IMAGE_DIVE);
            }
            break;

        case StateNS::STATE_DUCKING:
            if (RELEASE_DOWN == input)
            {
                state = STATE_STANDING;
                setGraphics(IMAGE_STAND);
            }
            break;

        case StateNS::STATE_DIVING:
            break;

        default:
            break;
        }
    }
    void Heroine::superBomb()
    {
    }
    void Heroine::update()
    {
        if (STATE_DUCKING ==  state)
        {
            chargeTime++;
            if (chargeTime > MAX_CHARGE)
            {
                superBomb();
            }
        }
    }
}