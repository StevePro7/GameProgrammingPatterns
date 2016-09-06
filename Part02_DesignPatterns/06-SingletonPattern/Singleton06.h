#ifndef cpp_singleton06_h
#define cpp_singleton06_h

namespace Singleton06
{
    class FileSystem
    {
    public:
        FileSystem();
        ~FileSystem();

    private:
        static bool instantiated;
    };
}

#endif//cpp_singleton06_h