#ifndef cpp_typeobject01_h
#define cpp_typeobject01_h

namespace Subclasses
{
    class Monster
    {
    public:
        virtual ~Monster();
        virtual const char* getAttack() = 0;

    protected:
        Monster(int startingHealth);

    private:
        int health;
    };

    class Dragon : public Monster
    {
    public:
        Dragon();
        const char* getAttack();
    };

    class Troll : public Monster
    {
    public:
        Troll();
        const char* getAttack();
    };
}

#endif//cpp_typeobject01_h