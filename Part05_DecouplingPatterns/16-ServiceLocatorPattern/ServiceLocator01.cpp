#include "ServiceLocator01.h"

namespace Version01
{
    Audio* Locator::service;

    Audio* Locator::getAudio()
    {
        return service;
    }
    void Locator::provide(Audio* theService)
    {
        service = theService;
    }
}