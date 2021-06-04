#ifndef CLASEHOGWARTS_H
#define CLASEHOGWARTS_H
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include <vector>
#include<iostream>
using namespace std;
class ClaseHogwarts {
	public:
		ClaseHogwarts(int);
		//getters
		vector<MagoSlytherin*>getMagos_slytherin();
		vector<MagoHufflepuff*>getMagos_hufflepuff();
		vector<MagoGryffindor*>getMagos_gryffindor();
		vector<MagoRavenclaw*>getMagos_ravenclaw();
		int getAno();
		//setters
		void setMagos_slytherin(MagoSlytherin*);
		void setMagos_hufflepuff(MagoHufflepuff*);
		void setMagos_gryffindor(MagoGryffindor*);
		void setMagos_ravenclaw (MagoRavenclaw*);
		void setAno(int);
		string toString();
		void promedio_habilidades_por_casa();
		~ClaseHogwarts();
	protected:
		int ano;
		vector<MagoSlytherin*>magos_slytherin;
		vector<MagoHufflepuff*>magos_hufflepuff;
		vector<MagoGryffindor*>magos_gryffindor;
		vector<MagoRavenclaw*>magos_ravenclaw;
		
		
		
};

#endif