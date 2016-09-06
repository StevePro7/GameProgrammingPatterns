#ifndef cpp_dirty_flag00_h
#define cpp_dirty_flag00_h

#include <stdlib.h>

class Transform
{
public:
    static Transform origin();
    Transform combine(Transform& other);
};

class Mesh;

static const int MAX_CHILDREN = 16;

void renderMesh(Mesh* mesh, Transform transform);

#endif//cpp_dirty_flag00_h