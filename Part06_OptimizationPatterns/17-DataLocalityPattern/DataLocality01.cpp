#include "DataLocality01.h"

namespace DataLocality01
{
    void sleepFor500Cycles()
    {
    }

    void Thing::doStuff()
    {
    }

    void callDoNothing()
    {
        Thing things[NUM_THINGS];

        // Do nothing.
        for (int i = 0; i < NUM_THINGS; ++i)
        {
            sleepFor500Cycles();
            things[i].doStuff();
        }
    }

    void AIComponent::update()
    {
        // Work with and modify state.
    }

    void PhysicsComponent::update()
    {
        // Work with and modify state.
    }

    void RenderComponent::render()
    {
        // Work with and modify state.
    }

    GameEntity::GameEntity(AIComponent* ai, PhysicsComponent* physics, RenderComponent* render) :
        ai(ai), physics(physics), render(render)
    {
    }

    AIComponent* GameEntity::getAI()
    {
        return ai;
    }
    PhysicsComponent* GameEntity::getPhysics()
    {
        return physics;
    }
    RenderComponent* GameEntity::getRender()
    {
        return render;
    }
}