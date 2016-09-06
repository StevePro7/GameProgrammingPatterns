#include "Singleton01.h"

namespace Singleton01
{
    FileSystem* FileSystem::instance;

    FileSystem& FileSystem::Instance()
    {
        // Lazy initialize.
        if (NULL == instance)
        {
            instance = new FileSystem();
        }

        return *instance;
    }

    FileSystem::FileSystem()
    {
    }
}