#include <iostream>
using namespace std;

#include "ListaContigua.h"

ListaContigua::ListaContigua(int max)
{
    max=max;
    n=0;
    vet=new int [max];
}

ListaContigua::~ListaContigua()
{
    delete [] vet;
}

int ListaContigua::get(int p)
{
    if (p<0 || p>=n)
        return NULL;
    return vet[p];
}

void ListaContigua::set(int p, int val)
{
    if (p<0 || p>=n)
        return;
    vet[p] = val;
}

void ListaContigua::newEnd(int val)
{
    if(n>=max)
        return;
    vet[n]=val;
    n++;
}

void ListaContigua::deleteEnd()
{
    if(n==0)
        return;
    n--;
}