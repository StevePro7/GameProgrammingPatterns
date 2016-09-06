#include "DirtyFlag00.h"

Transform Transform::origin()
{
    return Transform();
}
Transform Transform::combine(Transform& other)
{
    return other;
}
void renderMesh(Mesh* mesh, Transform transform)
{
}