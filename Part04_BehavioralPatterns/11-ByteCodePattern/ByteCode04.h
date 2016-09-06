#ifndef cpp_bytecode04_h
#define cpp_bytecode04_h

#include "ByteCode00.h"

namespace PushPop
{
    class VM
    {
    private:
        void push(int value);
        int pop();
        void interpret(Instruction instruction);

        static const int MAX_STACK = 128;
        int stackSize;
        int stack[MAX_STACK];
    };
}

#endif//cpp_bytecode04_h