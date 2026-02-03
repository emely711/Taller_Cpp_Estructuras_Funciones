#include <iostream>
using namespace std;

int main() {
    int opcion;
    int numeros[10];
    int suma = 0;

    do {
        cout << "===== MENU =====" << endl;
        cout << "1. Ingresar 10 numeros en un arreglo" << endl;
        cout << "2. Mostrar el promedio" << endl;
        cout << "3. Mostrar el mayor y el menor" << endl;
        cout << "4. Contar numeros positivos y negativos" << endl;
        cout << "5. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                suma = 0;
                for(int i = 0; i < 10; i++) {
                    cout << "Numero " << i+1 << ": ";
                    cin >> numeros[i];
                    suma += numeros[i];
                }
                break;
            case 2: {
                float promedio = suma / 10.0;
                cout << "Promedio: " << promedio << endl;
                break;
            }
            case 3: {
                int mayor = numeros[0];
                int menor = numeros[0];

                for(int i = 1; i < 10; i++) {
                    if(numeros[i] > mayor)
                        mayor = numeros[i];
                    if(numeros[i] < menor)
                        menor = numeros[i];
                }

                cout << "Mayor: " << mayor << endl;
                cout << "Menor: " << menor << endl;
                break;
            }
            case 4: {
                int positivos = 0;
                int negativos = 0;

                for(int i = 0; i < 10; i++) {
                    if(numeros[i] > 0)
                        positivos++;
                    else if(numeros[i] < 0)
                        negativos++;
                }
                cout << "Positivos: " << positivos << endl;
                cout << "Negativos: " << negativos << endl;
                break;
            }
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }
        cout << endl;

    } while(opcion != 5);

    return 0;
}
