#ifndef cpp_flyweight04_h
#define cpp_flyweight04_h

#include "Flyweight00.h"
using namespace Flyweight;

namespace TerrainClass
{
   class Terrain
    {
    public:
        Terrain(int movementConst, bool isWater, Texture texture);

        int GetMovementCost() const;
        bool IsWater() const;
        const Texture& GetTexture();

    private:
        int movementCost;
        bool isWater;
        Texture texture;
    };


    class World
    {
    public:
        World();
        const Terrain& GetTile(int x, int y) const;
        void GenerateTerrain();

    private:
        Terrain* tiles[WIDTH][HEIGHT];

        Terrain grassTerrain;
        Terrain hillTerrain;
        Terrain riverTerrain;
    };

}

#endif//cpp_flyweight04_h