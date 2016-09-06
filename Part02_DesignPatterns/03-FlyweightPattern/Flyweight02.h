#ifndef cpp_flyweight02_h
#define cpp_flyweight02_h

#include "Flyweight00.h"
using namespace Flyweight;

namespace SplitTree
{
    class TreeModel
    {
    private:
        Mesh mesh;
        Texture bark;
        Texture leaves;
    };

    class Tree
    {
    private:
        TreeModel* model;

        Vector position;
        double height;
        double thickness;
        Color barkTint;
        Color leafTint;
    };
}

#endif//cpp_flyweight02_h