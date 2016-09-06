#ifndef cpp_singleton05_h
#define cpp_singleton05_h

namespace Singleton05
{
    class FileSystem
    {
    public:
        static FileSystem& Instance();

    private:
        FileSystem();
        static FileSystem instance;
    };
}

#endif//cpp_singleton05_h