#ifndef cpp_spatialpartition03_h
#define cpp_spatialpartition03_h

namespace SimpleGrid
{
    class Unit;

    class Grid
    {
    public:
        Grid();

    private:
        static const int NUM_CELLS = 10;
        static const int CELL_SIZE = 20;
        Unit* cells[NUM_CELLS][NUM_CELLS];

    };

    class LinkedUnit
    {
    private:
        LinkedUnit* prev;
        LinkedUnit* next;
    };
}

#endif//cpp_spatialpartition03_h