#include "Singleton06.h"

#include <assert.h>

namespace Singleton06
{
    bool FileSystem::instantiated = false;

    FileSystem::FileSystem()
    {
        assert(!instantiated);
        instantiated = true;
    }
    FileSystem::~FileSystem()
    {
        instantiated = false;
    }
}