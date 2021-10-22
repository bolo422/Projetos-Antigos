#include "Jogador.h"



Jogador::Jogador(string nome, int pontos)
{
	this->nome = nome;
	this->pontos = pontos;
}

Jogador::Jogador(string nome)
{
	this->nome = nome;
	pontos = 0;
}

Jogador::Jogador()
{
	string n[] = { "Carlos","João","Maria","Paulo","Erick","Jonathan","Marcio","Lucas" };
	uniRandSetSemente(time(NULL));
	nome = n[uniRandEntre(0, 7)];
	pontos = 0;
}


Jogador::~Jogador()
{
}
