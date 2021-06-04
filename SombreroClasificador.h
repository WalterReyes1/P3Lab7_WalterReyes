#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "Mago.h"
#include "ClaseHogwarts.h"
class SombreroClasificador {
	public:
		SombreroClasificador();
	ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*>,int);
	protected:
};

#endif