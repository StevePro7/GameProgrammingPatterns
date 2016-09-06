#include "GameLoop03.h"

namespace FastAsPossible
{
    void runGame()
    {
        processInput();
        update();
        render();
    }
}