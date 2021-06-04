#ifndef MAGOHUFFLEPUFF_H
#define MAGOHUFFLEPUFF_H
#include<stdlib.h>
#include<time.h>
#include "Mago.h"
using namespace std;
class MagoHufflepuff : public Mago {
	private: 
		int paciencia;
	public:
		MagoHufflepuff();
		int getPaciencia();
		string toString();
	protected:
};

#endif