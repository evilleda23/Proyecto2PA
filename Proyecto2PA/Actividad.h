#pragma once
#include "Eventos.h"
#include <stdio.h>

 class Actividad : public Eventos
{public:
	Actividad(); 
	 int horafin;
	 char descripcion[100];
};

