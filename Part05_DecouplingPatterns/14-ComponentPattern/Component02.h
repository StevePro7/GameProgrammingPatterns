#ifndef cpp_component02_h
#define cpp_component02_h

#include "Component00.h"

namespace Monolithic
{
    class Bjorn
    {
    public:
        Bjorn();
        void update(World& world, Graphics& graphics);

    private:
        static const int WALK_ACCERLERATION = 1;

        int velocity;
        int x, y;

        Volume volume;

        Sprite spriteStand;
        Sprite spriteWalkLeft;
        Sprite spriteWalkRight;
    };
}

#endif//cpp_component02_h