#ifndef cpp_dirty_flag03_h
#define cpp_dirty_flag03_h

#include "DirtyFlag00.h"

namespace Dirty
{
    class GraphNode
    {
    public:
        GraphNode(Mesh* mesh);
        void setTransform(Transform tranform);
        void render(Transform parentWorld, bool dirty);

    private:
        Transform world;
        Transform local;
        Mesh* mesh;
        bool dirty;

        GraphNode* children[MAX_CHILDREN];
        int numChildren;
    };
}

#endif//cpp_dirty_flag03_h