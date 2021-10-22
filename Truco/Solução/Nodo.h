#pragma once
#include "Carta.h"
#include <iostream>
using namespace std;
class Nodo
{
public:
	Nodo(Carta *elemento) { this->elemento = elemento; }
	Nodo() {}
	~Nodo() {}

	Carta *getElemento() { return elemento; }
	void *setElemento(Carta *elemento) { this->elemento = elemento; }

	Nodo* getAnterior() { return anterior; }
	void setAnterior(Nodo* nodo) { anterior = nodo; }

	Nodo* getProximo() { return proximo; }
	void setProximo(Nodo* nodo) { proximo = nodo; }

private:
	Nodo* anterior, * proximo;
	Carta *elemento;
};