#ifndef MAGOSLYTHERIN_H
#define MAGOSLYTHERIN_H
#include<stdlib.h>
#include<time.h>
#include "Mago.h"

class MagoSlytherin : public Mago {
	private: 
		int liderazgo;
	public:
		MagoSlytherin();
		int getLiderazgo();
		string toString();
};
#endif