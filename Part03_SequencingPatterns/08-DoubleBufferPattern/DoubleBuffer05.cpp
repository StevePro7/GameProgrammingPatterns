#include "DoubleBuffer05.h"

namespace SwapOffset
{
    int Actor::curr = 0;

    void Actor::init()
    {
        curr = 0;
    }
    void Actor::swap()
    {
        curr = next();
    }
    void Actor::slap()
    {
        int temp = next();
        slapped[temp] = true;
    }
    bool Actor::wasSlapped()
    {
        return slapped[curr];
    }
    int Actor::next()
    {
        return 1 - curr;
    }
}