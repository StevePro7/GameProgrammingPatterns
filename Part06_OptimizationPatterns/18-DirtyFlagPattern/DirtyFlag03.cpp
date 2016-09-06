#include "DirtyFlag03.h"

namespace Dirty
{
    GraphNode::GraphNode(Mesh* mesh) : mesh(mesh), local(Transform::origin()), dirty(true), numChildren(0)
    {
    }
    void GraphNode::setTransform(Transform transform)
    {
        local = transform;
    }
    void GraphNode::render(Transform parentWorld, bool dirty)
    {
        dirty |= dirty;
        if (dirty)
        {
            world = local.combine(parentWorld);
            dirty = false;
        }

        if (mesh)
        {
            renderMesh(mesh, world);
        }

        for (int i = 0; i < numChildren; ++i)
        {
            children[i]->render(world, dirty);
        }

    }
}