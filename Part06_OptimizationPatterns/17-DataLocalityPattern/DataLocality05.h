#ifndef cpp_data_locality05_h
#define cpp_data_locality05_h

namespace HotCold
{
    class Animation {};
    class Vector {};
    class LootType {};

    class LootDrop;

    class AIComponent
    {
    public:
        void update();

    private:
        Animation* animation;
        double energy;
        Vector goalPos;

        LootDrop* loot;
    };

    class LootDrop
    {
    private:
        friend class AIComponent;
        LootType drop;
        int minDrops;
        int maxDrops;
        double chanceOfDrop;
    };
}

#endif//cpp_data_locality05_h