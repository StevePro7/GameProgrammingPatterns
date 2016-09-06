#ifndef cpp_doublebuffer05_h
#define cpp_doublebuffer05_h

#include "DoubleBuffer00.h"

namespace SwapOffset
{
    class Actor
    {
    public:
        static void init();
        static void swap();
        void slap();
        bool wasSlapped();

    private:
        static int curr;
        static int next();
        bool slapped[2];
    };
}

#endif//cpp_doublebuffer05_h