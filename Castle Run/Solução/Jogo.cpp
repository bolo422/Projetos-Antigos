#include "Jogo.h"
#include <ctime>
Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(1024, 768, false, "Corre Que O Corno Ta Puto KKK");
	srand(time(0));

	if (!gRecursos.carregouSpriteSheet("fundo"))
	{
		gRecursos.carregarSpriteSheet("fundo", "Assets/imagens/fundo.png");
	}
	fundo.setSpriteSheet("fundo");
	
	if (!gRecursos.carregouSpriteSheet("nevoa1"))
	{
		gRecursos.carregarSpriteSheet("nevoa1", "Assets/imagens/nevoa.png");
	}
	nevoa1.setSpriteSheet("nevoa1");

	if (!gRecursos.carregouSpriteSheet("fundoPause"))
	{
		gRecursos.carregarSpriteSheet("fundoPause", "Assets/imagens/fundoPause.png");
	}
	fundoPause.setSpriteSheet("fundoPause");

	if (!gRecursos.carregouSpriteSheet("instrucoes"))
	{
		gRecursos.carregarSpriteSheet("instrucoes", "Assets/imagens/SpriteTelaInstrucoes.png");
	}
	instrucoes.setSpriteSheet("instrucoes");
	
	if (!gRecursos.carregouSpriteSheet("corno1"))
	{
		gRecursos.carregarSpriteSheet("corno1", "Assets/imagens/corno1.jpg");
	}
	corno1.setSpriteSheet("corno1");

	if (!gRecursos.carregouSpriteSheet("corno2"))
	{
		gRecursos.carregarSpriteSheet("corno2", "Assets/imagens/corno2.jpg");
	}
	corno2.setSpriteSheet("corno2");

	if (!gRecursos.carregouSpriteSheet("bPlay"))
	{
		gRecursos.carregarSpriteSheet("bPlay", "Assets/imagens/bPlay.png", 3);
	}
	bPlay.setSpriteSheet("bPlay");
	bPlay.setPos(512, 300);

	// bVoltar, bContinuar
	if (!gRecursos.carregouSpriteSheet("bCreditos"))
	{
		gRecursos.carregarSpriteSheet("bCreditos", "Assets/imagens/bCreditos.png", 3);
	}
	bCreditos.setSpriteSheet("bCreditos");
	bCreditos.setPos(512, 440);

	if (!gRecursos.carregouSpriteSheet("bInstrucoes"))
	{
		gRecursos.carregarSpriteSheet("bInstrucoes", "Assets/imagens/bInstrucoes.png", 3);
	}
	bInstrucoes.setSpriteSheet("bInstrucoes");
	bInstrucoes.setPos(512, 370);

	if (!gRecursos.carregouSpriteSheet("bSair"))
	{
		gRecursos.carregarSpriteSheet("bSair", "Assets/imagens/bSair.png", 3);
	}
	bSair.setSpriteSheet("bSair");
	bSair.setPos(512, 510);

	if (!gRecursos.carregouSpriteSheet("bVoltar"))
	{
		gRecursos.carregarSpriteSheet("bVoltar", "Assets/imagens/bVoltar.png", 3);
	}
	bVoltar.setSpriteSheet("bVoltar");
	bVoltar.setPos(512, 700);

	if (!gRecursos.carregouSpriteSheet("bContinuar"))
	{
		gRecursos.carregarSpriteSheet("bContinuar", "Assets/imagens/bContinuar.png", 3);
	}
	bContinuar.setSpriteSheet("bContinuar");
	bContinuar.setPos(512, 330);

	//1 player
	if (!gRecursos.carregouSpriteSheet("b1jogador"))
	{
		gRecursos.carregarSpriteSheet("b1jogador", "Assets/imagens/b1jogador.png", 3);
	}
	b1jogador.setSpriteSheet("b1jogador");
	b1jogador.setPos(512, 230);

	//2 players
	if (!gRecursos.carregouSpriteSheet("b2jogadores"))
	{
		gRecursos.carregarSpriteSheet("b2jogadores", "Assets/imagens/b2jogadores.png", 3);
	}
	b2jogadores.setSpriteSheet("b2jogadores");
	b2jogadores.setPos(512, 300);

	//3 players
	if (!gRecursos.carregouSpriteSheet("b3jogadores"))
	{
		gRecursos.carregarSpriteSheet("b3jogadores", "Assets/imagens/b3jogadores.png", 3);
	}
	b3jogadores.setSpriteSheet("b3jogadores");
	b3jogadores.setPos(512, 370);

	//4 players
	if (!gRecursos.carregouSpriteSheet("b4jogadores"))
	{
		gRecursos.carregarSpriteSheet("b4jogadores", "Assets/imagens/b4jogadores.png", 3);
	}
	b4jogadores.setSpriteSheet("b4jogadores");
	b4jogadores.setPos(512, 440);

	//Iniciar jogo
	if (!gRecursos.carregouSpriteSheet("bIniciarJogo"))
	{
		gRecursos.carregarSpriteSheet("bIniciarJogo", "Assets/imagens/bIniciarJogo.png", 3);
	}
	bIniciarJogo.setSpriteSheet("bIniciarJogo");
	bIniciarJogo.setPos(512, 550);

	
	
	if (!gRecursos.carregouSpriteSheet("bgCastelo1"))
	{
		gRecursos.carregarSpriteSheet("bgCastelo1", "Assets/imagens/bgMenuCastelo1.png");
	}
	bgCastelo1.setSpriteSheet("bgCastelo1");
	

	/*if (!gRecursos.carregouSpriteSheet("logoUni"))
	{
		gRecursos.carregarSpriteSheet("logoUni", "Assets/imagens/logoUni.png");
	}
	logoUni.setSpriteSheet("logoUni");*/

	if (!gRecursos.carregouMusica("musica"))
	{
		gRecursos.carregarMusica("musica", "Assets/sons/musica.mp3");
	}
	fx1 = gJanela.getLargura() / 2;
	fy1 = 0;
	fx2 = gJanela.getLargura() / 2;
	fy2 = gJanela.getAltura();

	nPersonagens = 4;

	for (int p = 0; p < nPersonagens; p++)
	{
		personagem[p].inicializar(p + 1);
	}


	for (int i = 0; i < 10; i++)
	{
		item[i].inicializar();
	}


	if (!gRecursos.carregouFonte("fonteRoboto"))
	{
		gRecursos.carregarFonte("fonteRoboto", "assets/fontes/Roboto-Bold.ttf", 32);
	}
	texto.setFonte("fonteRoboto");

	texto.setString("Teste de texto");
	texto.setCor(255, 255, 255);
	tela = stMenu;

	
}

