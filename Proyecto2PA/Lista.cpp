#include "Lista.h"

Lista::Lista() {
	sig = nullptr;
}

void Lista::insertarlista(int n) {

	
	if ( sig== nullptr) {
		sig = new Nodo();
		sig->dato = n;
		sig->sig = nullptr;

	}
	else {
		Nodo* nuevoN = new Nodo();
		nuevoN->dato = n;
		nuevoN->sig = sig;
		sig = nuevoN;
	}
}


//Eventos obtenerdato( Eventos valorBus){
//	return valorBus;
//}

System::String^ Lista::mostrarListaDoble(Nodo*& pos) {

	if (pos != nullptr) {
		if (pos->sig == nullptr) {
			return System::Convert::ToString(pos->dato);
		}
		else {
			return System::Convert::ToString(pos->dato) + "\n" + mostrarListaDoble(pos->sig);
		}
	}
	else {
		return "--";
	}

}
