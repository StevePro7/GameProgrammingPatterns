#ifndef cpp_typeobject07_h
#define cpp_typeobject07_h

namespace ExposeBreed
{
    class Breed;

    class Monster
    {
    public:
        Breed& getBreed();

    private:
        Breed& breed;
    };
}

#endif//cpp_typeobject07_h