#ifndef cpp_servicelocator01_h
#define cpp_servicelocator01_h

#include "ServiceLocator00.h"

namespace Version01
{
    class Locator
    {
    public:
        static Audio* getAudio();
        static void provide(Audio* service);

    private:
        static Audio* service;
    };
}

#endif//cpp_servicelocator01_h