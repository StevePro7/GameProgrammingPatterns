#include <iostream>
#include "Singleton10.h"

using namespace Singleton10;

int main()
{
    Game::Instance().getAudioPlayer().play(2);
    return 0;
}