#ifndef cpp_update_method04_h
#define cpp_update_method04_h

namespace VariableTimeStep
{
    class Skeleton
    {
    public:
        void update(double elapsed);

    private:
        double x;
        bool patrollingLeft;
    };
}

#endif//cpp_update_method04_h