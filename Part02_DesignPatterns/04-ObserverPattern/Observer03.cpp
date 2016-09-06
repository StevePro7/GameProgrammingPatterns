#include "Observer03.h"

namespace LinkedObservers
{
    Observer::Observer() : next(NULL)
    {
    }
    void Observer::onNotify(const Entity& entity, Event event)
    {
    }


    Subject::Subject() : head(NULL)
    {
    }
    void Subject::addObserver(Observer* observer)
    {
        observer->next = head;
        head = observer;
    }
    void Subject::removeObserver(Observer* observer)
    {
        if (head == observer)
        {
            head = observer->next;
            observer->next = NULL;
            return;
        }

        Observer* current = head;
        while (NULL != current)
        {
            if (observer == current->next)
            {
                current->next = observer->next;
                observer->next = NULL;
                return;
            }

            current = current->next;
        }
    }
    void Subject::notify(const Entity& entity, Event event)
    {
        Observer* observer = head;
        while (NULL != observer)
        {
            observer->onNotify(entity, event);
            observer = observer->next;
        }
    }
}