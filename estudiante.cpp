#include "Personas.cpp"
#include<iostream>
using namespace std;
class Estudiante : Personas{
	private : int carnet;
	
	public : 
	Estudiante(string nom,string ape,string gra,string secc, int a) : Personas(nom,ape,gra,secc){
		carnet = a;
	}
	//set
	void setCarnet (int a) { carnet=a;}
	void setNombres (string nom) {nombres=nom;}
	void setApellidos (string ape ) {apellidos=ape;}
	void setGrado (string gra) {grado=gra;}
	void setSeccion (string secc ) {seccion=secc;}
	
	//get (mostrar)
	int getCarnet(){return carnet;}
	string getNombres() {return nombres;}
	string getApellidos(){return apellidos;}
	string getGrado(){return grado;}
	string getSeccion(){return seccion;}
	
	//get 
	void mostrar(){
		system("cls");
		cout<<"------------------------------------------------Datos Del Estudiante------------------------------------------------------------------"<<endl;
		cout<<"Carnet: "<<carnet<<",   "<<"Nombre: "<<nombres<<",   "<<"Apellido: "<<apellidos<<",   "<<"Grado: "<<grado<<",   "<<"Seccion: "<<seccion<<endl;
	}
};
