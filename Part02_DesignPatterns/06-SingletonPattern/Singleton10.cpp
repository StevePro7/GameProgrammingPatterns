#include "Singleton10.h"

namespace Singleton10
{
    void MyAudioPlayer::play(int d)
    {
    }

    Game Game::instance = Game();

    Game& Game::Instance()
    {
        return instance;
    }
    Log& Game::getLog()
    {
        return *log;
    }

    FileSystem& Game::getFileSystem()
    {
        return *fileSystem;
    }
    AudioPlayer& Game::getAudioPlayer()
    {
        return *audioPlayer;
    }

    Game::Game()
    {
        log = new Log();
        fileSystem = new FileSystem();
        audioPlayer = new MyAudioPlayer();
    }
}