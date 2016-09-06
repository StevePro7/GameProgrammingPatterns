#include "ServiceLocator04.h"

namespace Version04
{
    Audio& Locator::getAudio()
    {
        Audio* service = NULL;

        // Code here to locate service...
        assert(NULL != service);
        return *service;
    }
}