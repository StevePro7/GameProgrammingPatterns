#include "Flyweight05.h"

namespace WorldTerrain
{
    Terrain::Terrain(int movementCost, bool isWater, Texture texture) :
        movementCost(movementCost),
        isWater(isWater),
        texture(texture)
    {
    }

    int Terrain::GetMovementCost() const
    {
        return movementCost;
    }
    bool Terrain::IsWater() const
    {
        return isWater;
    }
    const Texture& Terrain::GetTexture() const
    {
        return texture;
    }


    World::World() :
        grassTerrain(1, false, GRASS_TEXTURE),
        hillTerrain(2, false, HILL_TEXTURE),
        riverTerrain(3, true, RIVER_TEXTURE)
    {
    }
}