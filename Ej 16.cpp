#include<iostream>
#include<vector>


using namespace std;

int main(){
	
	vector<int> numeros(10);
	int suma = 0;
	int promedio;
	int encima = 0;
	
	for(int i=0;i<10;i++){
		cout<<"Numero "<<i +1<<": ";
		cin>>numeros[i];
		
		suma+=numeros[i];
		
	}
	promedio= suma/10;
	
	for(int i=0;i<10;i++){
		if(numeros[i]>promedio){
			encima ++;
		}
	}
	cout<<"Suma total: "<<suma<<endl;
	cout<<"Promedio: "<<promedio<<endl;
	cout<<"Por encima: "<<encima<<endl;
	
	return 0;
}
