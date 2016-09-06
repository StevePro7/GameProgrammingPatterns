#include "GameLoop06.h"

namespace FixedUpdateFramerate
{
    void runGame()
    {
        const double MS_PER_UPDATE = 8;

        double previous = getCurrentTime();
        double lag = 0.0;

        while (true)
        {
            double current = getCurrentTime();
            double elapsed = current - previous;

            previous = current;
            lag += elapsed;

            processInput();
            while (lag >= MS_PER_UPDATE)
            {
                update();
                lag -= MS_PER_UPDATE;
            }

            render();
        }
    }
}