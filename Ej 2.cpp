#include<iostream>

using namespace std;


int main(){
	
	int numero;
	
	cout<<"Ingrese un numero de un rango de 10 a 50: ";
	cin>>numero;
	
	if(numero < 10 || numero > 50){
		cout<<"ADVERTENCIA, NUMERO FUERA DEL RANGO.";
	}else{
		cout<<"Numero dentro del rango.";
	}
	
	return 0;	
}
