#include "ServiceLocator02.h"

namespace Version02
{
    void DebugAudio::playSound(int soundId)
    {
        // Do nothing.
    }
    void DebugAudio::stopSound(int soundId)
    {
        // Do nothing.
    }
    void DebugAudio::stopAllSounds()
    {
        // Do nothing.
    }

#if DEBUG
        DebugAudio Locator::service;
#else
        ReleaseAudio Locator::service;
#endif

    Audio& Locator::getAudio()
    {
        return service;
    }
}