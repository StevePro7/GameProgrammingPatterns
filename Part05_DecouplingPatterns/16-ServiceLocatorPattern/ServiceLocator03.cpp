#include "ServiceLocator03.h"

namespace Version03
{
    Audio* Base::service;

    Audio& Base::getAudio()
    {
        return *service;
    }
}