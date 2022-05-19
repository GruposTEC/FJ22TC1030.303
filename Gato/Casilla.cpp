#include "casilla.h"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;


Casilla::Casilla()
{
    
}

char Casilla::getSimbolo()
{
    return simbolo;
}i
int Casilla::getPosicion()
{
    return posicion;
}
void Casilla::setSimbolo(char simbolo)
{
    simbolo = sim;
}

void Casilla::setPosicion(int posision)
{
    posicion = pos;
}

bool Casilla::ocupada()
{
    if(simbolo =! ' ')
    {
        return True;
    }

    else
    {
        return False;
    }
}
