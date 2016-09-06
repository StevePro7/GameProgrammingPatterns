#include "GameLoop05.h"

namespace FluidFramerate
{
    void runGame()
    {
        double lastTime = getCurrentTime();
        while (true)
        {
            double current = getCurrentTime();
            double elapsed = current - lastTime;

            processInput();
            update(elapsed);
            render();

            lastTime = current;
        }
    }
}