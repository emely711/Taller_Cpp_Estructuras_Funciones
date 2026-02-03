#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros(8);
    int maximo, minimo;
    int rango;

    for(int i = 0; i < 8; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];

        if(i == 0){ 
            maximo = numeros[i];
            minimo = numeros[i];
        }

        if(numeros[i] > maximo){
            maximo = numeros[i];
        }

        if(numeros[i] < minimo){
            minimo = numeros[i];
        }
    }

    rango = maximo - minimo;

    cout << "\nValor Maximo: " << maximo << endl;
    cout << "Valor Minimo: " << minimo << endl;
    cout << "Rango: " << rango << endl;

    return 0;
}
