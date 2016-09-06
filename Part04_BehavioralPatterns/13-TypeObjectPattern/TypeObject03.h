#ifndef cpp_typeobject03_h
#define cpp_typeobject03_h

namespace BreedCtor
{
    class Breed;

    class Monster
    {
    public:
        Monster(Breed& breed);
    };

    class Breed
    {
    public:
        Breed(int health, const char* attack);
        Monster* newMonster();

        int getHealth();
        const char* getAttack();

    private:
        int health;
        const char* attack;
    };
}

#endif//cpp_typeobject03_h