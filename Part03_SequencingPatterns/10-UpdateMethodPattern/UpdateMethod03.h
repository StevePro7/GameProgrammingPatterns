#ifndef cpp_update_method03_h
#define cpp_update_method03_h

namespace SampleCode
{
    static const int MAX_ENTITIES = 10;

    class Entity
    {
    public:
        Entity();
        virtual ~Entity();
        virtual void update() = 0;

        double getX() const;
        double getY() const;

        void setX(double tx);
        void setY(double ty);

    private:
        double x;
        double y;
    };

    class World
    {
    public:
        World();
        void gameLoop();

    private:
        Entity* entities[MAX_ENTITIES];
        int numEntities;
    };

    class Skeleton : public Entity
    {
    public:
        Skeleton();
        void update();

    private:
        bool patrollingLeft;
    };

    class Statue : public Entity
    {
    public:
        Statue(int delay);
        void update();

    private:
        void shootLightning();
        int frames;
        int delay;
    };
}

#endif//cpp_update_method03_h