#include "ServiceLocator05.h"

namespace Version05
{
    void NullAudio::playSound(int soundId)
    {
        // Do nothing.
    }
    void NullAudio::stopSound(int soundId)
    {
        // Do nothing.
    }
    void NullAudio::stopAllSounds()
    {
        // Do nothing.
    }

    Audio* Locator::service ;
    NullAudio Locator::nullService;

    void Locator::initialize()
    {
        service = &nullService;
    }
    Audio& Locator::getAudio()
    {
        return *service;
    }
    void Locator::provide(Audio* theService)
    {
        service = theService;
    }
}