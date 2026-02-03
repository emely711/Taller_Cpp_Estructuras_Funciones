#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numeros(12);
    int sumaPositivos = 0;
    int sumaNegativos = 0;
    int absolutoTotal = 0;

    for(int i = 0; i < 12; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> numeros[i];
        if(numeros[i] > 0){
		    sumaPositivos += numeros[i];
		    absolutoTotal += numeros[i];
		}
		if(numeros[i] < 0){
		    sumaNegativos += numeros[i];
		    absolutoTotal += -numeros[i]; 
		}
    } 
    cout << "\nSuma de positivos: " << sumaPositivos << endl;
    cout << "Suma de negativos: " << sumaNegativos << endl;
    cout << "Valor absoluto total acumulado: " << absolutoTotal << endl;

    return 0;
}
