#ifndef cpp_gameloop01_h
#define cpp_gameloop01_h

#include "GameLoop00.h"

namespace Repl
{
    char* readCommand();
    void handleCommand(char* command);
    void loop();
}

#endif//cpp_gameloop01_h