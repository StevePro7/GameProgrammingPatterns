#ifndef cpp_doublebuffer03_h
#define cpp_doublebuffer03_h

#include "DoubleBuffer00.h"

namespace UnbufferedSlapstick
{
    class Stage;

    class Actor
    {
    public:
        Actor();
        virtual ~Actor();
        virtual void update() = 0;

        void reset();
        void slap();
        bool wasSlapped();

    private:
        bool slapped;
    };

    class Stage
    {
    public:
        void add(Actor* actor, int index);
        void update();

    private:
        static const int NUM_ACTORS = 3;
        Actor* actors[NUM_ACTORS];
    };

    class Comedian : public Actor
    {
    public:
        Comedian();
        Comedian(const char* name);
        void face(Actor* actor);
        void update();

    private:
        const char* name;
        Actor* facing;
    };
}

#endif//cpp_doublebuffer03_h