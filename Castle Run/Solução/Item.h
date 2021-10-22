#include "libUnicornio.h"
#pragma once

enum TipoItem {tMoeda, tDiamante};

class Item
{
public:
	Item();
	~Item();
	void inicializar();
	void resetar();
	void atualizar();
	void desenhar();
	Sprite getSprite() { return sprite; }
	float getX() { return x; }
	float getY() { return y; }
	TipoItem getTipo() { return tipo; }
	void testarColisao(bool colisao);

protected:
	Sprite sprite;
	float x, y, velocidade;
	TipoItem tipo;
	Som som;
};

