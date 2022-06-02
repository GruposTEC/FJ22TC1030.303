#include "Punto.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Punto p1(1,1);
    Punto p2(5,6);
    //Pasa por Referencia
    Punto p3 = p1 + p2;
    p1.display();
    p2.display();
    p3.display();
    //Pasa por apuntador
    Punto p4 = p3 + &p2;
    p4.display();

    return 0;
}
