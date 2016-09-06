#ifndef cpp_singleton03_h
#define cpp_singleton03_h

#include <stdlib.h>

namespace Singleton03
{
    class FileSystem
    {
    public:
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

#endif//cpp_singleton03_h