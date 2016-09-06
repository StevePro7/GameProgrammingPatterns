#include "Singleton08.h"

namespace Singleton08
{
    Bullet::Bullet(int tx, int ty) : x(tx), y(ty)
    {
    }
    bool Bullet::isOnScreen()
    {
        return  x >= 0 &&
                x <= SCREEN_WIDTH &&
                y >= 0 &&
                y <= SCREEN_HEIGHT;
    }
    void Bullet::move()
    {
        x += 5;
    }
}