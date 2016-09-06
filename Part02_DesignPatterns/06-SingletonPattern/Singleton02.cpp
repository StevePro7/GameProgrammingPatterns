#include "Singleton02.h"

namespace SingletonStatic
{
    FileSystem& FileSystem::Instance()
    {
        static FileSystem* instance = new FileSystem();
        return *instance;
    }

    FileSystem::FileSystem()
    {
    }
}