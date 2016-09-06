#ifndef cpp_data_locality01_h
#define cpp_data_locality01_h

namespace DataLocality01
{
    void sleepFor500Cycles();

    struct Thing
    {
        void doStuff();
    };

    static const int NUM_THINGS = 3;

    void callDoNothing();

    class AIComponent
    {
    public:
        void update();

    private:
        // Goals, mood, etc.
    };

    class PhysicsComponent
    {
    public:
        void update();

    private:
        // Rigid body, velocity, mass etc.
    };

    class RenderComponent
    {
    public:
        void render();

    private:
        // Mesh, textures, shaders, etc.
    };

    class GameEntity
    {
    public:
        GameEntity(AIComponent* ai, PhysicsComponent* physics, RenderComponent* render);

        AIComponent* getAI();
        PhysicsComponent* getPhysics();
        RenderComponent* getRender();

    private:
        AIComponent* ai;
        PhysicsComponent* physics;
        RenderComponent* render;
    };
}

#endif//cpp_data_locality01_h