#include "UpdateMethod04.h"

namespace VariableTimeStep
{
    void Skeleton::update(double elapsed)
    {
        if (patrollingLeft)
        {
            x -= elapsed;
            if (x <= 0)
            {
                patrollingLeft = false;
                x = -x;
            }
            else
            {
                x += elapsed;
                if (x >= 100)
                {
                    patrollingLeft = true;
                    x = 100 - (x - 100);
                }
            }
        }
    }
}