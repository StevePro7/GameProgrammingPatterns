#ifndef cpp_eventqueue08_h
#define cpp_eventqueue08_h

#include "EventQueue00.h"

namespace Queued
{
    class Audio
    {
    public:
        Audio();
        void playSound(SoundId id, int volume);
        void update();

    private:
        class SoundMessage
        {
        public:
            SoundId id;
            int volume;
        };

        static const int MAX_MESSAGES = 16;
        SoundMessage queue[MAX_MESSAGES];
        int head;
        int numMessages;
    };
}

#endif//cpp_eventqueue08_h