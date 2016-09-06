#include "Observer04.h"

namespace One
{
    bool Observer::isObserving() const
    {
        return NULL != observable;
    }
    void Observer::observe(Observable& tempObservable)
    {
        // Stop observing what it was previously observing.
        detach();

        if (NULL == tempObservable.observer)
        {
            // The first observer.
            tempObservable.observer = this;
        }
        else
        {
            // Already have other observers so link it in at the end of the list.
            prev = tempObservable.observer->prev;
            next = tempObservable.observer;

            tempObservable.observer->prev->next = this;
            tempObservable.observer->prev = this;
        }

        observable = &tempObservable;
    }
    void Observer::detach()
    {
        if (NULL == observable)
        {
            return;
        }

        // Ensure the observable itself isn't pointing at this node.
        if (this == observable->observer)
        {
            if (this == next)
            {
                // This is the only observer so just clear it.
                observable->observer = NULL;
            }
            else
            {
                // Advance the next node.
                observable->observer = next;
            }
        }

        // Unlink this observer from the list.
        prev->next = next;
        next->prev = prev;

        prev = this;
        next = this;
        observable = NULL;
    }
    Observer::Observer() : prev(this), next(this), observable(NULL)
    {
    }
    Observer::~Observer()
    {
        detach();
    }

    bool Observable::hasObserver() const
    {
        return NULL != observer;
    }
    Observable::Observable() : observer(NULL)
    {
    }
    Observable::~Observable()
    {
        // Detach all of the observers.
        while (NULL != observer)
        {
            observer->detach();
        }
    }
    void Observable::notify()
    {
        if (NULL == observer)
        {
            return;
        }

        Observer* tempObserver = observer;
        do
        {
            observer->onNotify(*this);
            observer = observer->next;
        }
        while (tempObserver != observer);

        // The first in the linked list of observers to this.
        // Observer* observer;
    }


    Noise::Noise(const char* name) : name(name)
    {
    }
    void Noise::sound()
    {
        std::cout << name << "!" << std::endl;
        notify();
    }


    Ear::Ear(const char* name) : name(name), numObserved(0)
    {
    }
    int Ear::getNumObserved()
    {
        return numObserved;
    }
    void Ear::onNotify(Observable& observable)
    {
        numObserved++;
        std::cout << name << " heard it!" << std::endl;
    }
}