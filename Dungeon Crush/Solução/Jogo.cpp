#include "Jogo.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{
}

void Jogo::inicializar()
{
	uniInicializar(1024, 768, false);
	srand(time(0));

	if (!gRecursos.carregouSpriteSheet("fundo"))
	{
		gRecursos.carregarSpriteSheet("fundo", "Assets/imagens/fundo.png");
	}
	fundo.setSpriteSheet("fundo");

	if (!gRecursos.carregouSpriteSheet("party"))
	{
		gRecursos.carregarSpriteSheet("party", "Assets/imagens/party.png");
	}
	party.setSpriteSheet("party");

	if (!gRecursos.carregouSpriteSheet("menu"))
	{
		gRecursos.carregarSpriteSheet("menu", "Assets/imagens/menu.png");
	}
	menu.setSpriteSheet("menu");
	if (!gRecursos.carregouSpriteSheet("fundoPause"))
	{
		gRecursos.carregarSpriteSheet("fundoPause", "Assets/imagens/fundoPause.png");
	}
	fundoPause.setSpriteSheet("fundoPause");

	if (!gRecursos.carregouSpriteSheet("instrucoes"))
	{
		gRecursos.carregarSpriteSheet("instrucoes", "Assets/imagens/instrucoes.png");
	}
	instrucoes.setSpriteSheet("instrucoes");

	if (!gRecursos.carregouSpriteSheet("creditos"))
	{
		gRecursos.carregarSpriteSheet("creditos", "Assets/imagens/creditos.png");
	}
	creditos.setSpriteSheet("creditos");

	if (!gRecursos.carregouSpriteSheet("bPlay"))
	{
		gRecursos.carregarSpriteSheet("bPlay", "Assets/imagens/bPlay.png", 3);
	}
	bPlay.setSpriteSheet("bPlay");
	bPlay.setPos(150, 600);

	// bVoltar, bContinuar
	if (!gRecursos.carregouSpriteSheet("bCreditos"))
	{
		gRecursos.carregarSpriteSheet("bCreditos", "Assets/imagens/bCreditos.png", 3);
	}
	bCreditos.setSpriteSheet("bCreditos");
	bCreditos.setPos(350, 600);

	if (!gRecursos.carregouSpriteSheet("bInstrucoes"))
	{
		gRecursos.carregarSpriteSheet("bInstrucoes", "Assets/imagens/bInstrucoes.png", 3);
	}
	bInstrucoes.setSpriteSheet("bInstrucoes");
	bInstrucoes.setPos(550, 600);

	if (!gRecursos.carregouSpriteSheet("bSair"))
	{
		gRecursos.carregarSpriteSheet("bSair", "Assets/imagens/bSair.png", 3);
	}
	bSair.setSpriteSheet("bSair");
	bSair.setPos(750, 600);

	if (!gRecursos.carregouSpriteSheet("bVoltar"))
	{
		gRecursos.carregarSpriteSheet("bVoltar", "Assets/imagens/bVoltar.png", 3);
	}
	bVoltar.setSpriteSheet("bVoltar");
	bVoltar.setPos(100, 700);

	if (!gRecursos.carregouSpriteSheet("bContinuar"))
	{
		gRecursos.carregarSpriteSheet("bContinuar", "Assets/imagens/bContinuar.png", 3);
	}
	bContinuar.setSpriteSheet("bContinuar");
	bContinuar.setPos(512, 330);




	if (!gRecursos.carregouSpriteSheet("bproximaFase"))
	{
		gRecursos.carregarSpriteSheet("bproximaFase", "Assets/imagens/proximaFase.png", 3);
	}
	bproximaFase.setSpriteSheet("bproximaFase");
	bproximaFase.setPos(200, 700);
	
	if (!gRecursos.carregouSpriteSheet("praise"))
	{
		gRecursos.carregarSpriteSheet("praise", "Assets/imagens/praise.png",0, 18);
	}
	praise.setSpriteSheet("praise");
	praise.setPos(512, 384);



	

	if (!gRecursos.carregouMusica("musica"))
	{
		gRecursos.carregarMusica("musica", "Assets/sons/musica.mp3");
	}
	if (!gRecursos.carregouAudio("espada"))
	{
		gRecursos.carregarAudio("espada", "assets/sons/espada.mp3");
	}
	som.setAudio("espada");

	if (!gRecursos.carregouFonte("fonteRoboto"))
	{
		gRecursos.carregarFonte("fonteRoboto", "assets/fontes/Roboto-Bold.ttf", 32);
	}
	texto.setFonte("fonteRoboto");
	texto.setCor(0, 0, 0);



	faseAtual = 1;

	tela = stMenu;



	/*ofstream arqSaida1("matriz.txt");

	if (arqSaida1.is_open())
	{
		arqSaida1 << 10 << endl;
		arqSaida1 << 12 << ' ' << 12 << endl;
		for (int l = 0; l < 12; l++)
		{
			for (int c = 0; c < 12; c++)
			{
				mat[l][c] = rand() % 10;
			}
		}
		for (int l = 0; l < 12; l++)
		{
			for (int c = 0; c < 12; c++)
			{
				arqSaida1 << mat[l][c] << ' ';
			}
			arqSaida1 << endl;
		}

		arqSaida1.close();
	}
*/

	
	if (!gRecursos.carregouSpriteSheet("sprBool"))
	{
		gRecursos.carregarSpriteSheet("sprBool", "Assets/imagens/bool.png", 1, 2);
	}
	sprBool.setSpriteSheet("sprBool");

}

