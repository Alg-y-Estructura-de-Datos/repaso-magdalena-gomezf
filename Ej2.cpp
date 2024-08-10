#include <iostream>
using namespace std;
//Escribe un programa en C++ que calcule el factorial de un número entero positivo
//usando un bucle.//
unsigned factorial(int n){
    int prod;
    if(n==0){
        return 1;
    }
    else{
        return n * (factorial(n-1));
    }
}
int main() {
int n;
    cout << "ingrese un numero" << endl;
    cin >>n;

   cout << "el factorial de " <<n << " es igual a : "<<  factorial(n);
    return 0;
}
