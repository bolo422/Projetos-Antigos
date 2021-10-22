#include "Personagem.h"



Personagem::Personagem()
{
}


Personagem::~Personagem()
{
}

void Personagem::inicializar(int nPersonagem)
{
	this->nPersonagem = nPersonagem;

	if (!gRecursos.carregouSpriteSheet("personagem1"))
	{
		gRecursos.carregarSpriteSheet("personagem1", "Assets/imagens/p1.png", 4, 4);
	}
	sprite.setSpriteSheet("personagem1");
	///////////////////////////////////////

	if (nPersonagem == 2) {
		if (!gRecursos.carregouSpriteSheet("personagem2"))
		{
			gRecursos.carregarSpriteSheet("personagem2", "Assets/imagens/p2.png", 4, 4);
		}
		sprite.setSpriteSheet("personagem2");
	}
	//////////////////////////////////////////

	if (nPersonagem == 3) {
		if (!gRecursos.carregouSpriteSheet("personagem3"))
		{
			gRecursos.carregarSpriteSheet("personagem3", "Assets/imagens/p3.png", 4, 4);
		}
		sprite.setSpriteSheet("personagem3");
	}
		/////////////////////////////////////////////////

	if (nPersonagem == 4) {
		if (!gRecursos.carregouSpriteSheet("personagem4"))
		{
			gRecursos.carregarSpriteSheet("personagem4", "Assets/imagens/p4.png", 4, 4);
		}
		sprite.setSpriteSheet("personagem4");
	}



	
	/*if (nPersonagem == 2)
	{
		sprite.setCorAlpha(200);
	}*/
	
	
	sprite.setEscala(3.7, 3.7);
	x = 256 * nPersonagem - 128;
	y = 700;
	
	velocidade = 2;
	movimento = mParado;
	pontuacao = 0;
}

