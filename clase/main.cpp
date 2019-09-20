#include <iostream>
#include "Punto.h"
#include "Vector.h"
using namespace std;

int main()
{
    Punto p;
    //p.imprimir();
    Vector q;
    q.imprimir();
    //q.imprimir2();
    q.modificar(3,4);
    q.imprimir();
    cout << q.modulo();

    return 0;

}

