#include <iostream>

using namespace std; 

int main(){
	
	int multiplo = 0, nmultiplo = 0;
	
	for(int i=1;i<=50;i++){
		if (i%3 == 0){
			multiplo ++;
		}else{
			nmultiplo ++;
		}
	}
	
	cout<<"Multiplos de 3: "<<multiplo<<endl;
	cout<<"No multiplos: "<<nmultiplo<<endl;
	
	return 0;
}  
