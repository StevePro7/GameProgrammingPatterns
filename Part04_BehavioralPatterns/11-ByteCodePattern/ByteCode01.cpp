#include "ByteCode01.h"

namespace Bytecode
{
    Expression::~Expression()
    {
    }

    NumberExpression::NumberExpression(double value) : value(value)
    {
    }
    double NumberExpression::evaluate()
    {
        return value;
    }

    AdditionExpression::AdditionExpression(Expression* left, Expression* right) : left(left), right(right)
    {
    }
    double AdditionExpression::evaluate()
    {
        double l = left->evaluate();
        double r = right->evaluate();

        return l + r;
    }
}