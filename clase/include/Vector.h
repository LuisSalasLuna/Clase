#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"

class Vector
{
    public:
        Punto inicio,fin;
        Vector();
        void modificar(double , double );
        void imprimir();
        void imprimir2();
        double modulo();

};

#endif // VECTOR_H
