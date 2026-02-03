#include <iostream>

using namespace std;

int mayorValor(int numeros[], int n) {
    int mayor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] > mayor)
            mayor = numeros[i];
    }
    return mayor;
}

int menorValor(int numeros[], int n) {
    int menor = numeros[0];

    for (int i = 1; i < n; i++) {
        if (numeros[i] < menor)
            menor = numeros[i];
    } 
    return menor;
} 

void contarNumeros(int numeros[], int n) {
    int positivos = 0, negativos = 0, ceros = 0;

    for (int i = 0; i < n; i++) {
        if (numeros[i] > 0)
            positivos++;
        else if (numeros[i] < 0)
            negativos++;
        else
            ceros++;
    }
    cout << "Positivos: " << positivos << endl;
    cout << "Negativos: " << negativos << endl;
    cout << "Ceros: " << ceros << endl;
}

int main() {
    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;
    int numeros[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    cout << "Mayor: " << mayorValor(numeros, n) << endl;
    cout << "Menor: " << menorValor(numeros, n) << endl;

    contarNumeros(numeros, n);

    return 0;
}
