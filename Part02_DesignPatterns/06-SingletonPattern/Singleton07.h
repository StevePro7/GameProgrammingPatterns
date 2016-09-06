#ifndef cpp_singleton07_h
#define cpp_singleton07_h

namespace Singleton07
{
#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 100

    class Bullet
    {
    public:
        int getX();
        int getY();
        void setX(int tx);
        void setY(int ty);

    private:
        int x, y;
    };


    class BulletManager
    {
    public:
        Bullet* create(int x, int y);
        bool isOnScreen(Bullet& bullet);
        void move(Bullet& bullet);
    };
}

#endif//cpp_singleton07_h