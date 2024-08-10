#include <iostream>
#include <vector>
using namespace std;
void agregarContacto(vector<string> &contactos, string &nombre, string &telefono){
string nuevocontacto= nombre + ": " + telefono;
contactos.push_back(nuevocontacto);
}
void mostrarContactos(vector<string> contactos){
    cout << "Lista de Contactos:\n";
    for (int i = 0; i < contactos.size(); i++) {
        cout << contactos[i] << "\n";
    }
}
int main() {
    int opcion;
    string nombre, numeronuevo;

    vector<string> contactos;
    do {
        cout << "MENU:- Ingrese un numero" << endl;
        cout << "1- Agregar contactos" << endl;
        cout << "2- Mostrar lista contactos" << endl;
        cout << "3- salir" << endl;
        cin >> opcion;
        switch (opcion) {
            case 1: {

                cout << "Ingrese el nombre del nuevo contacto" << endl;
                cin >> nombre;
                cout << "Ingrese el numero: " << endl;
                cin >> numeronuevo;
                agregarContacto(contactos, nombre, numeronuevo);
                break;
            }
            case 2:{
                mostrarContactos(contactos);
                break;
            }
            case 3:
                break;
            default:
                cout << "numero invalido";
        }
    } while (opcion!=3);
}
