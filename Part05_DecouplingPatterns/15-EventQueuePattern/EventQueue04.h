#ifndef cpp_eventqueue04_h
#define cpp_eventqueue04_h

#include "EventQueue00.h"

namespace DeferList2
{
    class Audio
    {
    public:
        static void update();
    private:
        static const int MAX_PENDING = 16;
        static PlayMessage pending[MAX_PENDING];
        static int numPending;
    };
}

#endif//cpp_eventqueue04_h