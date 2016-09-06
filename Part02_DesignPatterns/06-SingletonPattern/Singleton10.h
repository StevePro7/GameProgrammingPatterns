#ifndef cpp_singleton10_h
#define cpp_singleton10_h

namespace Singleton10
{
    class Log {};
    class FileSystem {};

    class AudioPlayer
    {
    public:
        virtual void play(int d) = 0;
    };

    class MyAudioPlayer : public AudioPlayer
    {
    public:
        void play(int d);
    };


    class Game
    {
    public:
        static Game& Instance();// { return instance; }

        // Functions to set log, et. al.
        Log& getLog();
        FileSystem& getFileSystem();
        AudioPlayer& getAudioPlayer();

    private:
        static Game instance;
        Game();
        Log* log;
        FileSystem* fileSystem;
        AudioPlayer* audioPlayer;
    };
}

#endif//cpp_singleton10_h