void Jogo::finalizar()
{
	//gRecursos.descarregarSpriteSheet("fundo");
	//gRecursos.descarregarTodosSpriteSheets();
	gRecursos.descarregarTudo();

	uniFinalizar();
}

void Jogo::executar()
{
	gMusica.tocar("musica", true);

	while (tela != stSair && !gEventos.sair)
	{
		uniIniciarFrame();

		switch (tela)
		{
		case stMenu: telaMenu();
			break;
		
		case stPause: 
		case stJogo: telaJogo();
			break;
		case stSelecao: telaSelecao();
			break;
		case stPontuacao: telaPontuacao();
			break;
		case stInstrucoes: telaInstrucoes();
			break;
		case stCreditos: telaCreditos();
			break;
		case stSair:
			break;
		}

		uniTerminarFrame();
	}
}

void Jogo::telaJogo()
{
	fundo.desenhar(fx1, fy1);
	fundo.desenhar(fx2, fy2);

	

	if (gTeclado.pressionou[TECLA_ESC])
	{
		tela = stPause;
		gMouse.mostrarCursor();
	}

	for (int i = 0; i < 10; i++)
	{
		item[i].desenhar();
	}

	for (int p = 0; p < nPersonagens; p++)
	{
		personagem[p].desenhar();
		texto.setString("Jogador " + to_string(p + 1) + "\nPontuação: " + to_string(personagem[p].getPontuacao()));
		texto.desenhar(256 * (p + 1) - 128, 60);
	}

	if (tela == stJogo)
	{

		if (gTeclado.pressionou[TECLA_P])
		{
			gMusica.pausar();
		}

		if (gTeclado.pressionou[TECLA_C])
		{
			gMusica.continuar();
		}

		if (fy2 < fundo.getAltura() + fundo.getAltura() / 2)
		{
			fy2++;
		}
		else
		{
			fy2 = -fundo.getAltura() / 2;
		}

		if (fy1 < fundo.getAltura() + fundo.getAltura() / 2)
		{
			fy1++;
		}
		else
		{
			fy1 = -fundo.getAltura() / 2;
		}

		for (int i = 0; i < 10; i++)
		{
			item[i].atualizar();

			for (int p = 0; p < nPersonagens; p++)
			{
				item[i].testarColisao(personagem[p].testarColisao(item[i]));
			}

		}

		for (int p = 0; p < nPersonagens; p++)
		{
			personagem[p].atualizar();
		}
	}
	else // Tela de pause
	{
		fundoPause.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
		
		bContinuar.atualizar();
		bContinuar.desenhar();
		if (bContinuar.estaClicado())
		{
			tela = stJogo;
			gMouse.esconderCursor();
		}

		bSair.atualizar();
		bSair.desenhar();
		if (bSair.estaClicado())
		{
			tela = stMenu;
			bSair.setPos(512, 510);
		}
	}
}