void Jogo::finalizar()
{
	
	gRecursos.descarregarTudo();

	uniFinalizar();
}

void Jogo::verificarMat()
{

	removerZeros();
	verificarColuna();
	verificarLinha();
	renovarMatriz();
	removerZeros();
}

int Jogo::verificarColuna()
{
	int encontrados, pontos = 0, x, y;
	for (x = 0; x < Tamx; x++)
	{
		encontrados = 1;
		for (y = 0; y < Tamy - 1; y++)
		{
			if (matriz[x][y] == matriz[x][y + 1] && matriz[x][y] != 0)
			{
				encontrados++;
			}
			else
			{
				if (encontrados > 2)
				{
					som.tocar();

					for (int i = 0; i < encontrados; i++)
					{
						bMat[x][y - i] = true;
					}
				}
				encontrados = 1;
			}
		}
		if (encontrados > 2) // trata a última coluna e linha
		{
			for (int i = 0; i < encontrados; i++)
			{
				bMat[x][y - i] = true;
			}
			encontrados = 1;
		}
	}
	return pontos;
}

int Jogo::verificarLinha()
{
	int encontrados, pontos = 0, x, y;
	for (y = 0; y < Tamy; y++)
	{
		encontrados = 1;
		for (x = 0; x < Tamx - 1; x++)
		{
			if (matriz[x][y] == matriz[x + 1][y])
			{
				encontrados++;
			}
			else
			{
				if (encontrados > 2)
				{
					som.tocar();
					for (int i = 0; i < encontrados; i++)
					{
						bMat[x - i][y] = true;
					}
				}
				encontrados = 1;
			}
		}
		if (encontrados > 2) // trata a última coluna e linha
		{
			for (int i = 0; i < encontrados; i++)
			{
				bMat[x - i][y] = true;
			}
			encontrados = 1;
		}
	}
	return pontos;
}

void Jogo::renovarMatriz()
{
	for (int y = 0; y < Tamy; y++)
	{
		for (int x = 0; x < Tamx; x++)
		{
			if (bMat[x][y])
			{
				bMat[x][y] = false;
				matriz[x][y] = 0;
				pontos += 10;
			}
		}
	}

}
void Jogo::removerZeros()
{
	for (int y = 0; y < Tamy; y++) {
		for (int x = 0; x < Tamx; x++) {

			if (matriz[x][y] == 0)
				matriz[x][y] = rand() % (10 + 1);
		}
	}
}

