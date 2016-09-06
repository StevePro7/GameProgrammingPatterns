#include "SpatialPartition06.h"
#include <stdlib.h>

namespace AttachDistance
{
    void handleAttack(Unit* unit, Unit* other)
    {
    }
    int distance(Unit* a, Unit* b)
    {
        return 3;
    }

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
    void Grid::move(Unit* unit, double x, double y)
    {
    }
    void Grid::add(Unit* unit)
    {
    }
    Unit* Grid::findAt(double x, double y)
    {
        return NULL;
    }
    void Grid::handleMelee()
    {
        for (int x = 0; x < NUM_CELLS; ++x)
        {
            for (int y = 0; y < NUM_CELLS; ++y)
            {
                handleCell(x, y);
            }
        }
    }
    void Grid::handleCell(int x, int y)
    {
        Unit* unit = cells[x][y];
        while (NULL != unit)
        {
            // Handle other units in this cell.
            handleUnit(unit, unit->next);

            // Also try the neighboring cells.
            if (x > 0 && y > 0)
            {
                handleUnit(unit, cells[x - 1][y - 1]);
            }
            if (x > 0)
            {
                handleUnit(unit, cells[x - 1][y]);
            }
            if (y > 0)
            {
                handleUnit(unit, cells[x][y - 1]);
            }
            if (x > 0 && y < NUM_CELLS - 1)
            {
                handleUnit(unit, cells[x - 1][y + 1]);
            }

            unit = unit->next;
        }
    }
    void Grid::handleUnit(Unit* unit, Unit* other)
    {
        while (NULL != other)
        {
            // Handle distances.
            if (distance(unit, other) < ATTACK_DISTANCE)
            {
                handleAttack(unit, other);
            }

            other = other->next;
        }
    }

    Unit::Unit(Grid* grid, double x, double y) : grid(grid), x(x), y(y), prev(NULL), next(NULL)
    {
        grid->add(this);
    }

}