#ifndef cpp_doublebuffer01_h
#define cpp_doublebuffer01_h

#include "DoubleBuffer00.h"

namespace Unbuffered
{
    class Scene
    {
    public:
        void draw();
        FrameBuffer getFrameBuffer();

    private:
        FrameBuffer buffer;
    };
}

#endif//cpp_doublebuffer01_h