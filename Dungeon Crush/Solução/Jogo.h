#pragma once
#include "libUnicornio.h"
#include <ctime>

enum StatusJogo {
	stMenu, stJogo, stPontuacao,
	stInstrucoes, stCreditos, stPause, stSair, stGameover, stNome
};


class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();
	void verificarMat();
	int verificarColuna();
	int verificarLinha();
	void renovarMatriz();
	//void marcarColuna(int x, int y, int nEncontrados2);
	//void marcarLinha(int x, int y, int nEncontrados);
	//void substituirMatriz();
	//void renovarMatriz();
	void desalocarMatriz();
	void executar();
	void mudarFase();
	void removerZeros();
	void reiniciarMatriz();

protected:
	StatusJogo tela;
	Sprite fundo, fundoPause, instrucoes, creditos, itens, menu, party, sprBool;
	Texto texto;
	int x, y;
	BotaoSprite bPlay, bCreditos, bInstrucoes, bSair, bVoltar, bContinuar, bIniciarJogo, bSairDoJogo, bRetornarMenu, bproximaFase, praise;
	Som som;
	int mat[12][12];
	int nItens;
	int Tamx, Tamy;
	int **matriz;
	bool **bMat;
	//float dx, dy, itemAltura, itemLargura, itemMeiaAltura, itemMeiaLargura;
	int dy = 150;
	int dx =  404;
	int itemMeiaLargura = 25;
	int itemLargura = 50;
	int itemMeiaAltura = 25;
	int itemAltura = 50;
	int xtela, ytela;
	int xMat, yMat;
	int debug;
	int controlx = 512, controly = 384;
	int xp, yp, xs, ys, xa, ya;
	int aux1 = 0, aux2;
	bool trocando = false, teste1, teste2, marcar;
	int pontos = 0;
	int objetivo = 800;
	int fase = 1;
	int encontrados = 1, id, nEncontrados2 = 1;
	int linha, coluna;
	int xis, ypslon;
	int faseAtual;
	bool igual = false;
	void telaMenu();
	void telaJogo();
	void telaPontuacao();
	void telaInstrucoes();
	void telaCreditos();
	void telaPause();
	void telaGameover();
	void resetar();
	//void telaNome();
	string jogador;
	int recordes[10];
};

