#include <iostream>

using namespace std;

int main(){
	
	int suma = 0;
	int suma1 = 0;
	
	
	for(int i=1;i<=100;i++){
		cout<<i<<endl;
		
		if(i % 2 == 0){
			suma +=i;
		}else{
			suma1 +=i;
		}
	}
	
	cout<<"La suma de los pares: "<<suma<<endl;
	cout<<"La suma de los Impares: "<<suma1<<endl;
	
	return 0;
}


