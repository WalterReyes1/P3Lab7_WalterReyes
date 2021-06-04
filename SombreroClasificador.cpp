#include "SombreroClasificador.h"

SombreroClasificador::SombreroClasificador() {
}

ClaseHogwarts* SombreroClasificador::clasificar_magos_nuevos(vector<Mago*> _lista,int ano){
	ClaseHogwarts* c = new ClaseHogwarts(ano);
	for(int i = 0; i<_lista.size();i++){
		Mago* m = _lista.at(i);
		if(typeid(*_lista[i])==typeid(MagoSlytherin)){
			MagoSlytherin* s = dynamic_cast<MagoSlytherin*>(_lista[i]);
			c->setMagos_slytherin(s);
		}
		if(typeid(*_lista[i])==typeid(MagoGryffindor)){
		
			MagoGryffindor* g = dynamic_cast<MagoGryffindor*>(_lista[i]);
			c->setMagos_gryffindor(g);
		}
		if(typeid(*_lista[i])==typeid(MagoHufflepuff)){
			MagoHufflepuff* h = dynamic_cast<MagoHufflepuff*>(_lista[i]);
			c->setMagos_hufflepuff(h);
		}
		if(typeid(*_lista[i])==typeid(MagoRavenclaw)){
			
			MagoRavenclaw* r = dynamic_cast<MagoRavenclaw*>(_lista[i]);
			c->setMagos_ravenclaw(r);
		}
			
	}
	
	return c;
}