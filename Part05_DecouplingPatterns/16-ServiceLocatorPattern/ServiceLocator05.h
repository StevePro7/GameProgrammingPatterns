#ifndef cpp_servicelocator05_h
#define cpp_servicelocator05_h

#include "ServiceLocator00.h"

namespace Version05
{
    class NullAudio : public Audio
    {
    public:
        void playSound(int soundId);
        void stopSound(int soundId);
        void stopAllSounds();
    };

    class Locator
    {
    public:
        static void initialize();
        static Audio& getAudio();
        static void provide(Audio* service);

    private:
        static Audio* service;
        static NullAudio nullService;
    };
}

#endif//cpp_servicelocator05_h