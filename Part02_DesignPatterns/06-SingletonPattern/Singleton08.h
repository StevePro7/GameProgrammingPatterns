#ifndef cpp_singleton08_h
#define cpp_singleton08_h

namespace Singleton08
{
#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 100

    class Bullet
    {
    public:
        Bullet(int tx, int ty);
        bool isOnScreen();
        void move();

    private:
        int x, y;
    };

}

#endif//cpp_singleton08_h