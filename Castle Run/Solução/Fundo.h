#include "libUnicornio.h"

#pragma once
class Fundo
{
public:
	Fundo();
	~Fundo();

	void atualizar();
	void desenhar();
	void inicializar(int nSprites, string caminho1, string caminho2, string caminho3);


private:

	float x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Sprite sprites[3];
	int nSprites;

};

