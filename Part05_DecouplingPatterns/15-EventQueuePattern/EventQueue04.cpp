#include "EventQueue04.h"

namespace DeferList2
{
    PlayMessage Audio::pending[MAX_PENDING];
    int Audio::numPending;

    void Audio::update()
    {
        for (int i = 0; i < numPending; ++i)
        {
            ResourceId resource = loadSound(pending[i].id);
            int channel = findOpenChannel();
            if (-1 == channel)
            {
                //return;
            }
            startSound(resource, channel, pending[i].volume);
        }

        numPending = 0;
    }
}