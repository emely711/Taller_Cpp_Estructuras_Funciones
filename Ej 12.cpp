#include <iostream>

using namespace std;

int main(){
	
	int numeros[8];
	int mayor;
	int menor;
	
	cout<<"== INGRESO DE 8 NUMEROS =="<<endl;
	for(int i=0;i<8;i++){
		cout<<"Numero "<<i<<": ";
		cin>>numeros[i];

	}
	
	mayor=numeros[0];
	menor=numeros[0];
	
	for(int i=1;i<8;i++){
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}if(numeros[i]<menor){
			menor=numeros[i];
		}		
	}
	
	int diferencia = mayor - menor;
	
	cout<<"Numero mayor: "<<mayor<<endl;
	cout<<"Numero menor: "<<menor<<endl;
	cout<<"Diferencia: "<<diferencia<<endl;
	
	return 0;
}


