#ifndef cpp_flyweight01_h
#define cpp_flyweight01_h

#include "Flyweight00.h"
using namespace Flyweight;

namespace HeavyTree
{
    class Tree
    {
    private:
        Mesh mesh;
        Texture bark;
        Texture leaves;
        Vector position;
        double height;
        double thickness;
        Color barkTint;
        Color leafTint;
    };
}

#endif//cpp_flyweight01_h