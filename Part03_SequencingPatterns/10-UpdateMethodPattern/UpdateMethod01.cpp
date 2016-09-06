#include "UpdateMethod01.h"

namespace Motivation
{
    void Entity::shootLightning()
    {
    }
    void Entity::setX(double x)
    {
    }

    void refreshGame()
    {

    }
    void justPatrol()
    {
        Entity skeleton;

        // Just patrol.
        while (true)
        {
            // Patrol right.
            for (double x = 0; x < 100; ++x)
            {
                skeleton.setX(x);
            }

            // Patrol left.
            for (double x = 100; x > 0; --x)
            {
                skeleton.setX(x);
            }
        }
    }
    void patrolInLoop()
    {
        // Patrol in loop.
        Entity skeleton;
        bool patrollingLeft = false;
        double x = 0;

        while (true)
        {
            if (patrollingLeft)
            {
                x--;
                if (x == 0)
                {
                    patrollingLeft = false;
                }
            }
            else
            {
                x++;
                if (x == 100)
                {
                    patrollingLeft = true;
                }
            }
        }
    }
    void statuses()
    {
        Entity leftStatue;
        Entity rightStatue;
        int leftStatueFrames = 0;
        int rightStatueFrames = 0;

        // Main game loop.
        while (true)
        {
            // Skeleton code.
            if (++leftStatueFrames == 90)
            {
                leftStatueFrames = 0;
                leftStatue.shootLightning();
            }
            if (++rightStatueFrames == 80)
            {
                rightStatueFrames = 0;
                rightStatue.shootLightning();
            }

            // Handle user input and render game
        }
    }
}