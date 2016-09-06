#ifndef cpp_typeobject02_h
#define cpp_typeobject02_h

namespace NoInheritance
{
    class Breed
    {
    public:
        Breed(int health, const char* attack);

        int getHealth();
        const char* getAttack();

    private:
        int health;
        const char* attack;
    };

    class Monster
    {
    public:
        Monster(Breed& breed);
        const char* getAttack();

    private:
        int health;
        Breed& breed;
    };
}

#endif//cpp_typeobject02_h