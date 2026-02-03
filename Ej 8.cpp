#include <iostream>

using namespace std;

int main(){
	
	int positvos = 0;
	int negativos = 0;
	int cero = 0;
	int num;
	
	cout<<"== Ingrese 10 numeros =="<<endl;
	for(int i=1;i<=10;i++){
		cout<<"Numero "<<i<<": ";
		cin>>num;
		
		if(num > 0){
			positvos ++;
		}else if(num < 0){
			negativos ++;
		}else{
			cero ++;	
		}
		
	}
	cout<<"Numeros Positivos: "<<positvos<<endl;
	cout<<"Numeros Negativos: "<<negativos<<endl;
	cout<<"Igual a ceros: "<<cero<<endl;
	
	return 0;
}
