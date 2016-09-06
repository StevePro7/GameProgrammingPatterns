#ifndef cpp_prototype01_h
#define cpp_prototype01_h

namespace PrototypePattern
{
    namespace Classes
    {
        // Monster classes.
        class Monster
        {
            // Stuff in base class.
        };

        class Ghost : public Monster
        {
        };
        class Demon : public Monster
        {
        };
        class Sorcerer : public Monster
        {
        };


        // Spawner classes.
        class Spawner
        {
        public:
            virtual ~Spawner();
            virtual Monster* spawnMonster() = 0;
        };

        class GhostSpawner : public Spawner
        {
        public:
            Monster* spawnMonster();
        };
        class DemonSpawner : public Spawner
        {
        public:
            Monster* spawnMonster();
        };
        class SorcererSpawner : public Spawner
        {
        public:
            Monster* spawnMonster();
        };
    }

    namespace Clone
    {
        // Virtual clone.
        class Monster
        {
        public:
            virtual ~Monster();
            virtual Monster* clone() = 0;
        };

        // Clone ghost.
        class Ghost : public Monster
        {
        public:
            Ghost(int health, int speed);
            Monster* Ghost::clone();

        private:
            int health;
            int speed;
        };

        // Spawner clone.
        class Spawner
        {
        public:
            Spawner(Monster* prototype);
            Monster* spawnMonster();

        private:
            Monster* prototype;
        };
    }
}

#endif//cpp_prototype01_h