void Jogo::telaMenu()
{
	//nevoa1.desenhar(nx1, ny1);
	//nevoa1.desenhar(nx2, ny2);
	//nevoa1.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	bgCastelo1.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	
	//nevoa1.desenhar(512, 384);


	if (ny2 < nevoa1.getAltura() + nevoa1.getAltura() / 2)
	{
		ny2++;
	}
	else
	{
		ny2 = -nevoa1.getAltura() / 2;
	}

	if (ny1 < nevoa1.getAltura() + nevoa1.getAltura() / 2)
	{
		ny1++;
	}
	else
	{
		ny1 = -nevoa1.getAltura() / 2;
	}

	/*if (nx2 < nevoa1.getLargura() + nevoa1.getLargura() / 2)
	{
		nx2++;
	}
	else
	{
		nx2 = -nevoa1.getLargura() / 2;
	}

	if (nx1 < nevoa1.getLargura() + nevoa1.getLargura() / 2)
	{
		nx1++;
	}
	else
	{
		nx1 = -nevoa1.getLargura() / 2;
	}*/


	//texto.setString("Corre Que O Corno Ta Puto KKK");
	//texto.desenhar(512, 100);

	//corno1.desenhar(200, 300);
	//corno2.desenhar(800, 300);

	bPlay.atualizar();
	bPlay.desenhar();
	if (bPlay.estaClicado())
	{
		tela = stSelecao;
		//bSair.setPos(512, 750);
		//gMouse.esconderCursor();
	}

	bInstrucoes.atualizar();
	bInstrucoes.desenhar();
	if (bInstrucoes.estaClicado())
	{
		tela = stInstrucoes;
	}

	bCreditos.atualizar();
	bCreditos.desenhar();
	if (bCreditos.estaClicado())
	{
		tela = stCreditos;
	}

	bSair.atualizar();
	bSair.desenhar();
	if (bSair.estaClicado())
	{
		tela = stSair;
	}

}

void Jogo::telaSelecao()
{
	b1jogador.atualizar();
	b1jogador.desenhar();

	b2jogadores.atualizar();
	b2jogadores.desenhar();

	b3jogadores.atualizar();
	b3jogadores.desenhar();

	b4jogadores.atualizar();
	b4jogadores.desenhar();

	if (b1jogador.estaClicado())
	{
		nPersonagens = 1;
		botaoVariavel1++;
	}
	if (b2jogadores.estaClicado())
	{
		nPersonagens = 2;
		botaoVariavel1++;
	}
	if (b3jogadores.estaClicado())
	{
		nPersonagens = 3;
		botaoVariavel1++;
	}
	if (b4jogadores.estaClicado())
	{
		nPersonagens = 4;
		botaoVariavel1++;
	}

	/*if (b1jogador.estaClicado() || b2jogadores.estaClicado() || b3jogadores.estaClicado() || b4jogadores.estaClicado())
	{
		botaoVariavel1++;
	}*/

	if (botaoVariavel1 > 0)
	{
		bIniciarJogo.atualizar();
		bIniciarJogo.desenhar();
	}
	
	if (bIniciarJogo.estaClicado())
	{
		botaoVariavel1 = 0;
		tela = stJogo;
	}

	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		botaoVariavel1 = 0;
		tela = stMenu;
	}
}

void Jogo::telaPontuacao()
{
	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		tela = stMenu;
	}
}

void Jogo::telaInstrucoes()
{
	instrucoes.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);

	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		tela = stMenu;
	}
}

void Jogo::telaCreditos()
{

	//texto.setString("Ainda em desenvolvimento");
	//texto.desenhar(512, 300);

	



	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		tela = stMenu;
	}
}

void Jogo::telaPause()
{
}
