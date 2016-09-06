#ifndef observer05_h
#define observer05_h

//#include "Observer00.h"
//using namespace ObserverPattern;

namespace Pool
{
    class Binding;
    class BindingPool;
    class Listener;

    class Event
    {
    public:
        Event(BindingPool& pool);

        void addListener(Listener& listener);
        void removeListener(Listener& listener);
        void send(const char* data);

    private:
        BindingPool& pool;
        Binding* binding;
    };


    class Listener
    {
    public:
        Listener(const char* name);

        int numEvents() const;
        void receive(const char* data);

    private:
        const char* name;
    };


    class Binding
    {
    public:
        Binding();

    private:
        friend class BindingPool;
        friend class Event;

        Listener* listener;

        // If the binding is in use then this will point to the binding for the
        // next listener.  Otherwise, it will point to the next free binding.
        Binding* next;
    };


    class BindingPool
    {
    public:
        BindingPool();
        Binding* newBinding();

    private:
        static const int POOL_SIZE = 100;
        Binding bindings[POOL_SIZE];

        // Pointer to the first binding in the list of free bindings.
        Binding* free;
    };
}

#endif//observer05_h