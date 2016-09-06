#ifndef cpp_prototype03_h
#define cpp_prototype03_h

namespace Templates
{
    class Monster
    {
        // Stuff in base class.
    };

    class Ghost : public Monster
    {
    };

    // Templates.
    class Spawner
    {
    public:
        virtual ~Spawner();
        virtual Monster* spawnMonster() = 0;
    };

    // Templates
    template<class T>
    class SpawnerFor : public Spawner
    {
    public:
        Monster* spawnMonster()
        {
            return new T();
        }
    };
}

#endif//cpp_prototype03_h