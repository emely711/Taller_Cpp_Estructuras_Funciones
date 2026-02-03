#include <iostream>
using namespace std;

int main() {
    float notas[10];
    float suma = 0;
    float promedio;
    float notaMax = 0;
    float notaMin = 100; 
    int aprobados = 0;
    int reprobados = 0;

    cout << "Ingrese 10 notas finales:" << endl;

    for(int i = 0; i < 10; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];

        suma += notas[i];

        if(notas[i] > notaMax){
			
		 notaMax = notas[i];
		}
        if(notas[i] < notaMin){
			 notaMin = notas[i];
        }
       
        if(notas[i] >= 7)  
            aprobados++;
        else
            reprobados++;
    }
    
    promedio = suma/10;

    float porcAprobados = (aprobados * 100.0) / 10;
    float porcReprobados = (reprobados * 100.0) / 10;

    cout << "==== RESUMEN DE RESULTADOS ====" << endl;
    cout << "Promedio general: " << promedio << endl;
    cout << "Nota más alta: " << notaMax << endl;
    cout << "Nota más baja: " << notaMin << endl;
    cout << "Cantidad de aprobados: " << aprobados << " (" << porcAprobados << "%)" << endl;
    cout << "Cantidad de reprobados: " << reprobados << " (" << porcReprobados << "%)" << endl;

    return 0;
}
