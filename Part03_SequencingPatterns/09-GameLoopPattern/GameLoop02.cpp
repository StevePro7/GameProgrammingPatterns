#include "GameLoop02.h"

namespace EventLoop
{
    Event* waitForEvent()
    {
        return NULL;
    }
    bool dispatchEvent(Event* event)
    {
        return false;
    }
    void loop()
    {
        while (true)
        {
            Event* event = waitForEvent();
            dispatchEvent(event);
        }
    }
}