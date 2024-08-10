#include <iostream>
#include <cmath>
using namespace std;

int sumar(int n, int m){
   return n+m;
}
double area(double radio){
    const double PI = 3.14159265358979323846;
    return PI * radio * radio;
}
int potencia(int numero, int exponente){
    return pow(numero, exponente);
}
int main(){
    int opcion, n, m, numero, exponente;
    double radio;
    do {
        cout << "MENU:- Ingrese un numero" << endl;
        cout << "1- Sumar enteros" << endl;
        cout << "2- Calcular area circulo" << endl;
        cout << "3- Potencia de un numero" << endl;
        cout << "4- salir" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1: {
                cout << "Ingrese dos numeros" << endl;
                cin >> n >> m;
                cout << sumar(n, m) << endl;
                break;
            }
            case 2: {
                cout << "Ingrese el radio del circulo";
                cin >> radio;
                cout << area(radio) << endl;
                break;
            }
            case 3: {
                cout << "INgrese numero";
                cin >> numero;
                cout << "ingrese exponente";
                cin >> exponente;
                cout << potencia(numero, exponente) << endl;
                break;
            }
            case 4:
                break;
            default:
                cout << "numero invalido" << endl;
        }
    } while (opcion!=4);
}
