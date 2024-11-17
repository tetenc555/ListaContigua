#include <iostream>
#include "ListaContigua.h"
using namespace std;

int main()
{
    ListaContigua geraldo(7);
    geraldo.newEnd(1);
    geraldo.newEnd(1);
    geraldo.newEnd(2);
    geraldo.newEnd(1);
    geraldo.deleteNode(1);
    for (int i=0;i<geraldo.getSize();i++)
        cout << geraldo.get(i) << " ";
    cout << endl;
    return 0;
}