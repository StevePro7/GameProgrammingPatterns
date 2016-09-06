#ifndef cpp_gameloop02_h
#define cpp_gameloop02_h

#include "GameLoop00.h"

namespace EventLoop
{
    class Event
    {
    };

    Event* waitForEvent();
    bool dispatchEvent(Event* event);
    void loop();
}

#endif//cpp_gameloop02_h