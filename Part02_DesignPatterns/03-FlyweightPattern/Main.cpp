#include "Flyweight05.h"
using namespace WorldTerrain;

int main()
{
    Terrain t(1, false, GRASS_TEXTURE);
    World w;
    int x = 7;
    return 0;
}

/*
#include "Flyweight04.h"
using namespace TerrainClass;

    World world;
    world.GenerateTerrain();
    const Terrain& terrain = world.GetTile(2, 3);
    int cost = terrain.GetMovementCost();
    use(cost);
*/