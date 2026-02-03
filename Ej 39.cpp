#include <iostream>
#include <vector>

using namespace std;

int calcularSuma(vector<int> numeros) {
    int suma = 0;

    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }

    return suma;
}

float calcularPromedio(vector<int> numeros) {
    int suma = 0;

    for (int i = 0; i < numeros.size(); i++) {
        suma += numeros[i];
    }

    return (float)suma / numeros.size();
}

void contarParesImpares(vector<int> numeros) {
    int pares = 0, impares = 0;

    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "Pares: " << pares << endl;
    cout << "Impares: " << impares << endl;
}

int main() {
    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;

    vector<int> numeros(n);

    for (int i = 0; i < numeros.size(); i++) {
        cout << "Ingrese numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int suma = calcularSuma(numeros);
    float promedio = calcularPromedio(numeros);

    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;

    contarParesImpares(numeros);

    return 0;
}
