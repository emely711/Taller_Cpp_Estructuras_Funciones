#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ingresarVentas(vector<double> &ventas, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese venta " << i + 1 << ": ";
        cin >> ventas[i];
    }
}

void guardarVentas(const vector<double> &ventas) {
    ofstream archivo("ventas.txt");
    for (int i = 0; i < ventas.size(); i++) {
        archivo << ventas[i] << endl;
    }
    archivo.close();
}

vector<double> leerVentas() {
    vector<double> ventas;
    ifstream archivo("ventas.txt");
    double valor;

    while (archivo >> valor) {
        ventas.push_back(valor);
    }

    archivo.close();
    return ventas;
}

double calcularTotal(const vector<double> &ventas) {
    double total = 0;
    for (int i = 0; i < ventas.size(); i++) {
        total += ventas[i];
    }
    return total;
}

void contarVentas(const vector<double> &ventas, double promedio) {
    int mayores = 0, menores = 0;

    for (int i = 0; i < ventas.size(); i++) {
        if (ventas[i] > promedio)
            mayores++;
        else if (ventas[i] < promedio)
            menores++;
    }

    cout << "Ventas mayores al promedio: " << mayores << endl;
    cout << "Ventas menores al promedio: " << menores << endl;
}

int main() {
    int n;
    cout << "Cantidad de ventas: ";
    cin >> n;
    
    vector<double> ventas(n);
    ingresarVentas(ventas, n);
    guardarVentas(ventas);

    vector<double> datos = leerVentas();

    double total = calcularTotal(datos);
    double promedio = total / datos.size();

    cout << "Total de ventas: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;

    contarVentas(datos, promedio);

    return 0;
}
