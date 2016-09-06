#ifndef cpp_spatialpartition01_h
#define cpp_spatialpartition01_h

namespace SpatialPartition
{
    class Unit
    {
    public:
        Unit(const char* name, int position);
        int GetPosition() const;

    private:
        const char* name;
        int position;
        Unit* hit;
    };

    class Vector
    {
    public:
        Vector(int position);
        int GetPosition() const;

    private:
        int position;
    };
}

#endif//cpp_spatialpartition01_h