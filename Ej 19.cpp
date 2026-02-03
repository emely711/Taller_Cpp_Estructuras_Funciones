#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	
	vector<int> edades(10);
	
	int promedio;
	int suma = 0;
	int mayores = 0;
	int menores = 0;
	
	for(int i=0;i<10;i++){
		cout<<"Edad "<<i+1<<": ";
		cin>>edades[i];
		suma+=edades[i];
		
		promedio=suma/10;
		
		if(edades[i]>promedio){
			mayores ++;
		}
		if(edades[i]<promedio){
			menores ++;
		}
	}
	
	cout<<"Promedio de edades: "<<promedio<<endl;
	cout<<"Mayores al prmedio: "<<mayores<<endl;
	cout<<"Menores al promedio: "<<menores<<endl;
	
	
	return 0;
}

