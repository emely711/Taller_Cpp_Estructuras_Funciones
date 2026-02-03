#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];
    int sumaFila;
    int sumaTotal = 0;
    
    cout << "Ingrese los valores de la matriz 3x3:" << endl;

    for(int i = 0; i < 3; i++) {
        sumaFila = 0;  

        for(int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];

            sumaFila += matriz[i][j];
            sumaTotal += matriz[i][j];
        }

        cout << "Suma de la fila " << i+1 << ": " << sumaFila << endl;
    }

    cout << "\nSuma total de la matriz: " << sumaTotal << endl;

    return 0;
}
