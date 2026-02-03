#include<iostream>
#include<vector>

using namespace std;

void llenarArreglo(float ventas[], int n){
	for (int i = 0; i < n; i++) {
	    cout << "Ingrese venta " << i + 1 << ": ";
	    cin >> ventas[i];
}
}


void calcularDatos(float ventas[], int n){
	float total = 0, promedio;
	int mayores = 0;
	
	for(int i=0;i<n;i++){
		total += ventas[i];
	}	

	promedio = total / n;
		
		for(int i=0;i<n;i++){
			if(ventas[i]>promedio){
				mayores ++;
			}
		}
		
		cout << "=== RESULTADOS ===" << endl;
		cout << "Total de ventas: " << total << endl;
		cout << "Promedio de ventas: " << promedio << endl;
		cout << "Ventas mayores al promedio: " << mayores << endl;		
}	
	

int main() {
    int n;

    cout << "Cantidad de ventas: ";
    cin >> n;

    float ventas[n];

    llenarArreglo(ventas, n);
    calcularDatos(ventas, n);

    return 0;
}
