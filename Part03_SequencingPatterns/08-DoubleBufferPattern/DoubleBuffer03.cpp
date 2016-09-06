#include "DoubleBuffer03.h"

namespace UnbufferedSlapstick
{
    // Actor.
    Actor::Actor() : slapped(false)
    {
    }
    Actor::~Actor()
    {
    }
    void Actor::reset()
    {
        slapped = false;
    }
    void Actor::slap()
    {
        slapped = true;
    }
    bool Actor::wasSlapped()
    {
        return slapped;
    }

    // Stage.
    void Stage::add(Actor* actor, int index)
    {
        actors[index] = actor;
    }
    void Stage::update()
    {
        for (int i = 0; i < NUM_ACTORS; ++i)
        {
            actors[i]->update();
            actors[i]->reset();
        }
    }

    // Comedian.
    Comedian::Comedian() : name("")
    {
    }
    Comedian::Comedian(const char* name) : name(name)
    {
    }
    void Comedian::face(Actor* actor)
    {
        facing = actor;
    }
    void Comedian::update()
    {
        if (wasSlapped())
        {
            std::cout << name << " was slapped" << std::endl;
        }
        if (wasSlapped())
        {
            facing->slap();
        }
    }

}