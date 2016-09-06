#include "DirtyFlag02.h"

namespace RenderOnTheFly
{
    GraphNode::GraphNode(Mesh* mesh) : mesh(mesh), local(Transform::origin()), numChildren(0)
    {
    }

    void GraphNode::render(Transform parentWorld)
    {
        Transform world = local.combine(parentWorld);
        if (mesh)
        {
            renderMesh(mesh, world);
        }

        for (int i = 0; i < numChildren; ++i)
        {
            children[i]->render(world);
        }
    }
}