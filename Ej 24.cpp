#include<iostream>

using namespace std;

int main(){
	
	float arreglo[10];
	float promedio;
	float suma = 0;
	float encima = 0;
	float debajo = 0;
	
	for(int i=0;i<10;i++){
		cout<<"Sueldo "<<i+1<<": ";
		cin>>arreglo[i];
		
		suma += arreglo[i];
	}
	
	promedio = suma/10;
	
	for(int i=0;i<10;i++){
		if(arreglo[i]>promedio){
			encima ++;
		}
		if(arreglo[i]<promedio){
			debajo ++;
		}
	}
	
	cout<<"Sueldo Promedio: "<<promedio<<endl;
	cout<<"Sueldos por encima: "<<encima<<endl;
	cout<<"Sueldos por debajo: "<<debajo<<endl;
	
	return 0;
} 
