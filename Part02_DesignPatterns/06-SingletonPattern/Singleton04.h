#ifndef cpp_singleton04_h
#define cpp_singleton04_h

namespace Singleton04
{
#define PLAYSTATION3 1
#define NINTENDO_WII 2

#define PLATFORM PLAYSTATION3

    class PS3FileSystem;
    class WiiFileSystem;

    class FileSystem
    {
    public:
        static FileSystem& Instance();
        virtual ~FileSystem();
        virtual char* readFile(char* path) = 0;
        virtual void writeFile(char* path, char* contents) = 0;
    };

    // Derived file systems.
    class PS3FileSystem : public FileSystem
    {
    public:
        char* readFile(char* path);
        void writeFile(char* path, char* contents);
    };

    class WiiFileSystem : public FileSystem
    {
    public:
        char* readFile(char* path);
        void writeFile(char* path, char* contents);
    };
}

#endif//cpp_singleton04_h