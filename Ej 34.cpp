#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

struct Cliente{
	string nombre;
	int edad;
};

int main(){
	
	vector<Cliente> clientes;
	Cliente c;
	string buscar;
	int num;
	int encontrado = 0;
	
	cout<<"Cuantos clienets: ";
	cin>>num;
	
	cout<<"======================="<<endl;
	for(int i=0;i<num;i++){
		cout<<"Nombre: ";
		cin>>c.nombre;
		cout<<"Edad: ";
		cin>>c.edad;
		
		clientes.push_back(c);
	}
	
	fstream archivo("clientes.txt");
	for(int i=0;i<clientes.size();i++){
		archivo<<clientes[i].nombre<<" "<<clientes[i].edad<<endl;
	}
	archivo.close();
	
	cout<<"Ingrese el nombre a buscar: ";
	cin>>buscar;
	
	cout<<endl;
	
	cout<<"==== CLIENTE ======"<<endl;
	
	for(int i=0;i<clientes.size();i++){
		if(clientes[i].nombre==buscar){
			cout<<"Nombre: "<<clientes[i].nombre<<endl;
			cout<<"Edad: "<<clientes[i].edad<<endl;
			
			encontrado = 1;
			
		}
	}
	
	if(encontrado==0){
		cout<<"No se encontro"<<endl;
	}
	
	return 0;
}
