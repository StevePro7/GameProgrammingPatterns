#include "Observer02.h"

namespace Pattern
{
    Observer::~Observer()
    {
    }

    void Achievements::onNotify(const Entity& entity, Event event)
    {
        switch (event)
        {
        case EVENT_ENTITY_FELL:
            if (heroIsOnBridge && entity.isHero())
            {
                unlock(ACHIEVEMENT_FELL_OFF_BRIDGE);
            }
            break;
        }
    }
    void Achievements::unlock(Achievement achievement)
    {
        // Unlock if not already unlocked.
    }


    void Subject::addObserver(Observer* observer)
    {
        // Add to array.
        observers[numObservers++] = observer;
    }
    void Subject::removeObserver(Observer* observer)
    {
        // Remove from array.
        int index;
        for (index = 0; index < MAX_OBSERVERS; ++index)
        {
            if (observer == observers[index])
            {
                break;
            }

            if (index < numObservers)
            {
                // Shift the following ones up.
                for (; index < numObservers - 1; ++index)
                {
                    observers[index] = observers[index + 1];
                }

                numObservers--;
            }
        }
    }
    void Subject::notify(const Entity& entity, Event event)
    {
        for (int i = 0; i < numObservers; ++i)
        {
            observers[i]->onNotify(entity, event);
        }
    }


    void Physics::updateEntity(Entity& entity)
    {
    }


    void PhysicsEvent::onNotify(const Entity& entity, Event event)
    {
    }
    void PhysicsEvent::physicsEvent()
    {
        PhysicsEvent physics;
        Subject subj = physics.getEntityFell();
        subj.addObserver(this);
    }
    Subject& PhysicsEvent::getEntityFell()
    {
        return entityFell;
    }
     

}