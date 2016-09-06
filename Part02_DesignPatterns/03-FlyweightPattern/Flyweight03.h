#ifndef cpp_flyweight03_h
#define cpp_flyweight03_h

#include "Flyweight00.h"
using namespace Flyweight;

namespace TerrainEnum
{
    enum Terrain
    {
        TERRAIN_GRASS,
        TERRAIN_HILL,
        TERRAIN_RIVER
        // Other terrains...
    };


    class World
    {
    private:
        Terrain tiles[WIDTH][HEIGHT];
        int getMovementCost(int x, int y);
        bool isWater(int x, int y);
    };
}

#endif//cpp_flyweight03_h