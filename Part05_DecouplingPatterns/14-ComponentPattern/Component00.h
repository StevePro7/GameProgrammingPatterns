#ifndef cpp_component00_h
#define cpp_component00_h

#include <iostream>
#include <stdlib.h>

enum Joystick
{
    DIR_NONE,
    DIR_LEFT,
    DIR_RIGHT
};

class Controller
{
public:
    static Joystick getJoystickDirection();
};

class Sprite
{
};

class Graphics
{
public:
    void draw(Sprite& sprite, int x, int y);
};

class Volume
{
};

class World
{
public:
    void resolveCollision(Volume& volume, int& x, int& y, int& velocity);
};

template<class T>
void use(const T& obj)
{
}

#endif//cpp_component00_h