#ifndef cpp_state01_h
#define cpp_state01_h

#include "State00.h"
using namespace StateNS;

namespace Spaghetti01
{
    class Heroine
    {
    public:
        void setGraphics(Animate animate);
        void handleInput(Input input);

    private:
        double yVelocity;
    };
}

#endif//cpp_state01_h