#include "Component07.h"

namespace AbstractInput
{
    InputComponent::~InputComponent()
    {
    }

    void PlayerInputComponent::update(Bjorn& bjorn)
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
        }
    }
}