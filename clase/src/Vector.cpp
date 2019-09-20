#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

Vector::Vector()
{

}

void Vector::modificar(double nx, double ny){
    fin.modificar(nx, ny);
}
void Vector::imprimir(){
cout << "(" << inicio.x << " , " << inicio.y << ") -> (" << fin.x << " , " << fin.y << ")"<<endl;
}

void Vector::imprimir2(){
    inicio.imprimir();
    cout << " -> ";
    fin.imprimir();
}
double Vector::modulo(){
    int xr = fin.x - inicio.x;
    int yr = fin.y - inicio.y;
    double mod = pow(pow(xr,2)+pow(yr,2),0.5);
    return mod;
}
