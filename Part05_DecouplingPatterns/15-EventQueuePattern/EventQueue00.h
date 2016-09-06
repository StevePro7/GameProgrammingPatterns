#ifndef cpp_eventqueue00_h
#define cpp_eventqueue00_h

#include <assert.h>

typedef int ResourceId;
typedef int SoundId;
typedef int Event;

static const int SOUND_BLOOP = 1;
static const int VOL_MAX = 1;

ResourceId loadSound(SoundId id);
int findOpenChannel();
void startSound(ResourceId resource, int channel, int volume);
Event getNextEvent();

template<class T>
void use(const T& t)
{
}

struct PlayMessage
{
    SoundId id;
    int volume;
};

#endif//cpp_eventqueue00_h