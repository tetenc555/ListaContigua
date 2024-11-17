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
int ListaContigua::get()
{
    
}
