#include <iostream>

using namespace std;

int main(){
	
	int num;
	int rango = 0;
	int fuera = 0;
	
	
	cout<<"== INGRESE 15 NUMEROS ==="<<endl;
	for(int i=1;i<=15;i++){
		cout<<"Numero "<<i<<": ";
		cin>>num;
		
		if(num >=20 && num <= 80){
			rango ++;
		}else{
			fuera ++;
		}
	}
	
	cout<<"Total de  Numeros dentro del rango: "<<rango<<endl;
	cout<<"Total de  Numeros fuera del rango: "<<fuera<<endl;
	
	return 0;
}
