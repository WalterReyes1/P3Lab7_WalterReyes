#ifndef SOMBREROCLASIFICADOR_H
#define SOMBREROCLASIFICADOR_H
#include "Mago.h"
#include "ClaseHogwarts.h"
#include <iostream>
using namespace std;

class SombreroClasificador {
	public:
		SombreroClasificador();
	ClaseHogwarts* clasificar_magos_nuevos(vector<Mago*>,int);
	protected:
};

#endif