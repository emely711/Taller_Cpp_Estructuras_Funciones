#include <iostream>
using namespace std;

int main() {
    int numeros[10];      
    int enRango = 0;     
    int fueraRango = 0;   

    cout << "Ingrese 10 numeros:" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];

        if(numeros[i] >= 20 && numeros[i] <= 80) {
            enRango++;
        } else {
            fueraRango++;
        }
    }

    double porcentajeRango = (enRango * 100.0) / 10;
    double porcentajeFuera = (fueraRango * 100.0) / 10;

    cout << "Resultados:" << endl;
    cout << "Cantidad en el rango (20-80): " << enRango << endl;
    cout << "Cantidad fuera del rango: " << fueraRango << endl;
    cout << "Porcentaje en el rango: " << porcentajeRango << "%" << endl;
    cout << "Porcentaje fuera del rango: " << porcentajeFuera<< "%" << endl;

    return 0;
}
