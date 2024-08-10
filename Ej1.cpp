#include <iostream>
using namespace std;
 //Imagina que tienes dos vasos, uno con jugo de naranja y otro con jugo de manzana.
 //Queremos escribir un programa en C++ que tenga una función llamada
 //intercambiarJugos que tome dos vasos (representados como variables) y los
 //intercambie. Luego, en la función main, pedimos al usuario que ingrese la cantidad
 //de jugo en cada vaso, llamamos a la función intercambiarJugos y mostramos las
 //cantidades después del intercambio.//
 void intercambiarJugos(int &vasoA, int &vasoB)
 {
     int aux;
     aux=vasoA;
     vasoA=vasoB;
     vasoB=aux;
 }
 int main() {
         int vasoA, vasoB;
         cout << "Ingrese la cantidad de jugo de naranja en el vaso A" << endl;
         cin >> vasoA;

         cout << "Ingrese la cantidad de jugo de manzana en el vaso B" << endl;
         cin >> vasoB;

         intercambiarJugos(vasoA, vasoB);

     cout << "Vaso A= " << vasoA << endl;
     cout <<  "Vaso B= " << vasoB << endl;
     return 0;
 }

