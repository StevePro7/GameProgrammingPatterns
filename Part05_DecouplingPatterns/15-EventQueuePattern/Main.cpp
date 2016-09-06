#include "EventQueue08.h"

using namespace Queued;

int main()
{
    Audio audio;
    audio.playSound(SOUND_BLOOP, VOL_MAX);
    audio.update();
    return 0;
}