#include "EventQueue00.h"

ResourceId loadSound(SoundId id)
{
    return 0;
}
int findOpenChannel()
{
    return -1;
}
void startSound(ResourceId resource, int channel, int volume)
{
}
Event getNextEvent()
{
    return 0;
}
void EventLoop()
{
    bool running = true;
    while (running)
    {
        Event event = getNextEvent();
        use(event);
    }
}