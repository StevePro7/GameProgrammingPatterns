#include "State05.h"

namespace StatePattern
{
    void Heroine::handleInput(Input input)
    {
        state->handleInput(*this, input);
    }
    void Heroine::update()
    {
        state->update(*this);
    }
    void Heroine::setGraphics(Animate animate)
    {
    }
    void Heroine::superBomb()
    {
    }

    HeroineState::~HeroineState()
    {
    }
    void HeroineState::handleInput(Heroine& heroine, Input input)
    {
    }
    void HeroineState::update(Heroine& heroine)
    {
    }

    DuckingState::DuckingState() : chargeTime(0)
    {
    }
    void DuckingState::handleInput(Heroine& heroine, Input input)
    {
        if (RELEASE_DOWN == input)
        {
            // Change to staning state.
            heroine.setGraphics(IMAGE_STAND);
        }
    }
    void DuckingState::update(Heroine& heroine)
    {
        chargeTime++;
        if (chargeTime > MAX_CHARGE)
        {
            heroine.superBomb();
        }
    }
}