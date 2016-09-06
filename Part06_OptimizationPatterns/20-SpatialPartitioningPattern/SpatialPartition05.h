#ifndef cpp_spatialpartition05_h
#define cpp_spatialpartition05_h

namespace FixedGrid
{
    class Unit;
    void handleAttack(Unit* unit, Unit* other);

    class Grid
    {
    public:
        Grid();

        void move(Unit*, double x, double y);
        void add(Unit* unit);
        Unit* findAt(double x, double y);
        void handleMelee();
        void handleCell(Unit* unit);
        void dump();

    private:
        static const int NUM_CELLS = 10;
        static const int CELL_SIZE = 20;
        Unit* cells[NUM_CELLS][NUM_CELLS];
    };

    class Unit
    {
    public:
        Unit(Grid* grid, const char* name, double x, double y);
        void move(double x, double y);

    private:
        friend class Grid;
        Grid* grid;
        const char* name;
        double x, y;

        Unit* prev;
        Unit* next;
    };
}

#endif//cpp_spatialpartition05_h