#include "EventQueue01.h"

namespace EventQueue
{
    void eventLoop()
    {
        bool running = true;
        while (running)
        {
            Event event = getNextEvent();
            use(event);
        }
    }
}