#ifndef cpp_data_locality04_h
#define cpp_data_locality04_h

namespace HotColdMixedLoot
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

        LootType drop;
        int minDrops;
        int maxDrops;
        double chanceOfDrop;
    };
}

#endif//cpp_data_locality04_h