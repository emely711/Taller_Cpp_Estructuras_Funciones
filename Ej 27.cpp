#include<iostream>

using namespace std;

int main(){
	
	int num;
	int opcion;
	
	do{
		cout<<"=== MENU ==="<<endl;
		cout<<"1. Ingresar un numero."<<endl;
		cout<<"2. Verificar el rango."<<endl;
		cout<<"3. Verificar si es par o impar"<<endl;
		cout<<"4. Salir."<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch (opcion) {
			case 1:
				cout<<"Ingrese un numero: ";
				cin>>num;
				
				break;
			case 2:
				
				if(num > 1 && num < 100){
					cout<<"Esta dentro del rango."<<endl;
				}else{
					cout<<"Fuera del rango"<<endl;
				}
				break;
			case 3:
				if(num % 2 == 0){
					cout<<"El numero es par."<<endl;
				}else{
					cout<<"El numero es impar"<<endl;
				}
				break;
			case 4:
				cout<<"Saliendoo.."<<endl;
				break;
			default:
				cout<<"Opcion invalida."<<endl;
				break;
		}	
	}while(opcion !=4);
	
	return 0;
}



