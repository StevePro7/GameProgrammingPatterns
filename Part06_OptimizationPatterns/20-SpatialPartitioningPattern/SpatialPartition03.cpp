#include "SpatialPartition03.h"
#include <stdlib.h>

namespace SimpleGrid
{
    Grid::Grid()
    {
        // Clear the grid.
        for (int x = 0; x < NUM_CELLS; ++x)
        {
            for (int y = 0; y < NUM_CELLS; ++y)
            {
                cells[x][y] = NULL;
            }
        }
    }
}