#include "MagoGryffindor.h"

MagoGryffindor::MagoGryffindor() {

	this->astucia=rand()%101;
	this->inteligencia = rand()%101;
	this->lealtad = rand()%101;
	this->valentia = (rand()%21)+80;
	this->atrevimiento=(rand()%21)+80;
}
int MagoGryffindor::getAtrevimiento() {
	return this->atrevimiento;
}
string MagoGryffindor::toString() {
	string a = to_string(this->astucia);
	string i = to_string(this->inteligencia);
	string l = to_string(this->lealtad);
	string v = to_string(this->valentia);
	string at= to_string(this->atrevimiento);
	return "Astucia: "+a+", Inteligencia: "+i+", Lealtad: "+l+
	       ", Valentia: "+v+", Atrevimiento: "+at+"\n";

}