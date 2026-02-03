#include<iostream>

using namespace std;

int main(){
	int numeros [10];
	int suma = 0;
	int posit = 0;
	int negat = 0;
	
	cout<<"== INGRESO DE 10 NUMEROS =="<<endl;
	for(int i=0;i<10;i++){
		cout<<"Numero "<<i<<": ";
		cin>>numeros[i];
		
		suma+=numeros[i];
		
		if(numeros [i] > 0){
			posit ++;
		}else{
			negat ++;
		}
	}
	int porcentajeP = posit * 10;
	int porcentajeN = negat * 10;
	int promedio = suma / 10;
	
	cout<<"La Suma: "<<suma<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Porcentaje Negativos: "<<porcentajeN<<endl;
	cout<<"Porcentaje Positivos: "<<porcentajeP<<endl;
	
	return 0;
}


