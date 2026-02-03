#include<iostream>
using namespace std;
int main(){
	
	int matriz[4][4];
	int positivos = 0;
	int negativos = 0;
	int cero = 0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4;j++){
			cout<<"Matriz ["<<i<<"]"<<"["<<j<<"]: ";
			cin>>matriz[i][j];
			
			if(matriz[i][j]>0){
				positivos ++;
			}else if(matriz[i][j]<0){
				negativos ++;
			}else{
				cero ++;
			}
		}
	}
	cout<<"Positivos: "<<positivos<<endl;
	cout<<"Negativos: "<<negativos<<endl;
	cout<<"Igual a cero: "<<cero<<endl;
	
	return 0;
}

