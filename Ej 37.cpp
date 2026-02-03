#include<iostream>
#include<vector>

using namespace std;

void llenarVector(vector<int> &numeros){
	int i=0;
	while (i<numeros.size()){
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>numeros[i];
		i++;
	}
}

void calculo(vector<int> &numeros){
	int i=0;
	int suma=0;
	int mayor=numeros[0];
	int menor=numeros[0];
	float promedio;
	
	while (i < numeros.size()) {
	        suma += numeros[i];
	
	        if (numeros[i] > mayor)
	            mayor = numeros[i];
	
	        if (numeros[i] < menor)
	            menor = numeros[i];
	
	        i++;
	    }
	    promedio = (float)suma / numeros.size();
	
	    cout << "\n=== RESULTADOS ===" << endl;
	    cout << "Suma: " << suma << endl;
	    cout << "Promedio: " << promedio << endl;
	    cout << "Mayor: " << mayor << endl;
	    cout << "Menor: " << menor << endl;
}


int main() {
    int n;

    cout << "Cantidad de numeros: ";
    cin >> n;
    vector<int> numeros(n);

    llenarVector(numeros);
    calculo(numeros);
    return 0;
}
