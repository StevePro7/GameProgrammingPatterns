#ifndef cpp_singleton01_h
#define cpp_singleton01_h

#include <stdlib.h>

namespace Singleton01
{
    class FileSystem
    {
    public:
        static FileSystem& Instance();

    private:
        FileSystem();
        static FileSystem* instance;
    };
}

#endif//cpp_singleton01_h