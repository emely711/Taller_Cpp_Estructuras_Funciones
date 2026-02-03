#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> numeros(10);
    int sumaCuadrados = 0;
    float promedioCuadrados;

    for(int i = 0; i < 10; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
        sumaCuadrados += numeros[i] * numeros[i];  
    }
    promedioCuadrados = sumaCuadrados / 10.0;

    cout << "Cuadrados de los numeros:" << endl;
    for(int i = 0; i < 10; i++){
        cout << "Numero " << numeros[i] << " al cuadrado = " << numeros[i] * numeros[i] << endl;
    }
    cout << "Suma de los cuadrados: " << sumaCuadrados << endl;
    cout << "Promedio de los cuadrados: " << promedioCuadrados << endl;

    return 0;
} 
