#ifndef cpp_eventqueue06_h
#define cpp_eventqueue06_h

#include "EventQueue00.h"

namespace Ring
{
    class Audio
    {
    public:
        static void init();
        static void playSound(SoundId, int volume);
        static void update();

    private:
        static const int MAX_PENDING = 16;
        static PlayMessage pending[MAX_PENDING];
        static int head;
        static int tail;
    };
}

#endif//cpp_eventqueue06_h