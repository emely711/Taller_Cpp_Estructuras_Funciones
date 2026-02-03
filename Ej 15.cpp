#include<iostream>	
using namespace std;

int main(){
	
	int arreglo[15];
	int positivos = 0;
	int negativos = 0;
	int suma = 0;
	int suma1 = 0;
	
	cout<<"== 15 NUMEROS == "<<endl;
	for(int i = 0; i < 15; i++){
		cout<<"Numero "<<i+1<<": ";
		cin>>arreglo[i]; 
		
		if(arreglo[i] > 0){
			suma += arreglo[i];
			positivos++;
		}else if(arreglo[i] < 0){
			suma1 += arreglo[i];
			negativos++;
		}
	}
	
	if(positivos > 0){
		int promedio = suma / positivos;
		cout<<"Promedio positivos: "<<promedio<<endl;
	}else{
		cout<<"No hay numeros positivos"<<endl;
	}
	
	if(negativos > 0){
		int promedio1 = suma1 / negativos;
		cout<<"Promedio negativos: "<<promedio1<<endl;
	}else{
		cout<<"No hay numeros negativos"<<endl;
	}

	return 0;
}
