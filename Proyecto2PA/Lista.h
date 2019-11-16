#pragma once
#include "Nodo.h"
class Lista
{
public:
	//String^ hola;
	Nodo* sig;
	Lista::Lista();
	void insertarlista(Eventos);
	Eventos obtenerdato(Eventos, Nodo*&);
	
};

