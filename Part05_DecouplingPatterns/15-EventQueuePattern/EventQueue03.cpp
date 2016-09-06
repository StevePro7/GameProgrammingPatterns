#include "EventQueue03.h"

namespace DeferList
{
    PlayMessage Audio::pending[MAX_PENDING];
    int Audio::numPending;

    void Audio::init()
    {
        numPending = 0;
    }
    void Audio::playSound(SoundId id, int volume)
    {
        assert(numPending < MAX_PENDING);
        pending[numPending].id = id;
        pending[numPending].volume = volume;
        numPending++;
    }
}