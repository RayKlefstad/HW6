#include "all.h"

/* general algorithm, but others will do something specific for their case
void ExprBlock :: jumpIf(bool cond, Oper label)
{
    Oper c = this->gen();
    if (cond)
        JumpNotZeroInst :: make(c, label);
    else
        JumpZeroInst :: make(c, label);
    FR(c);
}
*/

void UnaryExpr :: jumpIf(bool cond, Oper label)
{
	
}

void BinaryExpr :: jumpIf(bool cond, Oper label)
{
	
}

void AtomExpr :: jumpIf(bool cond, Oper label)
{
	
}

void IndexedExpr :: jumpIf(bool cond, Oper label)
{
	
}

void SelectedExpr :: jumpIf(bool cond, Oper label)
{
	
}

void IdentExpr :: jumpIf(bool cond, Oper label)
{
	
}

void CallExpr :: jumpIf(bool cond, Oper label)
{
	
}

void ConstExpr :: jumpIf(bool cond, Oper label)
{
	
}

void BoolConstExpr :: jumpIf(bool cond, Oper label)
{
	
}

void IntConstExpr :: jumpIf(bool cond, Oper label)
{
	
}

void StrConstExpr :: jumpIf(bool cond, Oper label)
{
	
}

void NoneConstExpr :: jumpIf(bool cond, Oper label)
{
	
}

void NotExpr :: jumpIf(bool cond, Oper label)
{
	
}

void UnaryMinusExpr :: jumpIf(bool cond, Oper label)
{
	
}

void UnaryPlusExpr :: jumpIf(bool cond, Oper label)
{
	
}

void AssignExpr :: jumpIf(bool cond, Oper label)
{
	
}

void ArithmeticExpr :: jumpIf(bool cond, Oper label)
{
	
}

void PlusExpr :: jumpIf(bool cond, Oper label)
{
	
}

void MinusExpr :: jumpIf(bool cond, Oper label)
{
	
}

void TimesExpr :: jumpIf(bool cond, Oper label)
{
	
}

void DivideExpr :: jumpIf(bool cond, Oper label)
{
	
}

void ModuloExpr :: jumpIf(bool cond, Oper label)
{
	
}

void LogicalExpr :: jumpIf(bool cond, Oper label)
{
	
}

void AndExpr :: jumpIf(bool cond, Oper label)
{
	
}

void OrExpr :: jumpIf(bool cond, Oper label)
{
	
}

void RelationalExpr :: jumpIf(bool cond, Oper label)
{
	
}

void EQExpr :: jumpIf(bool cond, Oper label)
{
	
}

void NEExpr :: jumpIf(bool cond, Oper label)
{
	
}

void LTExpr :: jumpIf(bool cond, Oper label)
{
	
}

void LEExpr :: jumpIf(bool cond, Oper label)
{
	
}

void GTExpr :: jumpIf(bool cond, Oper label)
{
	
}

void GEExpr :: jumpIf(bool cond, Oper label)
{
	
}

void InExpr :: jumpIf(bool cond, Oper label)
{
	
}

void NotInExpr :: jumpIf(bool cond, Oper label)
{
	
}

void IsExpr :: jumpIf(bool cond, Oper label)
{
	
}

void IsNotExpr :: jumpIf(bool cond, Oper label)
{
	
}

void ListExpr :: jumpIf(bool cond, Oper label)
{
	
}

