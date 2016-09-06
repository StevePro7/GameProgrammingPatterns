#include "EventQueue08.h"

namespace Queued
{
    Audio::Audio() : head(0), numMessages(0)
    {
    }
    void Audio::playSound(SoundId id, int volume)
    {
        assert(numMessages < MAX_MESSAGES);

        queue[head].id = id;
        queue[head].volume = volume;

        head = (head + 1) % MAX_MESSAGES;
        numMessages++;
    }
    void Audio::update()
    {
    }
}