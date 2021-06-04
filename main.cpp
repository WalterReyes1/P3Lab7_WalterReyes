#include <iostream>
#include "Mago.h"
#include "ClaseHogwarts.h"
#include "SombreroClasificador.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int opcion =0;
int menu() {
	while(true) {
		cout<<"Bienvenido "<<endl;
		cout<<"1.Crear magos"<<endl;
		cout<<"2.Separar por casa"<<endl;
		cout<<"3.Imprimir por casa"<<endl;
		cout<<"4.Imprimir cualidades de cada mago"<<endl;
		cout<<"4."<<endl;
		cout<<"5.Salir"<<endl;

		cout<<"Eliga una opcion: ";
		cin>>opcion;
		if(opcion > 0 && opcion <6) {
			return opcion;
		}
	}
}
int main(int argc, char** argv) {
	while(opcion !=5 ) {
		switch(opcion = menu()) {
			case 1: {
				vector<Mago*>lista_magos;
				srand(time(NULL));
				double x;
				for(int i = 0; i<=19; i++) {
					x = (rand()/(double)RAND_MAX) ;
					cout<<x<<endl;
					if(x<0.25) {
						MagoSlytherin* s = new MagoSlytherin();
						lista_magos.push_back(s);
					//	cout<<"S"<<endl;
					}
					if(x>0.24 && x<0.5) {
						MagoRavenclaw* r = new MagoRavenclaw();
						lista_magos.push_back(r);
					//	cout<<"R"<<endl;
					}
					if(x>0.4 && x<0.75) {
						MagoHufflepuff* h = new MagoHufflepuff();
						lista_magos.push_back(h);
					//	cout<<"H"<<endl;
					}
					if(x>0.74 && x<=1) {
						MagoGryffindor* g = new MagoGryffindor();
						lista_magos.push_back(g);
					//	cout<<"G"<<endl;
					}
				}
				int z = lista_magos.size();
				cout<<z<<endl;
				SombreroClasificador* s;
				 int ano;
				cout<<"Ingrese ano de entrada: ";
				cin>>ano;
				s->clasificar_magos_nuevos(lista_magos,ano);

				break;
			}
		}
	}
	return 0;
}