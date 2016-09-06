#ifndef cpp_servicelocator03_h
#define cpp_servicelocator03_h

#include "ServiceLocator00.h"

namespace Version03
{
    class Base
    {
        // Code to locate service and set service.

    protected:
        static Audio& getAudio();

    private:
        static Audio* service;
    };
}

#endif//cpp_servicelocator03_h