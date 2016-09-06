#ifndef cpp_component10_h
#define cpp_component10_h

#include "Component00.h"

namespace DirectComponentRef
{
    class GameObject
    {
    public:
        int velocity;
        int x, y;
    };

    class BjornPhysicsComponent
    {
    public:
        bool isOnGround();
    };

    class BjornGraphicsComponent
    {
    public:
        BjornGraphicsComponent(BjornPhysicsComponent* physics);
        void Update(GameObject& obj, Graphics& graphics);

    private:
        BjornPhysicsComponent* physics;

        Sprite spriteStand;
        Sprite spriteWalkLeft;
        Sprite spriteWalkRight;
        Sprite spriteJump;
    };
}

#endif//cpp_component10_h