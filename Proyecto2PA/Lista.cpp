#include "Lista.h"

struct Nodo {
	int nro;
	Nodo* ant;
	Nodo* sgt;

};

void insertarListaFinal(Nodo* lista, int valor) {

	Nodo* nodo = new Nodo;
	Nodo* t;
	nodo->nro = valor;
	nodo->ant = nullptr;
	nodo->sgt = nullptr;

	if (lista == nullptr) {
		lista = nodo;

	}
	else {
		t = lista;
		while (t->sgt != nullptr) {
			t = t->sgt;
		}
		t->sgt = nodo;
		nodo->ant = t;
	}

}


void insertarElementoDespues(Nodo* lista, int valorBus, int valorIns) {
	Nodo* nodo = new Nodo;
	nodo->ant = nullptr;
	nodo->sgt = nullptr;
	nodo->nro = valorIns;

	if (lista != nullptr) {
		Nodo* p, * a;
		p = lista;
		while (p != nullptr) {
			if (p->nro == valorBus) {
				a = p->sgt;
				if (p->sgt != nullptr) {
					a->ant = nodo;
					nodo->sgt = a;
				}
				nodo->ant = p;
				p->sgt = nodo;
			}
			p = p->sgt;
		}
	}
	else {
		lista = nodo;
	}
}

void mostrarListaDoble(Nodo* lista) {

	Nodo* t = lista;
	while (t != nullptr) {
		t->nro;
		t = t->sgt;
	}

}
