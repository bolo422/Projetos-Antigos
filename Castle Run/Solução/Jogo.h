#pragma once
#include "Personagem.h"
#include "Item.h"

enum StatusJogo {
	stMenu, stJogo, stSelecao, stPontuacao,
	stInstrucoes, stCreditos, stPause, stSair
};

class Jogo
{
	public:
		Jogo();
		~Jogo();

		void inicializar();
		void finalizar();
		void executar();
	
	protected:
		StatusJogo tela;
		Sprite fundo, fundoPause, instrucoes, corno1, corno2, bgCastelo1, nevoa1;
		Personagem personagem[4];
		float fx1, fx2, fy1, fy2, nx1, nx2, ny1, ny2;
		Texto texto;
		Item item[10];
		bool colisao;
		int nPersonagens;
		BotaoSprite bPlay, bCreditos, bInstrucoes, bSair, bVoltar, bContinuar, b1jogador, b2jogadores, b3jogadores, b4jogadores, bIniciarJogo;

		void telaMenu();
		void telaJogo();
		void telaSelecao();
		void telaPontuacao();
		void telaInstrucoes();
		void telaCreditos();
		void telaPause();



		int botaoVariavel1 = 0;
};

