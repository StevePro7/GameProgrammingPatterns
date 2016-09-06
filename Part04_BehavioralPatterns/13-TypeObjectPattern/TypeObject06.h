#ifndef cpp_typeobject06_h
#define cpp_typeobject06_h

namespace CopyDown
{
    class Breed
    {
    public:
        Breed(Breed* parent, int health, const char* attack);
        int getHealth();
        const char* getAttack();

    private:
        int health;
        const char* attack;
    };
}

#endif//cpp_typeobject06_h