#include<iostream>

using namespace std;

int main(){
	
	int num;
	
	cout<<"Ingrese un numero del 10 al 50: ";
	cin>>num;
	
	if(num >= 10 && num <= 50){
		
		cout<<"Valor valido.";
	}else{
		cout<<"Valor invalido, ingrese un valor del ranfo.";
	}
	
	return 0;
}

