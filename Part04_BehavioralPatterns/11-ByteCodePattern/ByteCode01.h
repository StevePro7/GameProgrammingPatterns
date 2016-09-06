#ifndef cpp_bytecode01_h
#define cpp_bytecode01_h

namespace Bytecode
{
    class Expression
    {
    public:
        virtual ~Expression();
        virtual double evaluate() = 0;
    };

    class NumberExpression : public Expression
    {
    public:
        NumberExpression(double value);
        double evaluate();

    private:
        double value;
    };

    class AdditionExpression : public Expression
    {
    public:
        AdditionExpression(Expression* left, Expression* right);
        double evaluate();

    private:
        Expression* left;
        Expression* right;
    };
}

#endif//cpp_bytecode01_h