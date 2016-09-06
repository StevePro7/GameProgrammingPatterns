#include "Flyweight03.h"

namespace TerrainEnum
{
    int World::getMovementCost(int x, int y)
    {
        Terrain terrain = tiles[x][y];
        switch (terrain)
        {
        case TERRAIN_GRASS:
            return 1;
            break;

        case TERRAIN_HILL:
            return 2;
            break;

        case TERRAIN_RIVER:
            return 3;
            break;

        default:
            return 0;
            break;
        }
    }

    bool World::isWater(int x, int y)
    {
        Terrain terrain = tiles[x][y];
        switch (terrain)
        {
        case TERRAIN_GRASS:
            return false;
            break;

        case TERRAIN_HILL:
            return false;
            break;

        case TERRAIN_RIVER:
            return true;
            break;

        default:
            return false;
            break;
        }
    }
}