#include "EventQueue02.h"

namespace Unqueued
{
    void Audio::playSound(SoundId id, int volume)
    {
        ResourceId resource = loadSound(id);
        int channel = findOpenChannel();
        if (-1 == channel)
        {
            //return;
        }

        startSound(resource, channel, volume);
    }

    void Menu::onSelect(int index)
    {
        Audio::playSound(SOUND_BLOOP, VOL_MAX);
    }
}