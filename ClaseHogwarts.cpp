#include "ClaseHogwarts.h"

ClaseHogwarts::ClaseHogwarts(int _ano) {
	this->ano=_ano;
}
vector<MagoGryffindor* > ClaseHogwarts::getMagos_gryffindor() {
	return this->magos_gryffindor;
}
vector<MagoHufflepuff* > ClaseHogwarts::getMagos_hufflepuff() {
	return this->magos_hufflepuff;
}
vector<MagoRavenclaw* > ClaseHogwarts::getMagos_ravenclaw() {
	return this->magos_ravenclaw;
}
vector<MagoSlytherin* > ClaseHogwarts::getMagos_slytherin() {
	return this->magos_slytherin;
}
ClaseHogwarts::getAno() {
	return this->ano;
}
//setters
void ClaseHogwarts::setAno(int a) {
	this->ano=a;
}
void ClaseHogwarts::setMagos_gryffindor(MagoGryffindor* mago) {
	this->magos_gryffindor.push_back(mago);
}
void ClaseHogwarts::setMagos_hufflepuff(MagoHufflepuff* mago) {
	this->magos_hufflepuff.push_back(mago);
}
void ClaseHogwarts::setMagos_ravenclaw(MagoRavenclaw* mago) {
	this->magos_ravenclaw.push_back(mago);
}
void ClaseHogwarts::setMagos_slytherin(MagoSlytherin* mago) {
	this->magos_slytherin.push_back(mago);
}

