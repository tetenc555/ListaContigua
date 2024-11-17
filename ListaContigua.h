#ifndef LISTACONTIGUA_H__
#define LISTACONTIGUA_H__
#include <iostream>

using namespace std;

class ListaContigua
{
    public:
        ListaContigua(int max);
        ~ListaContigua();
        int get();
    private:
        int n;
        int max;
        int* vet;
};

#endif