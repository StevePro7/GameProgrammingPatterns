#include "Singleton05.h"

namespace Singleton05
{
    FileSystem FileSystem::instance = FileSystem();

    FileSystem& FileSystem::Instance()
    {
        return instance;
    }

    FileSystem::FileSystem()
    {
    }
}