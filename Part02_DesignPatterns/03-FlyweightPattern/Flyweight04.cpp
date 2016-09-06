#include "Flyweight04.h"

namespace TerrainClass
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
    const Texture& Terrain::GetTexture() 
    {
        return texture;
    }


    World::World() :
        grassTerrain(1, false, GRASS_TEXTURE),
        hillTerrain(2, false, HILL_TEXTURE),
        riverTerrain(3, true, RIVER_TEXTURE)
    {
    }

    const Terrain& World::GetTile(int x, int y) const
    {
        return *tiles[x][y];
    }
    void World::GenerateTerrain()
    {
        // Fill the ground with grass.
        for (int x = 0; x < WIDTH; ++x)
        {
            for (int y = 0; y < HEIGHT; ++y)
            {
                // Sprinkle some hilss.
                if (0 == random(10))
                {
                    tiles[x][y] = &hillTerrain;
                }
                else
                {
                    tiles[x][y] = &grassTerrain;
                }
            }
        }

        // Lay a river.
        int x = random(WIDTH);
        for (int y = 0; y < HEIGHT; ++y)
        {
            tiles[x][y] = &riverTerrain;
        }
    }
}