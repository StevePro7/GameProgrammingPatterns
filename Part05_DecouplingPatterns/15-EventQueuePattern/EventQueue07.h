#ifndef cpp_eventqueue07_h
#define cpp_eventqueue07_h

#include "EventQueue00.h"

namespace Duplicate
{
    int max(int a, int b);

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

#endif//cpp_eventqueue07_h