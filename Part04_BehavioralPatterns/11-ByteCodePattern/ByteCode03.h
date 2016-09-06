#ifndef cpp_bytecode03_h
#define cpp_bytecode03_h

namespace Stack
{
    class VM
    {
    public:
        VM();

    private:
        static const int MAX_STACK = 128;
        int stackSize;
        int stack[MAX_STACK];
    };
}

#endif//cpp_bytecode03_h