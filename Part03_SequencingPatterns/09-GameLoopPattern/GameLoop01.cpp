#include "GameLoop01.h"

namespace Repl
{
    char* readCommand()
    {
        return NULL;
    }
    void handleCommand(char* command)
    {
    }
    void loop()
    {
        while (true)
        {
            char* command = readCommand();
            handleCommand(command);
        }
    }
}