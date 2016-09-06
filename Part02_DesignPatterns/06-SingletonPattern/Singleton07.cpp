#include "Singleton07.h"

namespace Singleton07
{
    int Bullet::getX()
    {
        return x;
    }
    int Bullet::getY()
    {
        return y;
    }
    void Bullet::setX(int tx)
    {
        x = tx;
    }
    void Bullet::setY(int ty)
    {
        y = ty;
    }


    Bullet* BulletManager::create(int x, int y)
    {
        Bullet* bullet = new Bullet();
        bullet->setX(x);
        bullet->setY(y);

        return bullet;
    }
    bool BulletManager::isOnScreen(Bullet& bullet)
    {
        return  bullet.getX() >= 0 &&
                bullet.getY() <= SCREEN_WIDTH &&
                bullet.getY() >= 0 &&
                bullet.getY() <= SCREEN_HEIGHT;
    }
    void BulletManager::move(Bullet& bullet)
    {
        bullet.setX(bullet.getX() + 5);
    }
}