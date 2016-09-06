#ifndef cpp_servicelocator04_h
#define cpp_servicelocator04_h

#include "ServiceLocator00.h"

namespace Version04
{
    class Locator
    {
    public:
        static Audio& getAudio();
    };
}

#endif//cpp_servicelocator04_h