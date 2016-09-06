#ifndef cpp_command01_h
#define cpp_command01_h

#include <stdlib.h>

namespace CommandPattern
{
    enum Button
    {
        BUTTON_UP,
        BUTTON_DOWN,
        BUTTON_LEFT,
        BUTTON_RIGHT,
        BUTTON_X,
        BUTTON_Y,
        BUTTON_A,
        BUTTON_B
    };

    bool isPressed(Button button);
    void jump();
    void fireGun();
    void swapWeapon();
    void lurchIneffectively();

    template<class T>
    void use(const T& obj)
    {
    }

    class Unit
    {
    public:
        int X() { return i; }
        int Y() { return j; }

        void moveTo(int i_, int j_)
        {
            i = i_;
            j = j_;
        }

    private:
        int i, j;
    };

}

#endif//cpp_command01_h