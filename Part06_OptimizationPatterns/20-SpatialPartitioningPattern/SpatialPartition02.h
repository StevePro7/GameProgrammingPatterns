#ifndef cpp_spatialpartition02_h
#define cpp_spatialpartition02_h

namespace SimpleUnit
{
    class Grid;

    class Unit
    {
    public:
        Unit(Grid* grid, double x, double y);
        void move(double x, double y);

    private:
        friend class Grid;
        Grid* grid;
        double x, y;
    };
}

#endif//cpp_spatialpartition02_h