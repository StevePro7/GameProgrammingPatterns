#include "SpatialPartition01.h"
#include <stdlib.h>

namespace SpatialPartition
{
    Unit::Unit(const char* name, int position) : name(name), position(position), hit(NULL)
    {
    }
    int Unit::GetPosition() const
    {
        return position;
    }

    Vector::Vector(int position) : position(position)
    {
    }
    int Vector::GetPosition() const
    {
        return position;
    }

    bool operator==(int left, Vector right)
    {
        return left == right.GetPosition();
    }

}