#include "GameLoop07.h"

namespace Interpolate
{
    void runGame()
    {
        const double MS_PER_UPDATE = 8;
        double lag = 0;

        double elapsed = lag / MS_PER_UPDATE;
        render(elapsed);
    }
}