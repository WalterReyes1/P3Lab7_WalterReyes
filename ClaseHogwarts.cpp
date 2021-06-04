#include "ClaseHogwarts.h"

ClaseHogwarts::ClaseHogwarts(int _ano) {
	this->ano=_ano;
}
vector<MagoGryffindor* > ClaseHogwarts::getMagos_gryffindor(){
	return this->magos_gryffindor;
}
vector<MagoHufflepuff* > ClaseHogwarts::getMagos_hufflepuff(){
	return this->magos_hufflepuff;
}
vector<MagoRavenclaw* > ClaseHogwarts::getMagos_ravenclaw(){
	return this->getMagos_ravenclaw();
}
vector<MagoSlytherin* > ClaseHogwarts::getMagos_slytherin(){
	return this->getMagos_slytherin();
}
ClaseHogwarts::getAno(){
	return this->ano;
}
//setters
void ClaseHogwarts::setAno(int a){
	this->ano=a;
}
void ClaseHogwarts::setMagos_gryffindor(MagoGryffindor* mago){
	this->magos_gryffindor.push_back(mago);
}
void ClaseHogwarts::setMagos_hufflepuff(MagoHufflepuff* mago){
	this->magos_hufflepuff.push_back(mago);
}
void ClaseHogwarts::setMagos_ravenclaw(MagoRavenclaw* mago){
	this->magos_ravenclaw.push_back(mago);
}
void ClaseHogwarts::setMagos_slytherin(MagoSlytherin* mago){
	this->magos_slytherin.push_back(mago);
}

//------------------------------------//
void ClaseHogwarts::promedio_habilidades_por_casa(){
	
}
string ClaseHogwarts::toString(){
	return "";
}
