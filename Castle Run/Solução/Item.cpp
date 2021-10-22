#include "Item.h"



Item::Item()
{
}


Item::~Item()
{
}

void Item::inicializar()
{
	if (!gRecursos.carregouSpriteSheet("moeda"))
	{
		gRecursos.carregarSpriteSheet("moeda", "assets/imagens/moeda.png",1,8);
	}
	if (!gRecursos.carregouSpriteSheet("diamante"))
	{
		gRecursos.carregarSpriteSheet("diamante", "assets/imagens/diamante.png",1,4);
	}

	if (!gRecursos.carregouAudio("moeda"))
	{
		gRecursos.carregarAudio("moeda", "assets/sons/coin.mp3");
	}
	if (!gRecursos.carregouAudio("diamante"))
	{
		gRecursos.carregarAudio("diamante", "assets/sons/coin.mp3");
	}
	
	
	resetar();


}

void Item::resetar()
{
	tipo = (TipoItem)(rand() % 2); //qtdItens é o número de itens no enum
	//tipo = tMoeda;

	switch (tipo)
	{
	case tMoeda: sprite.setSpriteSheet("moeda");
		//sprite.avancarAnimacao();
		sprite.setEscala(2, 2);
				 som.setAudio("moeda");
		break;
	case tDiamante: sprite.setSpriteSheet("diamante");
		sprite.setEscala(2, 2);
		//sprite.avancarAnimacao();
					som.setAudio("diamante");
		break;
	}
	x = rand() % 900 + sprite.getAltura();
	y = -(rand() % 500) -sprite.getAltura();
	velocidade = 1;
}

void Item::atualizar()
{
	y += velocidade;
	if (y > gJanela.getAltura() + sprite.getAltura())
	{
		resetar();
	}
	sprite.avancarAnimacao();
}

void Item::desenhar()
{
	sprite.desenhar(x, y);
}

void Item::testarColisao(bool colisao)
{
	if (colisao)
	{
		som.tocar();
		resetar();
	}
}
