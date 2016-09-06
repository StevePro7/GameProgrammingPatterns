#ifndef cpp_objectpool00_h
#define cpp_objectpool00_h

namespace Version00
{
    class ParticlePool;

    class Particle
    {
    public:
        Particle();
        void init(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime);
        void animate();
        bool isInUse() const;

    private:
        int framesLeft;
        double x, y;
        double xVel, yVel;
    };

    class ParticlePool
    {
    public:
        void create(double inputX, double inputY, double inputXvel, double inputYVel, int lifetime);
        void animate();

    private:
        static const int POOL_SIZE = 100;
        Particle particles[POOL_SIZE];
    };
}

#endif//cpp_objectpool00_h