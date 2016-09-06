#include "Singleton04.h"
#include <stdlib.h>

namespace Singleton04
{
    FileSystem& FileSystem::Instance()
    {
#if PLAYSTATION3 == PLATFORM
        static FileSystem* instance = new PS3FileSystem();
#elif NINTENDO_WII == PLATFORM
        static FileSystem* instance = new WiiFileSystem();
#endif
        return *instance;
    }
    FileSystem::~FileSystem()
    {
    }


    char* PS3FileSystem::readFile(char* path)
    {
        // Use Sony file IO API.
        return NULL;
    }
    void PS3FileSystem::writeFile(char* path, char* contents)
    {
        // Use Sony file IO API.
    }

    char* WiiFileSystem::readFile(char* path)
    {
        // Use Nintendo file IO API.
        return NULL;
    }
    void WiiFileSystem::writeFile(char* path, char* contents)
    {
        // Use Nintendo file IO API.
    }
}