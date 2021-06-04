#ifndef MAGORAVENCLAW_H
#define MAGORAVENCLAW_H
#include<stdlib.h>
#include<time.h>
#include "Mago.h"

class MagoRavenclaw : public Mago
{
	private:
		int creatividad;
	public:
		MagoRavenclaw();
		int getCreatividad();
		string toString();
	protected:
};

#endif