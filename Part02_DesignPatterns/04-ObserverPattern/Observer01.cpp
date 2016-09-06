#include "Observer01.h"

namespace Motivation
{
    void Physics::updateEntity(Entity& entity)
    {
        bool wasOnSurface = entity.isOnSurface();
        entity.accelerate(GRAVITY);
        entity.update();

        if (wasOnSurface && !entity.isOnSurface())
        {
            notify(entity, EVENT_START_FALL);
        }
    }

    void Physics::notify(Entity& entity, int event)
    {
    }
}