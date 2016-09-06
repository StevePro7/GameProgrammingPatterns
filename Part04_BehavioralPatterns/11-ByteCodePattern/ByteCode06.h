#ifndef cpp_bytecode06_h
#define cpp_bytecode06_h

#include "ByteCode00.h"

namespace ValueOop
{
    enum ValueType
    {
        TYPE_INT,
        TYPE_DOUBLE,
        TYPE_STRING
    };

    class Value
    {
    public:
        virtual ~Value();
        virtual ValueType type() = 0;
        virtual int asInt();
    };

    class IntValue : public Value
    {
    public:
        IntValue(int value);
        ValueType type();
        int asInt();

    private:
        int value;
    };
}

#endif//cpp_bytecode06_h