#include "tablero.h"
#include <sstream>

using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::stringstream;

Tablero::Tablero()
{
    ifstream archivo;
    archivo.open("datos.txt");

    if (archivo.is_open())
    { 
        string linea;
        while (getline(archivo, linea))
        {
            string simbolo1;
            string simbolo2;
            string simbolo3;
            cout << linea << endl;
            stringstream token(linea);
            getline(token, simbolo1, ',');
            getline(token, simbolo2, ',');
            getline(token, simbolo3, ',');

            cout << simbolo1 << endl;
            cout << simbolo2 << endl;
            cout << simbolo3 << endl;

        }        
        
    }
    else
    {
        cout << "No está abierto el archivo" << endl;
    }
    archivo.close();

}