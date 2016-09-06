#ifndef cpp_typeobject05_h
#define cpp_typeobject05_h

namespace Inheritance
{
    class Breed
    {
    public:
        Breed(Breed* parent, int health, const char* attack);
        int getHealth();
        const char* getAttack();

    private:
        Breed* parent;
        int health;
        const char* attack;
    };
}

#endif//cpp_typeobject05_h