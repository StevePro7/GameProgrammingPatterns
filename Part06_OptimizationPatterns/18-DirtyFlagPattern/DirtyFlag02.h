#ifndef cpp_dirty_flag02_h
#define cpp_dirty_flag02_h

#include "DirtyFlag00.h"

namespace RenderOnTheFly
{
    class GraphNode
    {
    public:
        GraphNode(Mesh* mesh);
        void render(Transform parentWorld);

    private:
        Transform local;
        Mesh* mesh;

        GraphNode* children[MAX_CHILDREN];
        int numChildren;
    };
}

#endif//cpp_dirty_flag02_h