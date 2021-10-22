#include "Fundo.h"



Fundo::Fundo()
{
}


Fundo::~Fundo()
{
}

void Fundo::atualizar()
{
	//x1--;

	if (y2 < nevoa.getAltura() + nevoa.getAltura() / 2)
	{
		y2++;
	}
	else
	{
		y2 = -nevoa.getAltura() / 2;
	}

	if (y1 < nevoa.getAltura() + nevoa.getAltura() / 2)
	{
		y1++;
	}
	else
	{
		y1 = -nevoa.getAltura() / 2;
	}


}

void Fundo::desenhar()
{
	nevoa.desenhar(x1, y1);
	nevoa.desenhar(x2, y2);
}

void Fundo::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("nevoa"))
	{
		gRecursos.carregarSpriteSheet("nevoa", "Assets/imagens/nevoa.png");
	}
	nevoa.setSpriteSheet("nevoa");
}
