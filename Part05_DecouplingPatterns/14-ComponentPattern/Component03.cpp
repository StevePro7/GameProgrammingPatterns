#include "Component03.h"

namespace SplittingInputComponent
{
    void InputComponent::update(Bjorn& bjorn)
    {
        switch (Controller::getJoystickDirection())
        {
        case DIR_LEFT:
            bjorn.velocity -= WALK_ACCELERATION;
            break;

        case DIR_RIGHT:
            bjorn.velocity += WALK_ACCELERATION;
            break;

        case DIR_NONE:
            break;

        default:
            break;
        }
    }
}