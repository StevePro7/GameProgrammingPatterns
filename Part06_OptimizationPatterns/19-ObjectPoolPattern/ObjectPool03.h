#ifndef cpp_objectpool03_h
#define cpp_objectpool03_h

namespace Temp03
{
    template<class TObject>
    class GenericPool
    {
    private:
        static const int POOL_SIZE = 100;
        TObject pool[POOL_SIZE];
        bool inUse[POOL_SIZE];
    };
}

#endif//cpp_objectpool03_h