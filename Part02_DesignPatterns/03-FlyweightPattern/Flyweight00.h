#ifndef cpp_flyweight00_h
#define cpp_flyweight00_h

namespace Flyweight
{
    class Mesh {};
    class Skeleton {};
    class Texture {};
    class Pose {};
    class Vector {};
    class Color {};

    static const int WIDTH = 256;
    static const int HEIGHT = 256;

    static Texture GRASS_TEXTURE;
    static Texture HILL_TEXTURE;
    static Texture RIVER_TEXTURE;

    int random(int max);

    template<class T>
    void use(const T& obj)
    {
    }
}

#endif//cpp_flyweight00_h