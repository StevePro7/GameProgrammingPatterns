#ifndef cpp_subclass03_h
#define cpp_subclass03_h

#include "SubclassSandbox00.h"

namespace Forwarding
{
    struct SoundEngine
    {
        void play(SoundId sound, double volume);
    };
}

#endif//cpp_subclass03_h