#include "Singleton03.h"
#include <stdlib.h>

namespace Singleton03
{
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