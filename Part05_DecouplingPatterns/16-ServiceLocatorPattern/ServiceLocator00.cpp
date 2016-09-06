#include "ServiceLocator00.h"

void AudioSystem::playSound(int id)
{
}

AudioSystem* AudioSystem::instance()
{
    return NULL;
}

void example()
{
    int VERY_LOUD_BANG = 0;

    // Use a static class.
    AudioSystem::playSound(VERY_LOUD_BANG);

    // Or maybe a singleton.
    AudioSystem::instance()->playSound(VERY_LOUD_BANG);
}

Audio::~Audio()
{
}

void ConsoleAudio::playSound(int soundId)
{
    // Play sound using console audio API.
}
void ConsoleAudio::stopSound(int soundId)
{
    // Stop sound using console audio API.
}
void ConsoleAudio::stopAllSounds()
{
    // Stop all sounds using console audio API.
}

LoggedAudio::LoggedAudio(Audio& wrapped) : wrapped(wrapped)
{
}
void LoggedAudio::playSound(int soundId)
{
    log("play sound");
    wrapped.playSound(soundId);
}
void LoggedAudio::stopSound(int soundId)
{
    log("stop sound");
    wrapped.stopSound(soundId);
}
void LoggedAudio::stopAllSounds()
{
    log("stop all sounds");
    wrapped.stopAllSounds();
}
void LoggedAudio::log(const char* message)
{
}