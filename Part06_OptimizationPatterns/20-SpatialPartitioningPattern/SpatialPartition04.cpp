#include "SpatialPartition04.h"
#include <stdlib.h>

namespace AddToGrid
{
    void Grid::add(Unit* unit)
    {
        // Determine which grid cell it is in.
        int cellX = (int)(unit->x / Grid::CELL_SIZE);
        int cellY = (int)(unit->y / Grid::CELL_SIZE);

        // Add to the front of the list for the cell it is in.
        unit->prev = NULL;
        unit->next = cells[cellX][cellY];

        if (NULL != unit->next)
        {
            unit->next->prev = unit;
        }
    }

    Unit::Unit(Grid* grid, double x, double y) : grid(grid), x(x), y(y), prev(NULL), next(NULL)
    {
        grid->add(this);
    }
}