#ifndef cpp_prototype02_h
#define cpp_prototype02_h

namespace Callbacks
{
    class Monster
    {
        // Stuff in base class.
    };

    class Ghost : public Monster
    {
    };

    // Spawner callback;
    typedef Monster* (*SpawnerCallback)();

    class Spawner
    {
    public:
        Spawner(SpawnerCallback spawn);
        Monster* spawnMonster();

    private:
        SpawnerCallback spawn;
    };
}

#endif//cpp_prototype02_h