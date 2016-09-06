#ifndef cpp_doublebuffer02_h
#define cpp_doublebuffer02_h

#include "DoubleBuffer00.h"

namespace Buffered
{
    class Scene
    {
    public:
        Scene();
        void draw();
        FrameBuffer& getBuffer();

    private:
        void swap();

        FrameBuffer buffers[2];
        FrameBuffer* curr;
        FrameBuffer* next;
    };
}

#endif//cpp_doublebuffer02_h