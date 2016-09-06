#include "UpdateMethod02.h"

namespace KeepInMind
{
    void Entity::setPosition(int x, int y)
    {
    }
    void Entity::shootLightning()
    {
    }
    void Entity::update()
    {
    }

    void refreshGame()
    {
    }
    void skipAdded()
    {
        int numObjects = 0;
        Entity* objects[MAX_ENTITIES];

        // Skip added.
        int numObjectsThisTurn = numObjects;
        for (int i = 0; i < numObjectsThisTurn; ++i)
        {
            objects[i]->update();
        }
    }
    void skipRemoved()
    {
        int numObjects = 0;
        Entity* objects[MAX_ENTITIES];

        // Skip removed.
        for (int i = 0; i < numObjects; ++i)
        {
            objects[i]->update();
        }
    }
}