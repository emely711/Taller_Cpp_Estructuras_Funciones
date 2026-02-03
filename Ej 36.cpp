#include<iostream>
#include<vector>
#include<fstream>

using namespace std;

struct Estudiante{
    string nombre;
    float nota1;
    float nota2;
    float nota3;
};

int main(){

    vector<Estudiante> estudiantes;
    Estudiante estudiante;
    int cantidad;
    string buscar;

    cout<<"Cuantos estudiantes desea ingresar: ";
    cin>>cantidad;

    for(int i=0;i<cantidad;i++){
        cout<<"\nEstudiante "<<i+1<<endl;
        cout<<"Nombre: ";
        cin>>estudiante.nombre;
        cout<<"Nota1: ";
        cin>>estudiante.nota1;
        cout<<"Nota2: ";
        cin>>estudiante.nota2;
        cout<<"Nota3: ";
        cin>>estudiante.nota3;

        estudiantes.push_back(estudiante);
    }

    ofstream archivo("estudiantes.txt");
    for(int i=0;i<estudiantes.size();i++){
        archivo<<estudiantes[i].nombre<<" "
               <<estudiantes[i].nota1<<" "
               <<estudiantes[i].nota2<<" "
               <<estudiantes[i].nota3<<endl;
    }
    archivo.close();
    estudiantes.clear();
    ifstream leer("estudiantes.txt");
    while(leer>>estudiante.nombre>>estudiante.nota1
               >>estudiante.nota2>>estudiante.nota3){
        estudiantes.push_back(estudiante);
    }
    leer.close();
    cout<<"\nIngrese el nombre a buscar: ";
    cin>>buscar;

    bool encontrado=false;

    for(int i=0;i<estudiantes.size();i++){
        if(estudiantes[i].nombre==buscar){

            float promedio=(estudiantes[i].nota1+
                estudiantes[i].nota2+
                estudiantes[i].nota3)/3;

            cout<<"\nNota1:"<<estudiantes[i].nota1<<endl;
            cout<<"Nota2:"<<estudiantes[i].nota2<<endl;
            cout<<"Nota3:"<<estudiantes[i].nota3<<endl;
            cout<<"Promedio:"<<promedio<<endl;

            if(promedio>=7)
                cout<<"Estado:APRUEBA"<<endl;
            else
                cout<<"Estado:REPRUEBA"<<endl;
            encontrado=true;
            break;
        }
    } 
    if(!encontrado){
        cout<<"Estudiante no registrado"<<endl;
    }
    return 0;
}
