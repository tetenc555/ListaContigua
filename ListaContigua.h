#ifndef LISTACONTIGUA_H__
#define LISTACONTIGUA_H__
#include <iostream>

using namespace std;

class ListaContigua
{
    public:
        ListaContigua(int max);
        ~ListaContigua();
        int get(int p);
        void set(int p, int val);
        void newEnd(int val);
        void deleteEnd();
        void newNode(int p, int val);
        void deleteNode(int p, int val);

    private:
        int n;
        int max;
        int* vet;
};

#endif