#include <iostream>
using namespace std;
class Calculadora{
private:
    double A,B;
public:
    Calculadora(double a,double b): A{a}, B{b}{}

    double sumar() const {
        return A+B;
    }
    double restar() const{
        return A-B;
    }
    double multiplicar() const{
        return A*B;
    }
    double dividir() const{
        if(B==0){
            cout << "error" << endl;
        } else return A/B;
    }
};
int main (){
    double a,b;
    cout << "Ingrese los numeros a y b" << endl;
    cin >>a >> b;
 Calculadora calculadora(a,b);

    cout << "suma :" << calculadora.sumar() <<endl;
cout << "Resta: " << calculadora.restar() << endl;
cout << "Multiplicacion: "<< calculadora.multiplicar() << endl;
cout << "Division: " << calculadora.dividir();

}