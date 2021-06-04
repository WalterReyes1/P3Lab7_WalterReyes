#ifndef MAGOGRYFFINDOR_H
#define MAGOGRYFFINDOR_H
#include <stdlib.h>
#include <time.h>
#include "Mago.h"

class MagoGryffindor : public Mago {
	private: 
		int atrevimiento;
	public:
		MagoGryffindor();
		int getAtrevimiento();
		string toString();
	protected:
};

#endif