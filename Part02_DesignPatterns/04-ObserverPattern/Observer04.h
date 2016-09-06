#ifndef observer04_h
#define observer04_h

#include "Observer00.h"
using namespace ObserverPattern;

namespace One
{
    class Observable;

    class Observer
    {
    public:
        virtual void onNotify(Observable& observable) = 0;
        bool isObserving() const;
        void observe(Observable& observable);
        void detach();

    protected:
        Observer();
        virtual ~Observer();

    private:
        friend class Observable;

        // The Observable this Observer is watching.
        Observable* observable;

        // The next and prev nodes in the circular linked list;
        // observers of observable.
        Observer* prev;
        Observer* next;
    };


    class Observable
    {
    public:
        bool hasObserver() const;

    protected:
        Observable();
        virtual ~Observable();
        void notify();

    private:
        friend class Observer;
        Observer* observer;
    };


    class Noise : public Observable
    {
    public:
        Noise(const char* name);
        void sound();

    private:
        const char* name;
    };


    class Ear : public Observer
    {
    public:
        Ear(const char* name);
        int getNumObserved();

    protected:
        void onNotify(Observable& observable);

    private:
        const char* name;
        int numObserved;
    };
}

#endif//observer04_h