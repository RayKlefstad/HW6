#include "all.h"

SymTab ST;

void SymTab :: enterSymbol(Symbol sy)
{
    head->info = new SymbolPair(sy, head->info);
}

Symbol SymTab :: findSymbolInTopScope(string name)
{
    return findSymbolInList(name, head->info);
}

bool scopeIsVisible[1024];
int isVisTop = -1;

void SymTab :: enterScope(string name, SymbolList syli, bool isVisible)
{
    names = new stringPair(name, names);
    head = new SymbolListPair(syli, head);
    scopeIsVisible[++isVisTop] = isVisible;
}

SymbolList SymTab :: exitScope()
{
    SymbolList t = head->info;
    head = head->next;
    string name = names->info;
    if (HW == 4 || HW == 5)
    {
        cout << "*** Exit Scope " << name << " ***" << endl;
        putSymbolList(cout, t);
        cout << endl;
    }
    names = names->next;
    --isVisTop;
    return t;
}

Symbol SymTab :: findSymbolInList(string name, SymbolList sl)
{
    for (SymbolList p = sl; p; p = p->next)
        if (name == p->info->name)
            return p->info;
    return 0;
}

Symbol SymTab :: findSymbol(string name)
{
    int curTop = isVisTop;
    for (SymbolListList sll = head; sll; sll = sll->next)
    {
        bool isvis = scopeIsVisible[curTop--];
        if (Symbol sy = findSymbolInList(name, sll->info))
        {
            if (!isvis)
            {
                cout << "*** Semantic Error: Accessing class member that is not directly visible: " << name << endl;
            }
            return sy;
        }
    }
    return 0;
}

void SymTab :: declare(Symbol sy)
{
    Symbol oldSy = findSymbolInTopScope(sy->name);
    if (oldSy)
        semantic_error("multiple definitions in scope");
    else
        enterSymbol(sy);
    debug("declaring symbol " + sy->name);
}

void SymTab :: putSymbolList(ostream & out, SymbolList L)
{
        for (SymbolList sl = L; sl; sl = sl->next)
        {
            sl->info->put(out);
            out << endl;
        }
}

void SymTab :: put(ostream & out)
{
    for (SymbolListList sll = head; sll; sll = sll->next)
        putSymbolList(out, sll->info);
}
