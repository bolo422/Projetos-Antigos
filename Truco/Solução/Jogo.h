#pragma once
#include "Jogador.h"
#include "Pilha.h"
#include <stack>
#include <list>
#include <queue>
#include <fstream>
enum Tela
{
	Mesa, Menu, Dev, Regras, EndGame
};
class Jogo
{
public:
	Jogo();
	~Jogo();

	list<Carta*> maoP1;
	//list<Carta*> auxMaoP1;
	list<Carta*>::iterator itP1;
	list<Carta*> maoP2;
	//list<Carta*> auxMaoP2;
	list<Carta*>::iterator itP2;
	list<Carta*> maoP3;
	//list<Carta*> auxMaoP3;
	list<Carta*>::iterator itP3;
	list<Carta*> maoP4;
	//list<Carta*> auxMaoP4;
	list<Carta*>::iterator itP4;
	list<Carta*>::iterator del[4];

	queue<int> ordem;




	void inicializar();
	void finalizar();
	void executar();
	void iniciarMesa();
	Carta duelo(Carta c1, Carta c2);
	Carta duelo(Carta c1, Carta c2, Carta c3, Carta c4);
	int duelo(Carta* c[4]);
	void criarBaralho();
	void pegarCartas(int nJogadores);
	void reset();
	void desenharVez();
	void desenharTextosDaMesa();
	void desenharCartas();
	void colisaoDasCartas();
	void iniciarRodada();
	int calculaEnvido(int nJogador);
	int calculaFlor(int nJogador);
	bool testaFlor(int nJogador);  
	void desenharFlor();
	void testarVitoria(int nRodadas);
	void fimDaPartida(int dupla);
	
	void telaJogo();
	void telaMenu();
	void telaEndGame();
	void dev();
	void telaRegras();


private:
	Sprite carta, verso, base[4], fundo, marca, menubg, moeda, caixa, box, controlesSom, botaoBranco;

	BotaoSprite bsolo, bduplas, card[12], contraflor,
		contrafloreoresto, envido, faltaenvido, flor1, flor2,
		realenvido, retruco, truco, vale4, bjogar, bregras,
		correrTruco;

	int f = 0, t1, t2, t3, vez, nJogadores, auxvez, dupla, pontos[4],
		contPos, aux, vencedor, score1, score2, contx, conty, deletar[4],
		cartadel[4], vale, Numeros[3], Resultado, Maior, nums[3], xDuelos, venceDuelo[2],
		nVezesJogadas, pediuTruco, contNFlores = 0;

	Pilha baralho;

	Carta* tst, * c, * desenha, * t[3], ** vMesa, * disputa[4], * auxMaoP1[3],
		* auxMaoP2[3], * auxMaoP3[3], * auxMaoP4[3];

	float x1, x2, y1, y2, x[12], y[12], posX[4], posY;

	Texto texto[10], texto2[10];

	bool cont[4], fimRodada;

	Jogador** j;

	Tela tela;

	char Naipes[3], np[3];

	fstream arq;

	Som menuClique, cartaClique;

	

};