void Jogo::reiniciarMatriz()
{
	
	objetivo = 800;
	faseAtual = 1;
	desalocarMatriz();

	/*{
		ifstream arqEntrada2("recordes.txt");

		if (arqEntrada2.is_open()) {

			for (int i = 10; i > 0; i++)
			{
				arqEntrada2 >> recordes[i];
			}
			arqEntrada2.close();
		}

		for (int i = 0; i < 10; i++)
		{
			if (pontos <= recordes[i] && i > 0)
			{
				for (int c = 0; c < i; c++)
				{
					recordes[c] = recordes[c + 1];
				}
				recordes[i] = pontos;
			}


		}

		ofstream arqSaida1;
		arqSaida1.open("teste.txt");

		if (arqSaida1.is_open())
		{
			for (int i = 0; i < 10; i++)
			{
				arqSaida1 << i + 1 << ": " << recordes[i] << endl;
			}

			arqSaida1.close();
		}
	}*/



	pontos = 0;
}


void Jogo::executar()
{
	while (tela != stSair && !gEventos.sair)
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
			case stPontuacao: telaPontuacao();
				break;
			case stInstrucoes: telaInstrucoes();
				break;
			case stCreditos: telaCreditos();
				break;
			case stGameover: telaGameover();
				break;

			case stSair:
				break;
			}

			uniTerminarFrame();
		}

		uniTerminarFrame();
	}
}

void Jogo::desalocarMatriz()
{
	for (int y = 0; y < Tamy; y++)
		delete[] matriz[y];

	delete[] matriz;

	for (int y = 0; y < Tamy; y++)
		delete[] bMat[y];

	delete[] bMat;
}


void Jogo::mudarFase()
{
	faseAtual++;
	pontos = 0;
	objetivo = objetivo * 1.3;
	desalocarMatriz();

	if (faseAtual > 10) {

		Tamx = 12;
		Tamy = 12;

		matriz = new int*[Tamx];

		for (int x = 0; x < Tamx; x++)
		{
			matriz[x] = new int[Tamy];
		}
		bMat = new bool*[Tamx];
		for (int x = 0; x < Tamx; x++) {
			bMat[x] = new bool[Tamy];

		}
		for (int y = 0; y < Tamy; y++) {
			for (int x = 0; x < Tamx; x++) {
				matriz[x][y] = rand() % (10 + 1);
				bMat[x][y] = false;
			}
		}
	}
	else {

		ifstream arqEntrada("matriz" + to_string(faseAtual) + ".txt");

		if (arqEntrada.is_open()) {

			arqEntrada >> nItens >> Tamx >> Tamy;
			matriz = new int*[Tamx];
			for (int x = 0; x < Tamx; x++) {
				matriz[x] = new int[Tamy];

			}
			for (int y = 0; y < Tamy; y++)
			{
				for (int x = 0; x < Tamx; x++) {
					arqEntrada >> matriz[x][y];
				}

			}

			bMat = new bool*[Tamx];
			for (int x = 0; x < Tamx; x++) {
				bMat[x] = new bool[Tamy];

			}
			for (int y = 0; y < Tamy; y++)
			{
				for (int x = 0; x < Tamx; x++) {
					bMat[x][y] = false;
				}

			}
			arqEntrada.close();
		}
		else {
			finalizar();
			exit(0);
		}


		arqEntrada.close();
	}

	tela = stPontuacao;
}

