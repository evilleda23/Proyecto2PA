#pragma once
#include "Nodo.h"
class Lista
{
public:
	//String^ hola;
	Nodo* sig;
	Lista::Lista();
	void insertarlista(Eventos*&);
	System::String^ obtenerdato(int);
	
};

