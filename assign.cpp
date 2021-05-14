#include "all.h"

/*
Oper ExprBlock :: assign(Expr dest)
{
    AssignInst :: make(operand->gen(), dest);
}

Oper UnaryExpr :: assign(Expr dest)
{
	return 0;
}

Oper BinaryExpr :: assign(Expr dest)
{
	return 0;
}

*/

Oper AtomExpr :: assign(Expr dest)
{
    Oper o = this->gen();
    Oper d = dest->gen();
    MoveInst :: make(o, d);
    return o;
}

/*
Oper IndexedExpr :: assign(Expr dest)
{
	return 0;
}

Oper SelectedExpr :: assign(Expr dest)
{
	return 0;
}

Oper IdentExpr :: assign(Expr dest)
{
	return 0;
}

eper CallExpr :: assign(Expr dest)
{
	return 0;
}

Oper ConstExpr :: assign(Expr dest)
{
	return 0;
}

Oper BoolConstExpr :: assign(Expr dest)
{
	return 0;
}

Oper IntConstExpr :: assign(Expr dest)
{
	return 0;
}

Oper StrConstExpr :: assign(Expr dest)
{
	return 0;
}

Oper NoneConstExpr :: assign(Expr dest)
{
	return 0;
}

*/
Oper NotExpr :: assign(Expr dest)
{
    return 0;
}


Oper UnaryMinusExpr :: assign(Expr dest)
{
    Oper o = first->gen();
    Oper d = dest->gen();
    MinusInst :: make(o, d);
	return 0;
}

/*

Oper UnaryPlusExpr :: assign(Expr dest)
{
	return 0;
}

Oper AssignExpr :: assign(Expr dest)
{
}

Oper ArithmeticExpr :: assign(Expr dest)
{
    // can handle things like x = x + y to generate add y, x

	return 0;
}

Oper PlusExpr :: assign(Expr dest)
{
	return 0;
}

Oper MinusExpr :: assign(Expr dest)
{
	return 0;
}

Oper TimesExpr :: assign(Expr dest)
{
	return 0;
}

Oper DivideExpr :: assign(Expr dest)
{
	return 0;
}

Oper ModuloExpr :: assign(Expr dest)
{
	return 0;
}

Oper LogicalExpr :: assign(Expr dest)
{
	return 0;
}

*/

Oper AndExpr :: assign(Expr dest)
{
	return 0;
}

Oper OrExpr :: assign(Expr dest)
{
	return 0;
}

/*

Oper RelationalExpr :: assign(Expr dest)
{
    Oper f = first->gen();
    Oper s = second->gen();
    Oper d = dest->gen();
    genSetCC(myOperator(), f, s, d);
    return d;
}

Oper EQExpr :: assign(Expr dest)
{
	return 0;
}

Oper NEExpr :: assign(Expr dest)
{
	return 0;
}

Oper LTExpr :: assign(Expr dest)
{
	return 0;
}

Oper LEExpr :: assign(Expr dest)
{
	return 0;
}

Oper GTExpr :: assign(Expr dest)
{
	return 0;
}

Oper GEExpr :: assign(Expr dest)
{
	return 0;
}

Oper InExpr :: assign(Expr dest)
{
	return 0;
}

Oper NotInExpr :: assign(Expr dest)
{
	return 0;
}

Oper IsExpr :: assign(Expr dest)
{
	return 0;
}

Oper IsNotExpr :: assign(Expr dest)
{
	return 0;
}

Oper ListExpr :: assign(Expr dest)
{
	return 0;
}

*/
