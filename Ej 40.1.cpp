#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ingresarCalificaciones(vector<double> &calificaciones, int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];
    }
}

void guardarArchivo(const vector<double> &calificaciones) {
    ofstream archivo("calificaciones.txt");
    for (int i = 0; i < calificaciones.size(); i++) {
        archivo << calificaciones[i] << endl;
    }
    archivo.close();
}

vector<double> leerArchivo() {
    vector<double> calificaciones;
    ifstream archivo("calificaciones.txt");
    double valor;

    while (archivo >> valor) {
        calificaciones.push_back(valor);
    }

    archivo.close();
    return calificaciones;
}

double calcularTotal(const vector<double> &calificaciones) {
    double total = 0;
    for (int i = 0; i < calificaciones.size(); i++) {
        total += calificaciones[i];
    }
    return total;
}

void contarPromedio(const vector<double> &calificaciones, double promedio) {
    int mayores = 0, menores = 0;

    for (int i = 0; i < calificaciones.size(); i++) {
        if (calificaciones[i] > promedio)
            mayores++;
        else if (calificaciones[i] < promedio)
            menores++;
    }

    cout << "Mayores al promedio: " << mayores << endl;
    cout << "Menores al promedio: " << menores << endl;
}

int main() {
    int n;
    cout << "Cantidad de calificaciones: ";
    cin >> n;

    vector<double> calificaciones(n);

    ingresarCalificaciones(calificaciones, n);
    guardarArchivo(calificaciones);

    vector<double> datos = leerArchivo();

    double total = calcularTotal(datos);
    double promedio = total / datos.size();

    cout << "Total: " << total << endl;
    cout << "Promedio: " << promedio << endl;

    contarPromedio(datos, promedio);

    return 0;
}
