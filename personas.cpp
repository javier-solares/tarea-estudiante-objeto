#include <iostream>
using namespace std;

class Personas{
	protected : string nombres, apellidos, grado, seccion;
				
				
	protected :
		Personas(string nom, string ape, string gra, string secc) {
			nombres= nom;
			apellidos= ape;
			grado= gra;
			seccion= secc;
			
		}
	void agregar();
};
