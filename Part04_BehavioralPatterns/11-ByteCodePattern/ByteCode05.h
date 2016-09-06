#ifndef cpp_bytecode05_h
#define cpp_bytecode05_h

#include "ByteCode00.h"

namespace TaggedValue
{
    enum ValueType
    {
        TYPE_INT,
        TYPE_DOUBLE,
        TYPE_STRING
    };

    struct Value
    {
        ValueType type;
        union
        {
            int intValue;
            double doubleValue;
            char* stringValue;
        };
    };
}

#endif//cpp_bytecode05_h