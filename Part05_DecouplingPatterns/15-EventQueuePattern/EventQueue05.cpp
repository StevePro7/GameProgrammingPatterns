#include "EventQueue05.h"

namespace HeadTail
{
    PlayMessage Audio::pending[MAX_PENDING];
    int Audio::head;
    int Audio::tail;

    void Audio::init()
    {
        head = 0;
        tail = 0;
    }
    void Audio::playSound(SoundId id, int volume)
    {
        assert(tail < MAX_PENDING);

        // Add to the end of the list.
        pending[tail].id = id;
        pending[tail].volume = volume;
        tail++;
    }
    void Audio::update()
    {
        // If there are no pending requests then do nothing.
        if (head == tail)
        {
            return;
        }

        ResourceId resource = loadSound(pending[head].id);
        int channel = findOpenChannel();
        if (-1 == channel)
        {
            //return;
        }
        startSound(resource, channel, pending[head].volume);
        head++;
    }
}