#ifndef cpp_typeobject08_h
#define cpp_typeobject08_h

namespace OverrideAttack
{
    class Breed
    {
    public:
        Breed(const char* attack);
        const char* getAttack();

    private:
        const char* attack;
    };

    class Monster
    {
    public:
        Monster(Breed& breed);
        const char* getAttack();

    private:
        Breed& breed;
        int health;
    };
}

#endif//cpp_typeobject08_h