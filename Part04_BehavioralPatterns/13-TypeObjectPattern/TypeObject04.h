#ifndef cpp_typeobject04_h
#define cpp_typeobject04_h

namespace BreedCtorMonster
{
    class Breed
    {
    public:
        int getHealth();
        const char* getAttack();
    };

    class Monster
    {
    public:
        const char* getAttack();

    private:
        friend class Breed;
        Monster(Breed& breed);
        Breed& breed;
        int health;
    };
}

#endif//cpp_typeobject04_h