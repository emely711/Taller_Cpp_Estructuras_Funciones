#include <iostream>
using namespace std;

int main() {
    int opcion;
    int num1 = 0, num2 = 0;
    int suma = 0, resta = 0;

    do {
        cout << "== MENU ==" << endl;
        cout << "1. Ingreso de 2 numeros" << endl;
        cout << "2. Mostrar la suma y resta" << endl;
        cout << "3. Mostrar el numero mayor" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                break;
            case 2:
                suma = num1 + num2;
                resta = num1 - num2;
                cout << "Suma: " << suma << endl;
                cout << "Resta: " << resta << endl;
                break;
            case 3:
                if(num1 == num2) {
                    cout << "Ambos numeros son iguales: " << num1 << endl;
                } else if(num1 > num2) {
                    cout << "Mayor: " << num1 << endl;
                } else {
                    cout << "Mayor: " << num2 << endl;
                }
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
                break;
        }

        cout << endl; 

    } while(opcion != 4);

    return 0;
}
