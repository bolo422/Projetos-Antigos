#pragma once
#include <string>
#include "libUnicornio.h"
#include <ctime>
using namespace std;
class Jogador
{
public:
	Jogador(string nome, int pontos);
	Jogador(string nome);
	Jogador();
	~Jogador();

	void addPontos(int p) { pontos += p; }
	void addPontos() { pontos++; }
	void setPontos(int p) { pontos = p; }
	void reset() { pontos = 0; }
	int getPontos() { return pontos; }

	void setNome(string n) { nome = n; }
	string getNome() { return nome; }

	friend bool operator<(const Jogador& c1, const Jogador& c2) {
		if (c1.pontos < c2.pontos)
			return true;
		else return false;
	}
	friend bool operator>(const Jogador& c1, const Jogador& c2) {
		if (c1.pontos > c2.pontos)
			return true;
		else return false;
	}

private:
	int pontos;
	string nome;

};

