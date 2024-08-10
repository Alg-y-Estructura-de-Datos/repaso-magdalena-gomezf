#include <iostream>
using namespace std;
void marcarasiento(bool *asiento){
 *asiento= true;
}
int main() {
const int total=20;
int  asientoreservado;
    bool asientos[total]={false};
    cout << "Listado de asientos disponibles";
    for(int i=0; i<total;i++){
        cout << i+1 << (asientos[i] ? "Reservado" : "Libre") << endl;
    }


   cout << "Ingrese el asiento que desee reservar-del 1 al 20";
   cin >> asientoreservado;
   marcarasiento(&asientos[asientoreservado-1]);

    cout << "Listado de asientos disponibles actualizado";
    for(int i=0; i<total;i++){
        cout << i+1 << (asientos[i] ? "Reservado" : "Libre") << endl;
    }

    return 0;
}
