#ifndef cpp_eventqueue03_h
#define cpp_eventqueue03_h

#include "EventQueue00.h"

namespace DeferList
{
    class Audio
    {
    public:
        static void init();
        static void playSound(SoundId id, int volume);

    private:
        static const int MAX_PENDING = 16;
        static PlayMessage pending[MAX_PENDING];
        static int numPending;
    };
}

#endif//cpp_eventqueue03_h