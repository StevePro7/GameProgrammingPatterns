#include "DoubleBuffer02.h"

namespace Buffered
{
    Scene::Scene() : curr(&buffers[0]), next(&buffers[1])
    {
    }
    void Scene::draw()
    {
        next->clear();
        next->draw(1, 1);
        next->draw(4, 3);
        swap();
    }
    FrameBuffer& Scene::getBuffer()
    {
        return *curr;
    }
    void Scene::swap()
    {
        // Just switch the pointers.
        FrameBuffer* temp = curr;
        curr = next;
        next = temp;
    }
}