#include "Mago.h"

Mago::Mago() {
}
Mago::Mago(int _astucia, int _inteligencia, int _lealtad, int _valentia){
	this->astucia=_astucia;
	this->inteligencia=_inteligencia;
	this->lealtad=_lealtad;
	this->valentia=_valentia;
}
int Mago::getAstucia(){
	return this->astucia;
}
int Mago::getInteligencia(){
	return this->inteligencia;
}
int Mago::getLealtad(){
	return this->lealtad;
}
int Mago::getValentia(){
	return this->valentia;
}
string Mago::toString(){
	return "";
}