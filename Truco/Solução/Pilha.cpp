#include "Pilha.h"

Pilha::Pilha()
{
	topo = base = NULL;
	tam = 0;
}

bool Pilha::empty()
{
	if (tam == 0) {
		return true;
	}
	else { return false; }
}

void Pilha::push(Carta *elemento)
{
	Nodo* aux;
	aux = new Nodo(elemento);
	if (empty()) { topo = base = aux; }
	else {
		topo->setProximo(aux);
		aux->setAnterior(topo);
		topo = aux;
	}
	tam++;
}

void Pilha::pop()
{
	if (empty()) {
		return;
	}
	else if (tam == 1) { tam = 0; topo = NULL; base = NULL; }
	else {
		topo->getAnterior()->setProximo(NULL);
		topo = topo->getAnterior();
		tam--;
	}
}

void Pilha::embaralhar()
{
	srand(time(0));
	vet = new Carta*[tam];
	auxI = tam;
	for (int i = 0; i < auxI; i++)
	{
		vet[i] = pull();
	}
	
	cont = 0;
	embaralhar(rand() % auxI);

	for (int i = 0; i < auxI; i++)
	{
		push(vet[i]);
	}
}

void Pilha::embaralhar(int num){
	if (cont == auxI) { return; }
	else {
		Carta *temp = vet[cont];
		vet[cont] = vet[num];
		vet[num] = temp;
		cont++;
		embaralhar(rand() % auxI);
	}
}




