#include "SpatialPartition05.h"
#include <stdio.h>
#include <stdlib.h>

namespace FixedGrid
{
    void handleAttack(Unit* unit, Unit* other)
    {
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
        // See which cell it was in.
        int oldCellX = (int)(unit->x / Grid::CELL_SIZE);
        int oldCellY = (int)(unit->y / Grid::CELL_SIZE);

        // See which cell it is moving to.
        int cellX = (int)(x / Grid::CELL_SIZE);
        int cellY = (int)(y / Grid::CELL_SIZE);

        unit->x = x;
        unit->y = y;

        // If it did not change cells then we are done.
        if (oldCellX == cellX && oldCellY == cellY)
        {
            return;
        }

        // Unlink it from the list of its old cell.
        if (NULL != unit->prev)
        {
            unit->prev->next = unit->next;
        }
        if (NULL != unit->next)
        {
            unit->next->prev = unit->prev;
        }

        // If it is hte head of a list then remove it.
        if (unit == cells[oldCellX][oldCellY])
        {
            cells[oldCellX][oldCellY] = unit->next;
        }

        // Add it back to the grid at its new cell.
        add(unit);
    }
    void Grid::add(Unit* unit)
    {
        // See which cell it was in.
        int cellX = (int)(unit->x / Grid::CELL_SIZE);
        int cellY = (int)(unit->y / Grid::CELL_SIZE);

        // Add to the front of the list for the cell its in.
        unit->prev = NULL;
        unit->next = cells[cellX][cellY];
        cells[cellX][cellY] = unit;

        if (NULL != unit->next)
        {
            unit->next->prev = unit;
        }
    }
    Unit* Grid::findAt(double x, double y)
    {
        int cellX = (int)(x / Grid::CELL_SIZE);
        int cellY = (int)(y / Grid::CELL_SIZE);

        Unit* unit = cells[cellX][cellY];
        while (NULL != unit)
        {
            if (unit->x == x && unit->y == y)
            {
                return unit;
            }
            unit = unit->next;
        }

        return NULL;
    }
    void Grid::handleMelee()
    {
        for (int x = 0; x < NUM_CELLS; ++x)
        {
            for (int y = 0; y < NUM_CELLS; ++y)
            {
                handleCell(cells[x][y]);
            }
        }
    }
    void Grid::handleCell(Unit* unit)
    {
        while (NULL != unit)
        {
            Unit* other = unit->next;
            while (NULL != other)
            {
                if (unit->x == other->x && unit->y == other->y)
                {
                    handleAttack(unit, other);
                }

                other = other->next;
            }

            unit = unit->next;
        }
    }
    void Grid::dump()
    {
        for (int y = 0; y < NUM_CELLS; ++y)
        {
            for (int x = 0; x < NUM_CELLS; ++x)
            {
                Unit* unit = cells[x][y];
                if (NULL == unit)
                {
                    continue;
                }

                printf("%d %d : ", x, y);
                while (NULL != unit)
                {
                    printf("%s ", unit->name);
                    unit = unit->next;
                }

                printf("\n");
            }
        }

        printf("\n");
    }

    Unit::Unit(Grid* grid, const char* name, double x, double y) : grid(grid), name(name), x(x), y(x), prev(NULL), next(NULL)
    {
        grid->add(this);
    }
    void Unit::move(double x, double y)
    {
        grid->move(this, x, y);
    }


}