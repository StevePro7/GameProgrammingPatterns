#ifndef cpp_data_locality03_h
#define cpp_data_locality03_h

namespace HotColdMixed
{
    class Animation {};
    class Vector {};
    class LootType {};

    class AIComponent
    {
    public:
        void update();

    private:
        Animation* animation;
        double energy;
        Vector goalPos;
    };
}

#endif//cpp_data_locality03_h