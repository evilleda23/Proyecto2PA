#pragma once
#include "Nodo.h"
class Lista
{
public:
	//String^ hola;
	Nodo* sig;
	Lista::Lista();
	void Lista::insertarlista(int);
	System::String^  Lista::obtenerdato(System::String^*&);
	/*void insertarlista(Eventos);
	Eventos obtenerdato(Eventos);*/
	System::String^ Lista::mostrarListaDoble(Nodo*&);
};

