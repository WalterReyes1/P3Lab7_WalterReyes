#include "MagoRavenclaw.h"

MagoRavenclaw::MagoRavenclaw() {
	srand(time(NULL));
	this->astucia=rand()%101;
	this->inteligencia = (rand()%21)+80;
	this->lealtad = rand()%101;
	this->valentia = rand()%101;
	this->creatividad=(rand()%21)+80;
}
int MagoRavenclaw::getCreatividad() {
	return this->creatividad;
}

string MagoRavenclaw::toString() {
	string a = to_string(this->astucia);
	string i = to_string(this->inteligencia);
	string l = to_string(this->lealtad);
	string v = to_string(this->valentia);
	string c= to_string(this->creatividad);
	return "Astucia: "+a+", Inteligencia: "+i+", Lealtad: "+l+
	       ", Valentia: "+v+", Creatividad: "+c+"\n";
}