#include "Lista.h"

Lista::Lista() {
	sig = nullptr;
}

void Lista::insertarlista(Eventos *&n) {

	
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


System::String^ Lista::obtenerdato( int valorBus){
	
	//Lista* l;
	//while (l->sig != nullptr) {
	//	if (l->sig->Tipo.ID == valorBus) {
	//		return valorBus;
	//	}
	//	
	//}
	return valorBus.ToString();
	
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
