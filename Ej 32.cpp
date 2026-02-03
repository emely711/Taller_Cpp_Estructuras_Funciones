#include<iostream>
#include<vector>

using namespace std;

struct Cliente{
	string nombre;
	int edad;
};

int main(){
	vector<Cliente> clientes;
	int num;
	
	Cliente c;
	cout<<"Numero de clientes: ";
	cin>>num;
	
	for(int i=0;i<num;i++){
		cout<<"Nombre: ";
		cin.ignore();
		getline(cin,c.nombre);
		cout<<"Edad: ";
		cin>>c.edad;
		
		clientes.push_back(c);
	}
	cout<<"=== CLIENTES ==="<<endl;
	for(int i=0;i<int(clientes.size());i++){
		
		cout<<"Nombre: "<<clientes[i].nombre<<endl;
		cout<<"Edad: "<<clientes[i].edad<<endl;
	}
	
	return 0;
}
