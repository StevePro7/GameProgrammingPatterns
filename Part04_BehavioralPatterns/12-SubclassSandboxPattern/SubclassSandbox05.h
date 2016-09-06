#ifndef cpp_subclass05_h
#define cpp_subclass05_h

#include "SubclassSandbox00.h"

namespace HelperClassAfter
{
    class SoundPlayer
    {
    public:
        void playSound(SoundId sound, double volume);
        void stopSound(SoundId sound);
        void setVolume(SoundId sound);
    };

    class Superpower
    {
    protected:
        SoundPlayer& getSoundPlayer();

        // Sandbox method and other operations.
    private:
        SoundPlayer soundPlayer;
    };
}

#endif//cpp_subclass05_h