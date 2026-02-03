#include <iostream>

using namespace std;

int main(){
	
	int num;
	int suma=0;
	
	cout<<"Ingrese un numero positivo: ";
	cin>>num;

	for(int i=0; i<=10; i++){
		cout<<i<<" x "<<num<<" = "<<i*num<<endl;
		
		suma += i*num;
		
	}
	
	cout<<"La suma de los resultados es: "<<suma<<endl;
} 
