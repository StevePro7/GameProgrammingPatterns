#ifndef cpp_subclass04_h
#define cpp_subclass04_h

#include "SubclassSandbox00.h"

namespace HelperClassBefore
{
    class Superpower
    {
    protected:
        void playSound(SoundId sound, double volume);
        void stopSound(SoundId sound);
        void setVolume(SoundId sound);
    };
}

#endif//cpp_subclass04_h