#include "Lista.h"

Lista::Lista() {
	sig = nullptr;
}

void Lista::insertarlista(Eventos n) {

	
	if ( sig== nullptr) {
		sig = new Nodo();
		sig->Tipo = n;
		sig->sig = nullptr;
		
	}
	else {
		Nodo* nuevoN = new Nodo();
		nuevoN->Tipo = n;
		nuevoN->sig = sig;
		sig = nuevoN;
	}
}


Eventos Lista::obtenerdato( Eventos valorBus, Nodo*& xd){
	if (valorBus.ID == sig->Tipo.ID) {
		return valorBus;
	}
	else {
		return obtenerdato(valorBus, xd->sig);
	}
	
}

//System::String^ Lista::mostrarListaDoble(Nodo*& pos) {
//
//	if (pos != nullptr) {
//		if (pos->sig == nullptr) {
//			return System::Convert::ToString(pos->t
//			);
//		}
//		else {
//			return System::Convert::ToString(pos->dato) + "\n" + mostrarListaDoble(pos->sig);
//		}
//	}
//	else {
//		return "--";
//	}
//
//}
