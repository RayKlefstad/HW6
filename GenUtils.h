inline void genMoveImmediate(Oper dest, int value)
{
    MoveInst :: make(dest, ImmediateOper :: make(ConstantOper :: make(value)));
}

inline void genJump(Oper label)
{
    LabelInst :: make(label);
}

inline void genCompare(Oper label)
{
    LabelInst :: make(label);
}

inline void genSetCC(int t, Oper l, Oper r, Oper d)
{
    CompareAndSetInst :: make(t, l, r, d);
}

