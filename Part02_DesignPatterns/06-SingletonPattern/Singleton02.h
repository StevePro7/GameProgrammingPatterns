#ifndef cpp_singleton02_h
#define cpp_singleton02_h

#include <stdlib.h>

namespace SingletonStatic
{
    // Local static.
    class FileSystem
    {
    public:
        static FileSystem& Instance();

    private:
        FileSystem();
    };
}

#endif//cpp_singleton02_h