void Jogo::telaMenu()
{
	menu.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	
	bPlay.atualizar();
	bPlay.desenhar();
	if (bPlay.estaClicado())
	{
		ifstream arqEntrada("matriz.txt");


		if (arqEntrada.is_open()) {



			arqEntrada >> nItens >> Tamx >> Tamy;
			matriz = new int*[Tamx];
			for (int x = 0; x < Tamx; x++) {
				matriz[x] = new int[Tamy];

			}
			for (int y = 0; y < Tamy; y++)
			{
				for (int x = 0; x < Tamx; x++) {
					arqEntrada >> matriz[x][y];
				}

			}
			if (!gRecursos.carregouSpriteSheet("itens"))
			{
				gRecursos.carregarSpriteSheet("itens", "Assets/imagens/cores.png", 1, nItens);
			}
			itens.setSpriteSheet("itens");
			//--------------------------
				//bool **bMat;
			bMat = new bool*[Tamx];
			for (int x = 0; x < Tamx; x++) {
				bMat[x] = new bool[Tamy];

			}
			for (int y = 0; y < Tamy; y++)
			{
				for (int x = 0; x < Tamx; x++) {
					bMat[x][y] = false;
				}

			}




			arqEntrada.close();
		}
		else {
			finalizar();
			exit(0);
		}
		tela = stJogo;
		resetar();
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

void Jogo::telaJogo()
{
	bVoltar.setPos(100, 700);
	texto.setEscala(1, 1);
	texto.setCor(0, 0, 0);
	int xtela, ytela;
	party.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);

	for (int x = 0; x < Tamx; x++) {
		for (int y = 0; y < Tamy; y++)
		{
			itens.setFrame(matriz[x][y]);
			xtela = dx + itemMeiaLargura + x * itemLargura;
			ytela = dy + itemMeiaAltura + y * itemAltura;
			itens.desenhar(xtela, ytela);
		}
	}
	xMat = (gMouse.x - dx) / itemLargura;
	yMat = (gMouse.y - dy) / itemAltura;

	if (gMouse.pressionou[BOTAO_MOUSE_ESQ])
	{
		xp = xMat;
		yp = yMat;
		trocando = true;
	}
	if (gMouse.soltou[BOTAO_MOUSE_ESQ])
	{
		xs = xMat;
		ys = yMat;
		
	}
	

	if (((xp == xs && ((ys - yp == 1) || (yp - ys == 1))) || (yp == ys && ((xs - xp == 1) || (xp - xs))))&& trocando == true) {
		aux1 = matriz[xp][yp];
		matriz[xp][yp] = matriz[xs][ys];
		matriz[xs][ys] = aux1;
		trocando = false;
	}

	verificarMat();
	//MOSTRAR MATRIZ BOOL

		/*for (int y = 0; y < Tamy; y++) {
			for (int x = 0; x < Tamx; x++)
			{
				sprBool.setFrame(bMat[x][y]);
				xtela = 0 + 12 + x * 24;
				ytela = 0 + 12 + y * 24;
				sprBool.desenhar(xtela, ytela);
			}
		}*/

		/*if (gTeclado.pressionou[TECLA_C]) {
			for (int y = 0; y < Tamy; y++)
			{
				for (int x = 0; x < Tamx; x++) {
					bMat[x][y] = true;
				}

			}
		}*/

	
	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		reiniciarMatriz();
		tela = stMenu;
	}
	

	texto.setString(to_string(pontos));
	texto.desenhar(610, 47);
	texto.setString(to_string(objetivo));
	texto.desenhar(645, 81);
	texto.setString(to_string(faseAtual));
	texto.desenhar(910, 81);

	if (pontos >= objetivo) {
		mudarFase();
	}
	if (gTeclado.pressionou[TECLA_J])
		mudarFase();
}

void Jogo::telaPontuacao()
{
	

	fundo.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	praise.atualizar();
	praise.desenhar();
	texto.setCor(255, 255, 0);
	texto.desenhar(512, 85);
	texto.setEscala(2, 2);
	texto.setString("Level " + to_string(faseAtual) + " Concluido!!! (Y)");

	bproximaFase.setPos(700, 650);
	bproximaFase.atualizar();
	bproximaFase.desenhar();
	if (bproximaFase.estaClicado())
	{
		bVoltar.setPos(100, 700);
		tela = stJogo;

	}
	bVoltar.setPos(350, 650);
	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		reiniciarMatriz();
		bVoltar.setPos(100, 700);
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
	

	creditos.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);

	

	bVoltar.setPos(350, 650);
	bVoltar.atualizar();
	bVoltar.desenhar();
	if (bVoltar.estaClicado())
	{
		bVoltar.setPos(100, 700);
		tela = stMenu;
		
	}
}

void Jogo::telaPause()
{
}

void Jogo::telaGameover()
{
}

void Jogo::resetar()
{
}

//void Jogo::telaNome()
//{
//	fundo.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
//	
//	string txt = "Escolha um nome:" 
//
//	gGraficos.desenharTexto(txt, 25, 25, 255, 255, 255, 255, 0, 0);
//
//}

