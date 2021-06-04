#include <iostream>
#include "Mago.h"
#include "ClaseHogwarts.h"
#include "SombreroClasificador.h"
#include "MagoRavenclaw.h"
#include "MagoGryffindor.h"
#include "MagoSlytherin.h"
#include "MagoHufflepuff.h"

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
	while(opcion !=5 ){
		switch(opcion = menu()){
			case 1: {
				
				break;
			}
		}		
	}
	return 0;
}