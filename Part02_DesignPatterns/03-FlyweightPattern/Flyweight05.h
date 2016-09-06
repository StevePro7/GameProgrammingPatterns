#ifndef cpp_flyweight05_h
#define cpp_flyweight05_h

#include "Flyweight00.h"
using namespace Flyweight;

namespace WorldTerrain
{
    class Terrain
    {
    public:
        Terrain(int movementCost, bool isWater, Texture texture);

        int GetMovementCost() const;
        bool IsWater() const;
        const Texture& GetTexture() const;

    private:
        int movementCost;
        bool isWater;
        Texture texture;
    };


    class World
    {
    public:
        World();

    private:
        Terrain grassTerrain;
        Terrain hillTerrain;
        Terrain riverTerrain;
    };
}

#endif//cpp_flyweight05_h