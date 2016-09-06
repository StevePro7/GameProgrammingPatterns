#ifndef cpp_spatialpartition06_h
#define cpp_spatialpartition06_h

namespace AttachDistance
{
    const int ATTACK_DISTANCE = 2;

    class Unit;

    void handleAttack(Unit* unit, Unit* other);
    int distance(Unit* a, Unit* b);

    class Grid
    {
    public:
        Grid();
        void move(Unit* unit, double x, double y);
        void add(Unit* unit);
        Unit* findAt(double x, double y);
        void handleMelee();
        void handleCell(int x, int y);
        void handleUnit(Unit* unit, Unit* other);

    private:
        static const int CELL_SIZE = 20;
        static const int NUM_CELLS = 10;
        Unit* cells[NUM_CELLS][NUM_CELLS];
    };

    class Unit
    {
    public:
        Unit(Grid* grid, double x, double y);
        void move(double x, double y);

    private:
        friend class Grid;
        Grid* grid;
        double x, y;
        Unit* prev;
        Unit* next;
    };
}

#endif//cpp_spatialpartition06_h