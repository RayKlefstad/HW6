#include "all.h"

/* Just an algorithm for generating binary operators
Oper ExprBlock :: gen()
{
    Oper f, s;
    if (first->RC > second->RC)
    {
        f = first->gen();
        s = second->gen();
    }
    else
    {
        s = second->gen();
        f = first->gen();
    }
    emit(f,s);
    FR(s);
    return f;
}
*/

Oper AtomExpr :: gen()
{
    return 0;
}

Oper UnaryExpr :: gen()
{
    return 0;
}

Oper BinaryExpr :: gen()
{
    return 0;
}

Oper IndexedExpr :: gen()
{
	return 0;
}

Oper SelectedExpr :: gen()
{
	return 0;
}

Oper IdentExpr :: gen()
{
	return 0;
}

Oper CallExpr :: gen()
{
	return 0;
}

Oper ConstExpr :: gen()
{
	return 0;
}

Oper BoolConstExpr :: gen()
{
	return 0;
}

Oper IntConstExpr :: gen()
{
	return 0;
}

Oper StrConstExpr :: gen()
{
	return 0;
}

Oper NoneConstExpr :: gen()
{
	return 0;
}

Oper NotExpr :: gen()
{
	return 0;
}

Oper UnaryMinusExpr :: gen()
{
	return 0;
}

Oper UnaryPlusExpr :: gen()
{
	return 0;
}

Oper AssignExpr :: gen()
{
	return 0;
}

Oper ArithmeticExpr :: gen()
{
	return 0;
}

Oper PlusExpr :: gen()
{
	return 0;
}

Oper MinusExpr :: gen()
{
	return 0;
}

Oper TimesExpr :: gen()
{
	return 0;
}

Oper DivideExpr :: gen()
{
	return 0;
}

Oper ModuloExpr :: gen()
{
	return 0;
}

Oper LogicalExpr :: gen()
{
	return 0;
}

Oper AndExpr :: gen()
{
	return 0;
}

Oper OrExpr :: gen()
{
	return 0;
}

Oper RelationalExpr :: gen()
{
	return 0;
}

Oper EQExpr :: gen()
{
	return 0;
}

Oper NEExpr :: gen()
{
	return 0;
}

Oper LTExpr :: gen()
{
	return 0;
}

Oper LEExpr :: gen()
{
	return 0;
}

Oper GTExpr :: gen()
{
	return 0;
}

Oper GEExpr :: gen()
{
	return 0;
}

Oper InExpr :: gen()
{
	return 0;
}

Oper NotInExpr :: gen()
{
	return 0;
}

Oper IsExpr :: gen()
{
	return 0;
}

Oper IsNotExpr :: gen()
{
	return 0;
}

Oper ListExpr :: gen()
{
	return 0;
}

