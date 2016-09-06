#ifndef cpp_component11_h
#define cpp_component11_h

#include "Component00.h"

namespace ComponentMessaging
{
    class Component
    {
    public:
        virtual ~Component();
        virtual void receive(int message) = 0;
    };

    class ContainerObject
    {
    public:
        void send(int message);

    private:
        static const int MAX_COMPONENTS = 10;
        Component* components[MAX_COMPONENTS];
    };
}

#endif//cpp_component11_h