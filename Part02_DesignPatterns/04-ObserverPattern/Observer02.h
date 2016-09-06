#ifndef observer02_h
#define observer02_h

#include "Observer00.h"
using namespace ObserverPattern;

namespace Pattern
{
    static const int MAX_OBSERVERS = 10;

    class Observer
    {
    public:
        virtual ~Observer();
        virtual void onNotify(const Entity& entity, Event event) = 0;
    };


    class Achievements : public Observer
    {
    public:
        void onNotify(const Entity& entity, Event event);

    private:
        void unlock(Achievement achievement);
        bool heroIsOnBridge;
    };


    class Subject
    {
    public:
        void addObserver(Observer* observer);
        void removeObserver(Observer* observer);

    protected:
        void notify(const Entity& entity, Event event);

    private:
        Observer* observers[MAX_OBSERVERS];
        int numObservers;
    };


    class Physics : public Subject
    {
    public:
        void updateEntity(Entity& entity);
    };


    class PhysicsEvent : public Observer
    {
    public:
        void onNotify(const Entity& entity, Event event);
        void physicsEvent();
        Subject& getEntityFell();

    private:
        Subject entityFell;
        

        
    };
}

#endif//observer02_h