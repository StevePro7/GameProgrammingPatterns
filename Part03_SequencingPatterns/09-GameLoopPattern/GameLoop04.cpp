#include "GameLoop04.h"

namespace FixedFramerate
{
    void runGame()
    {
        while (true)
        {
            double start = getCurrentTime();
            processInput();
            update();
            render();

            double time = start + MS_PER_FRAME - getCurrentTime();
            sleep(time);
        }
    }
}