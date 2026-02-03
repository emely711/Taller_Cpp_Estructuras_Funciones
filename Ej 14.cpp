#include<iostream>

using namespace std;

int main(){
	
	int calificaciones[10];
	int aprobados = 0;
	int reprobados = 0;
	int suma = 0;
	
	for(int i=1;i<11;i++){
		cout<<"Nota "<<i<<": ";
		cin>>calificaciones[i];
		
		if (calificaciones[i]>=7){
			aprobados ++;
		}else if(calificaciones[i]<=7){
			reprobados ++;	
		}
		
		suma+=i;
	}
	
	int promedio = suma/10;
	cout<<"Promedio Gnereal: "<<promedio<<endl;
	cout<<"Estudiantes Aprobados: "<<aprobados<<endl;
	cout<<"Estudiantes Reprobados: "<<reprobados<<endl;
	
	return 0;
}
