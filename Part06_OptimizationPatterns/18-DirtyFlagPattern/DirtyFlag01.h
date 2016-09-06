#ifndef cpp_dirty_flag01_h
#define cpp_dirty_flag01_h

#include "DirtyFlag00.h"

namespace DirtyFlag
{
    class GraphNode
    {
    public:
        GraphNode(Mesh* mesh);

    private:
        Transform local;
        Mesh* mesh;

        GraphNode* children[MAX_CHILDREN];
        int numChildren;
    };
}

#endif//cpp_dirty_flag01_h