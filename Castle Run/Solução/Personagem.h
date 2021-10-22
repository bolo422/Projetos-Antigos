#pragma once
#include "Item.h"

enum MovimentoPersonagem
{
   mBaixo, mEsquerda, mDireita, mCima, mParado
};

class Personagem
{
	public:
		Personagem();
		~Personagem();
		void inicializar(int nPersonagem);
		void atualizar();
		void desenhar();
		bool testarColisao(Item item);

		int getPontuacao() { return pontuacao; }

	protected:
		Sprite sprite;
		float x, y, velocidade;
		MovimentoPersonagem movimento;
		int nPersonagem, pontuacao;
};

