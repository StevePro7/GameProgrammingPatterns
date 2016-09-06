#ifndef cpp_spatialpartition04_h
#define cpp_spatialpartition04_h

namespace AddToGrid
{
    class Unit;

    class Grid
    {
    public:
        void add(Unit* unit);

    private:
        static const int NUM_CELLS = 10;
        static const int CELL_SIZE = 20;
        Unit* cells[NUM_CELLS][NUM_CELLS];
    };

    class Unit
    {
    public:
        Unit(Grid* grid, double x, double y);

    private:
        friend class Grid;
        Grid* grid;
        double x, y;
        
        Unit* prev;
        Unit* next;
    };
}

#endif//cpp_spatialpartition04_h