#ifndef observer00_h
#define observer00_h

#include <iostream>
#include <stdlib.h>

namespace ObserverPattern
{
    static const int SURFACE_BRIDGE = 0;
    static const int GRAVITY = 1;
    static const int EVENT_START_FALL = 1;

    class Entity
    {
    public:
        Entity();
        ~Entity();
        bool isHero() const;
        bool isStandingOn(int surface) const;
        bool isOnSurface();
        void accelerate(int force);
        void update();
    };

    enum Event
    {
        EVENT_ENTITY_FELL
    };

    enum Achievement
    {
        ACHIEVEMENT_FELL_OFF_BRIDGE
    };
}

#endif//observer00_h