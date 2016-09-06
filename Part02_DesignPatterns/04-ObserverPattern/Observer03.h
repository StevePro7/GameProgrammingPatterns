#ifndef observer03_h
#define observer03_h

#include "Observer00.h"
using namespace ObserverPattern;

namespace LinkedObservers
{
    class Observer
    {
    public:
        Observer();
        virtual void onNotify(const Entity& entity, Event event);

    private:
        friend class Subject;
        Observer* next;
    };


    class Subject
    {
    public:
        Subject();
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);
        void notify(const Entity& entity, Event event);

    private:
        Observer* head;
    };
}

#endif//observer03_h