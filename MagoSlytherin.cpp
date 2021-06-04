#include "MagoSlytherin.h"

MagoSlytherin::MagoSlytherin(){
	srand(time(NULL));
	this->astucia=(rand()%21)+80;
	this->inteligencia = rand()%101;
	this->lealtad = rand()%101;
	this->valentia = rand()%101;
	this->liderazgo=(rand()%21)+80;
}
int MagoSlytherin::getLiderazgo(){
	return this->liderazgo;
}
string MagoSlytherin::toString(){
	string a = to_string(this->astucia);
	string i = to_string(this->inteligencia);
	string l = to_string(this->lealtad);
	string v = to_string(this->valentia);
	string li= to_string(this->liderazgo);
	return "Astucia: "+a+", Inteligencia: "+i+", Lealtad: "+l+
	", Valentia: "+v+", Liderazgo: "+li+"\n";
}