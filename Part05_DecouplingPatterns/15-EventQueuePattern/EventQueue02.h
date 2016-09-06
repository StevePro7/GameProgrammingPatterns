#ifndef cpp_eventqueue02_h
#define cpp_eventqueue02_h

#include "EventQueue00.h"

namespace Unqueued
{
    class Audio
    {
    public:
        static void playSound(SoundId id, int volume);
    };

    class Menu
    {
    public:
        void onSelect(int index);
    };
}

#endif//cpp_eventqueue02_h