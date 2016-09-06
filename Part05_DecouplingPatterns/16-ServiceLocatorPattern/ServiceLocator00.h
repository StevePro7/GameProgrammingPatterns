#ifndef cpp_servicelocator00_h
#define cpp_servicelocator00_h

#include <iostream>
#include <assert.h>

class AudioSystem
{
public:
    static void playSound(int id);
    static AudioSystem* instance();
};

void example();

class Audio
{
public:
    virtual ~Audio();
    virtual void playSound(int soundId) = 0;
    virtual void stopSound(int soundId) = 0;
    virtual void stopAllSounds() = 0;
};

class ConsoleAudio : public Audio
{
public:
    void playSound(int soundId);
    void stopSound(int soundId);
    void stopAllSounds();
};

class LoggedAudio : public Audio
{
public:
    LoggedAudio(Audio& wrapped);
    void playSound(int soundId);
    void stopSound(int soundId);
    void stopAllSounds();

private:
    void log(const char* message);
    Audio &wrapped;
};

#endif//cpp_servicelocator00_h