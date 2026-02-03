#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Cliente {
    string nombre;
    int edad;
    float consumoMensual;
};

int main() {

    vector<Cliente> clientes;
    Cliente cliente;
    int cantidad;

    cout << "Cuantos clientes desea ingresar: ";
    cin >> cantidad;

    for(int i = 0; i < cantidad; i++) {
        cout << "\nCliente " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> cliente.nombre;
        cout << "Edad: ";
        cin >> cliente.edad;
        cout << "Consumo mensual: ";
        cin >> cliente.consumoMensual;

        clientes.push_back(cliente);
    }

    ofstream archivo("clientes.txt");
    for(int i = 0; i < clientes.size(); i++) {
        archivo << clientes[i].nombre << " "
                << clientes[i].edad << " "
                << clientes[i].consumoMensual << endl;
    }
    archivo.close();
    clientes.clear();

    ifstream leer("clientes.txt");
    while(leer >> cliente.nombre >> cliente.edad >> cliente.consumoMensual) {
        clientes.push_back(cliente);
    }
    leer.close();

    float total = 0;
    float mayor = clientes[0].consumoMensual;
    string nombreMayor = clientes[0].nombre;

    for(int i = 0; i < clientes.size(); i++) {
        total += clientes[i].consumoMensual;

        if(clientes[i].consumoMensual > mayor) {
            mayor = clientes[i].consumoMensual;
            nombreMayor = clientes[i].nombre;
        }
    }
    float promedio = total / clientes.size();

    cout<<"\n--- RESULTADOS ---"<<endl;
    cout<<"Consumo total: " <<total<< endl;
    cout<<"Consumo promedio: "<<promedio<<endl;
    cout<<"Cliente con mayor consumo: "<<nombreMayor<<endl;

    return 0;
}