//------------------------------------//
void ClaseHogwarts::promedio_habilidades_por_casa() {
	//Promedio Slitherin.
	double acumA;
	double acumI;
	double acumL;
	double acumV;
	double acumLi;
	double acumP;
	double acumC;
	double acumAt;
	for(int i = 0; i<this->getMagos_slytherin().size(); i++) {
		MagoSlytherin* s = this->getMagos_slytherin().at(i);
		acumA+= s->getAstucia();
		acumI+= s->getInteligencia();
		acumL+=s->getLealtad();
		acumV+=s->getValentia();
		acumLi+=s->getLiderazgo();
	}
	acumA = acumA/this->getMagos_slytherin().size();
	acumI= acumI/this->getMagos_slytherin().size();
	acumL= acumL/this->getMagos_slytherin().size();
	acumV= acumV/this->getMagos_slytherin().size();
	acumLi= acumLi/this->getMagos_slytherin().size();
	cout<<"Slytherin : "<<endl;

	cout<<"Astucia: "<<acumA<<endl;
	cout<<"Inteligencia: "<<acumI<<endl;
	cout<<"Lealtad: "<<acumL<<endl;
	cout<<"Valentia: "<<acumV<<endl;
	cout<<"Liderazgo: "<<acumLi<<endl;
	cout<<"<----------------------------->"<<endl;
	acumA= 0;
	acumI= 0;
	acumL= 0;
	acumV= 0;

	//Gryffindor
	for(int i = 0; i<this->getMagos_gryffindor().size(); i++) {
		MagoGryffindor* s = this->getMagos_gryffindor().at(i);
		acumA+= s->getAstucia();
		acumI+= s->getInteligencia();
		acumL+=s->getLealtad();
		acumV+=s->getValentia();
		acumAt+=s->getAtrevimiento();
	}
	acumA = acumA/this->getMagos_gryffindor().size();
	acumI= acumI/this->getMagos_gryffindor().size();
	acumL= acumL/this->getMagos_gryffindor().size();
	acumV= acumV/this->getMagos_gryffindor().size();
	acumAt= acumAt/this->getMagos_gryffindor().size();
	cout<<"Gryffindor! : "<<endl;

	cout<<"Astucia: "<<acumA<<endl;
	cout<<"Inteligencia: "<<acumI<<endl;
	cout<<"Lealtad: "<<acumL<<endl;
	cout<<"Valentia: "<<acumV<<endl;
	cout<<"Atrevimiento: "<<acumAt<<endl;
	cout<<"<----------------------------->"<<endl;
	acumA= 0;
	acumI= 0;
	acumL= 0;
	acumV= 0;
	//hufflepuff
	for(int i = 0; i<this->getMagos_hufflepuff().size(); i++) {
		MagoHufflepuff* s = this->getMagos_hufflepuff().at(i);
		acumA+= s->getAstucia();
		acumI+= s->getInteligencia();
		acumL+=s->getLealtad();
		acumV+=s->getValentia();
		acumP+=s->getPaciencia();
	}
	acumA = acumA/this->getMagos_hufflepuff().size();
	acumI= acumI/this->getMagos_hufflepuff().size();
	acumL= acumL/this->getMagos_hufflepuff().size();
	acumV= acumV/this->getMagos_hufflepuff().size();
	acumP= acumP/this->getMagos_hufflepuff().size();
	cout<<"Hufflepuff! : "<<endl;

	cout<<"Astucia: "<<acumA<<endl;
	cout<<"Inteligencia: "<<acumI<<endl;
	cout<<"Lealtad: "<<acumL<<endl;
	cout<<"Valentia: "<<acumV<<endl;
	cout<<"Paciencia: "<<acumP<<endl;
	cout<<"<----------------------------->"<<endl;
	acumA= 0;
	acumI= 0;
	acumL= 0;
	acumV= 0;
	//RavenClaw!
	for(int i = 0; i<this->getMagos_ravenclaw().size(); i++) {
		MagoRavenclaw* s = this->getMagos_ravenclaw().at(i);
		acumA+= s->getAstucia();
		acumI+= s->getInteligencia();
		acumL+=s->getLealtad();
		acumV+=s->getValentia();
		acumC+=s->getCreatividad();
	}
	acumA = acumA/this->getMagos_ravenclaw().size();
	acumI= acumI/this->getMagos_ravenclaw().size();
	acumL= acumL/this->getMagos_ravenclaw().size();
	acumV= acumV/this->getMagos_ravenclaw().size();
	acumC= acumC/this->getMagos_ravenclaw().size();
	cout<<"RavenClaw! : "<<endl;

	cout<<"Astucia: "<<acumA<<endl;
	cout<<"Inteligencia: "<<acumI<<endl;
	cout<<"Lealtad: "<<acumL<<endl;
	cout<<"Valentia: "<<acumV<<endl;
	cout<<"Creatividad: "<<acumC<<endl;
	cout<<"<----------------------------->"<<endl;
	acumA= 0;
	acumI= 0;
	acumL= 0;
	acumV= 0;
}
string ClaseHogwarts::toString() {
	return "";
}
ClaseHogwarts::~ClaseHogwarts() {
	for(int i = 0; i<this->getMagos_ravenclaw().size(); i++) {
		if(this->getMagos_ravenclaw().at(i)!=NULL){
			delete this->getMagos_ravenclaw().at(i);
			this->getMagos_ravenclaw().at(i)= NULL;
		}
	}
	for(int i = 0; i<this->getMagos_gryffindor().size(); i++) {
		if(this->getMagos_gryffindor().at(i)!=NULL){
			delete this->getMagos_gryffindor().at(i);
			this->getMagos_gryffindor().at(i)= NULL;
		}
	}
	for(int i = 0; i<this->getMagos_slytherin().size(); i++) {
		if(this->getMagos_slytherin().at(i)!=NULL){
			delete this->getMagos_slytherin().at(i);
			this->getMagos_slytherin().at(i)= NULL;
		}
	}
	for(int i = 0; i<this->getMagos_hufflepuff().size(); i++) {
		if(this->getMagos_hufflepuff().at(i)!=NULL){
			delete this->getMagos_hufflepuff().at(i);
			this->getMagos_hufflepuff().at(i)= NULL;
		}
	}
}
