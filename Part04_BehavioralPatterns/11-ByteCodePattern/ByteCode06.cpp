#include "ByteCode06.h"
#include <assert.h>

namespace ValueOop
{
    Value::~Value()
    {
    }

    int Value::asInt()
    {
        // Can onluy call this on ints.
        assert(false);
        return 0;
    }

    IntValue::IntValue(int value) : value(value)
    {
    }
    ValueType IntValue::type()
    {
        return TYPE_INT;
    }
    int IntValue::asInt()
    {
        return value;
    }
}