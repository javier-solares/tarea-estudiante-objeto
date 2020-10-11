#include "Estudiante.cpp"
#include <iostream>
//horacio kevin javier osorio solares 
using namespace std;

int main() {
system("color 1f");
	string nombres, apellidos, grado, seccion;
	int carnet;
	string modificar="";
	
	cout<<"Ingrese Carnet: ";
 	cin>>carnet;
 	cout<<"Ingrese Nombre: ";
 	cin>>nombres;
 	cout<<"Ingrese Apellido: ";
 	cin>> apellidos;
	cout<<"Ingrese Grado: ";
	cin>>grado;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;
	//instansear el objeto
	system("cls");
	Estudiante obj= Estudiante(nombres,apellidos,grado,seccion,carnet);
	obj.mostrar();
	cout<<"\n"<<endl;
	
	cout<<"Desea modificar los datos ingresados (s)(n): ";
	cin>>modificar;
		if(modificar=="s") {
		system("cls");
		 // modificar atributos
 		cout<<"-------modificar-------"<<endl;
  		cout<<"Modificar Carnet:";
 		cin>>carnet;
		obj.setCarnet(carnet);
 		cout<<"Modificar Nombre:";
 		cin>>nombres;
		obj.setNombres(nombres);
		cout<<"Modificar apellido:";
		cin>>apellidos;
		obj.setApellidos(apellidos);
		cout<<"Modificar Grado: ";
		cin>>grado;
		obj.setGrado(grado);
		cout<<"Modificar Seccion: ";
		cin>>seccion;
		obj.setSeccion(seccion);
		system("cls");
		obj.mostrar(); 
		
		} 	else {
			exit(1);
			}
	
}
