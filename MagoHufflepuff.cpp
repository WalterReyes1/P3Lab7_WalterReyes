#include "MagoHufflepuff.h"

MagoHufflepuff::MagoHufflepuff() {
	
	this->astucia=rand()%101;
	this->inteligencia = rand()%101;
	this->lealtad = (rand()%21)+80;
	this->valentia = rand()%101;
	this->paciencia=(rand()%21)+80;
}
int MagoHufflepuff::getPaciencia() {
	return this->paciencia;
}

string MagoHufflepuff::toString() {
	string a = to_string(this->astucia);
	string i = to_string(this->inteligencia);
	string l = to_string(this->lealtad);
	string v = to_string(this->valentia);
	string p= to_string(this->paciencia);
	return "Astucia: "+a+", Inteligencia: "+i+", Lealtad: "+l+
	       ", Valentia: "+v+", Paciencia: "+p+"\n";
}