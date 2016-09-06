#ifndef cpp_state00_h
#define cpp_state00_h

#include <stdlib.h>

namespace StateNS
{
    enum Input
    {
        PRESS_A,
        PRESS_B,
        PRESS_LEFT,
        PRESS_RIGHT,
        PRESS_DOWN,
        RELEASE_A,
        RELEASE_DOWN
    };

    enum Animate
    {
        IMAGE_JUMP,
        IMAGE_DUCK,
        IMAGE_STAND,
        IMAGE_DIVE
    };

    static const int JUMP_VELOCITY = 1;
    static const int MAX_CHARGE = 10;

    enum State
    {
        STATE_STANDING,
        STATE_JUMPING,
        STATE_DUCKING,
        STATE_DIVING
    };
}

#endif//cpp_state00_h