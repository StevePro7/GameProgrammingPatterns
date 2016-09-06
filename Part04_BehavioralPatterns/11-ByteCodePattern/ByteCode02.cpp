#include "ByteCode02.h"
#include "ByteCode00.h"

namespace NoParams
{
    void VM::interpret(char bytecode[], int size)
    {
        for (int i = 0; i < size; ++i)
        {
            char instruction = bytecode[i];
            interpretInstruction(instruction);
        }
    }
}