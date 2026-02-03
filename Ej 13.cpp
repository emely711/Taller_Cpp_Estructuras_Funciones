#include<iostream>

using namespace std;

int main(){
	
	int numeros[12];
	int suma = 0;
	int suma1 =0;
	
	cout<<"== INGRESO DE 12 NUMEROS =="<<endl;
	for(int i=0;i<12;i++){
		cout<<"Numero "<<i<<": ";
		cin>>numeros[i];
		if(numeros[i] % 2 == 0){
			suma+=numeros[i];
		}else{
			suma1+=numeros[i];
		}
	}
	cout<<"Suma de Pares: "<<suma<<endl;
	cout<<"Suma de Impares: "<<suma1<<endl;
	
	if(suma > suma1){
		cout<<"La mayor suma es de los pares"<<endl;
		
	}else{
		cout<<"La mayor suma es de los impares"<<endl;
	}
	
	return 0;
}
