#ifndef cpp_servicelocator02_h
#define cpp_servicelocator02_h

#include "ServiceLocator00.h"

namespace Version02
{
    class DebugAudio : public Audio
    {
    public:
        void playSound(int soundId);
        void stopSound(int soundId);
        void stopAllSounds();
    };

    class ReleaseAudio : public DebugAudio
    {
    };

    class Locator
    {
    public:
        static Audio& getAudio();

    private:
#if DEBUG
        static DebugAudio service;
#else
        static ReleaseAudio service;
#endif
    };
}

#endif//cpp_servicelocator02_h