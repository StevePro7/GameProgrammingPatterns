#include "Observer05.h"

#include <iostream>
#include <stdlib.h>

namespace Pool
{
    Event::Event(BindingPool& pool) : pool(pool), binding(NULL)
    {
    }
    void Event::addListener(Listener& listener)
    {
        // Add to the end of the of list.
        Binding* sgbBinding = pool.newBinding();
        sgbBinding->listener = &listener;
        sgbBinding->next = binding;
        binding = sgbBinding;
    }
    void Event::removeListener(Listener& listener)
    {
        // Implement!
    }
    void Event::send(const char* data)
    {
        Binding* newBinding = binding;
        while (NULL != newBinding)
        {
            newBinding->listener->receive(data);
            newBinding = newBinding->next;
        }
    }

    Listener::Listener(const char* name) : name(name)
    {
    }
    int Listener::numEvents() const
    {
        return 0;
    }
    void Listener::receive(const char* data)
    {
        std::cout << name << " received " << data << std::endl;
    }


    Binding::Binding() : listener(NULL), next(NULL)
    {
    }


    BindingPool::BindingPool()
    {
        // Build the free list.
        free = &bindings[0];
        for (int i = 0; i < POOL_SIZE - 1; ++i)
        {
            bindings[i].next = &bindings[i + 1];
        }
    }
    Binding* BindingPool::newBinding()
    {
        // Ensure there is a free binding.
        // Remove the head of the free list.
        Binding* binding = free;
        free = free->next;
        return binding;
    }

}