void Personagem::atualizar()
{
	movimento = mParado;

	//p1
	if ((gTeclado.segurando[TECLA_D] || gJoysticks.player1.segurando[BOTAO_XBOX_DIR]) && nPersonagem == 1)
	{
		if (x < gJanela.getLargura() - sprite.getLargura() / 2)
		{
			x += velocidade;
		}
		movimento = mDireita;
	}
	if ((gTeclado.segurando[TECLA_A] || gJoysticks.player1.segurando[BOTAO_XBOX_ESQ]) && nPersonagem == 1)
	{
		if (x > sprite.getLargura() / 2)
		{
			x -= velocidade;
		}
		movimento = mEsquerda;
	}
	if ((gTeclado.segurando[TECLA_W] || gJoysticks.player1.segurando[BOTAO_XBOX_CIMA]) && nPersonagem == 1)
	{
		if (y > sprite.getAltura() / 2)
		{
			y -= velocidade;
			movimento = mCima;
		}                                                                             
	}
	if ((gTeclado.segurando[TECLA_S] || gJoysticks.player1.segurando[BOTAO_XBOX_BAIXO]) && nPersonagem == 1)
	{
		if (y < gJanela.getAltura() - sprite.getAltura() / 2)
		{
			y += velocidade;
			movimento = mBaixo;
		}
	}


	//p2
	if ((gTeclado.segurando[TECLA_L] || gJoysticks.player2.segurando[BOTAO_XBOX_DIR]) && nPersonagem == 2)
	{
		if (x < gJanela.getLargura() - sprite.getLargura() / 2)
		{
			x += velocidade;
		}
		movimento = mDireita;
	}
	if ((gTeclado.segurando[TECLA_J] || gJoysticks.player2.segurando[BOTAO_XBOX_ESQ]) && nPersonagem == 2)
	{
		if (x > sprite.getLargura() / 2)
		{
			x -= velocidade;
		}
		movimento = mEsquerda;
	}
	if ((gTeclado.segurando[TECLA_I] || gJoysticks.player2.segurando[BOTAO_XBOX_CIMA]) && nPersonagem == 2)
	{
		if (y > sprite.getAltura() / 2)
		{
			y -= velocidade;
			movimento = mCima;
		}
	}
	if ((gTeclado.segurando[TECLA_K] || gJoysticks.player2.segurando[BOTAO_XBOX_BAIXO]) && nPersonagem == 2)
	{
		if (y < gJanela.getAltura() - sprite.getAltura() / 2)
		{
			y += velocidade;
			movimento = mBaixo;
		}
	}


	//p3
	if ((gTeclado.segurando[TECLA_DIR] || gJoysticks.player3.segurando[BOTAO_XBOX_DIR]) && nPersonagem == 3)
	{
		if (x < gJanela.getLargura() - sprite.getLargura()/2)
		{
			x += velocidade;
		}
		movimento = mDireita;
	}
	if ((gTeclado.segurando[TECLA_ESQ] || gJoysticks.player3.segurando[BOTAO_XBOX_ESQ]) && nPersonagem == 3)
	{
		if (x > sprite.getLargura()/2) 
		{
			x -= velocidade;
		}
		movimento = mEsquerda;
	}
	if ((gTeclado.segurando[TECLA_CIMA] || gJoysticks.player3.segurando[BOTAO_XBOX_CIMA]) && nPersonagem == 3)
	{
		if (y > sprite.getAltura() / 2)
		{
			y -= velocidade;
			movimento = mCima;
		}
	}
	if ((gTeclado.segurando[TECLA_BAIXO] || gJoysticks.player3.segurando[BOTAO_XBOX_BAIXO]) && nPersonagem == 3)
	{
		if (y < gJanela.getAltura() - sprite.getAltura() / 2)
		{
			y += velocidade;
			movimento = mBaixo;
		}
	}

	//p4
	if ((gTeclado.segurando[TECLA_KP_6] || gJoysticks.player4.segurando[BOTAO_XBOX_DIR]) && nPersonagem == 4)
	{
		if (x < gJanela.getLargura() - sprite.getLargura() / 2)
		{
			x += velocidade;
		}
		movimento = mDireita;
	}
	if ((gTeclado.segurando[TECLA_KP_4] || gJoysticks.player4.segurando[BOTAO_XBOX_ESQ]) && nPersonagem == 4)
	{
		if (x > sprite.getLargura() / 2)
		{
			x -= velocidade;
		}
		movimento = mEsquerda;
	}
	if ((gTeclado.segurando[TECLA_KP_8] || gJoysticks.player4.segurando[BOTAO_XBOX_CIMA]) && nPersonagem == 4)
	{
		if (y > sprite.getAltura() / 2)
		{
			y -= velocidade;
			movimento = mCima;
		}
	}
	if ((gTeclado.segurando[TECLA_KP_5] || gJoysticks.player4.segurando[BOTAO_XBOX_BAIXO]) && nPersonagem == 4)
	{
		if (y < gJanela.getAltura() - sprite.getAltura() / 2)
		{
			y += velocidade;
			movimento = mBaixo;
		}
	}

	

	if (movimento != mParado)
	{
		sprite.setAnimacao(movimento);
		sprite.avancarAnimacao();
	}
	else
	{
		sprite.setAnimacao(mCima);
		sprite.avancarAnimacao();
		//sprite.setAnimacao(0, true);
		//sprite.setFrame(1);
	}

	/*if (nPersonagem == 2)
	{
		x = gMouse.x;
		y = gMouse.y;
	}*/
}

void Personagem::desenhar()
{
	sprite.desenhar(x,y);
}

bool Personagem::testarColisao(Item item)
{
	bool colisao;

	colisao = uniTestarColisao(sprite, x, y, 0, item.getSprite(), item.getX(), item.getY(), 0);
	if(colisao)
	{
		switch (item.getTipo())
		{
			case tMoeda: 
				pontuacao += 1;
				break;
			case tDiamante:
				pontuacao += 10;
				break;
		}
	}

	return colisao;
}
