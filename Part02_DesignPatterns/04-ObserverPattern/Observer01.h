#ifndef observer01_h
#define observer01_h

#include "Observer00.h"
using namespace ObserverPattern;

namespace Motivation
{
    class Physics
    {
    public:
        void updateEntity(Entity& entity);
        void notify(Entity& entity, int event);
    };
}

#endif//observer01_h