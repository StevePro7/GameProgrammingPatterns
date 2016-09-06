#include "DirtyFlag01.h"

namespace DirtyFlag
{
    GraphNode::GraphNode(Mesh* mesh) : mesh(mesh), local(Transform::origin())
    {
    }
}