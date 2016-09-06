#include "SubclassSandbox05.h"

namespace HelperClassAfter
{
    void SoundPlayer::playSound(SoundId sound, double volume)
    {
        // Code here.
    }
    void SoundPlayer::stopSound(SoundId sound)
    {
        // Code here.
    }
    void SoundPlayer::setVolume(SoundId sound)
    {
        // Code here.
    }

    SoundPlayer& Superpower::getSoundPlayer()
    {
        return soundPlayer;
    }
}