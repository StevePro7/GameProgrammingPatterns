#include "DoubleBuffer04.h"

namespace BufferedSlapstick
{
    // Actor.
    Actor::Actor() : currSlapped(false)
    {
    }
    Actor::~Actor()
    {
    }
    void Actor::swap()
    {
        // Swap the buffer.
        currSlapped = nextSlapped;

        // Clear the new "next" buffer.
        nextSlapped = false;
    }
    void Actor::slap()
    {
        nextSlapped = true;
    }
    bool Actor::wasSlapped()
    {
        return currSlapped;
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
        }
        for (int i = 0; i < NUM_ACTORS; ++i)
        {
            actors[i]->swap();
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