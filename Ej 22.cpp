#include <iostream>
using namespace std;

int main() {
    int numeros[15];
    int mult3 = 0, mult5 = 0, multAmbos = 0;

    cout << "Ingrese 15 valores:" << endl;
    for(int i = 0; i < 15; i++) {
        cout << "Numero " << i+1 << ": ";
        cin >> numeros[i];

        if(numeros[i] % 3 == 0 && numeros[i] % 5 == 0)
            multAmbos++;
        else if(numeros[i] % 3 == 0)
            mult3++;
        else if(numeros[i] % 5 == 0)
            mult5++;
    }

    cout << "Resultados:" << endl;
    cout << "Multiplos de 3: " << mult3 << endl;
    cout << "Multiplos de 5: " << mult5 << endl;
    cout << "Multiplos de 3 y 5: " << multAmbos << endl;

    return 0;
}
