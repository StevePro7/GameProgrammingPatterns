#include "Component11.h"

namespace ComponentMessaging
{
    Component::~Component()
    {
    }

    void ContainerObject::send(int message)
    {
        for (int i = 0; i < MAX_COMPONENTS; ++i)
        {
            if (NULL != components[i])
            {
                components[i]->receive(message);
            }
        }
    }
}