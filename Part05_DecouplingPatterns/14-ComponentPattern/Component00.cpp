#include "Component00.h"

Joystick Controller::getJoystickDirection()
{
    // Determine which direction the user is
    // currently pressing on the joystick.
    return DIR_NONE;
}

void Graphics::draw(Sprite& sprite, int x, int y)
{
    // Draw the sprite at the given position.
}

void World::resolveCollision(Volume& volume, int& x, int& y, int& velocity)
{
    // Determine what the hero is colliding with
    // and modify position and velocity if need.
}