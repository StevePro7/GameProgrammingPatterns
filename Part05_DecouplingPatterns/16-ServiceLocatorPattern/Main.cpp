#include "ServiceLocator05.h"

using namespace Version05;

int main()
{
    // Decorate the existing service.
    Audio& wrapped = Locator::getAudio();
    Audio* service = new LoggedAudio(wrapped);
    Locator::provide(service);
    delete service;
    return 0;
}