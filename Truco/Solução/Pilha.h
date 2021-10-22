#pragma once
#include <ctime>
#include "Nodo.h"
class Pilha
{
public:

	Pilha();
	~Pilha() {}

	/*Nodo* getBase() { return base; }
	void setBase(Nodo* nodo) { base = nodo; }
	Nodo* getTopo() { return topo; }
	void setTopo(Nodo* nodo) { topo = nodo; }*/

	bool empty();//retorna true se vazio
	void push(Carta *elemento);//coloca na pilha
	Carta *top() { return topo->getElemento(); }//ve o topo sem remover
	void pop();//remove o topo
	Carta *pull() { aux = top(); pop(); return aux; }//retorna o topo e depois remove
	int size() { return tam; }//retorna o tamanho da pilha

	void embaralhar(); //reorganiza os elementos da pilha de forma aleatoria
	void embaralhar(int num);


private:

	int tam, auxI, cont;
	Nodo* base, * topo;
	Carta *aux, **vet;


};

