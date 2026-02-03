#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	vector<double> precios(10);
	double iva = 0;
	double subtotal = 0;
	double total = 0;
	
	for(int i=0;i<10;i++){
		cout<<"Precio "<<i+1<<": ";
		cin>>precios[i];
		
		subtotal += precios[i];
	}
	iva = subtotal * 0.12;
	total = subtotal + iva;
	
	cout<<"Subtotal: "<<subtotal<<endl;
	cout<<"Iva (12%): "<<iva<<endl;
	cout<<"Total: "<<total<<endl;
	return 0;
}

