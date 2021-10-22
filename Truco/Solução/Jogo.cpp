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
	uniRandSetSemente(time(NULL));

	if (!gRecursos.carregouSpriteSheet("fundo"))
	{
		gRecursos.carregarSpriteSheet("fundo", "Assets/fundo.png");
	}fundo.setSpriteSheet("fundo");
	if (!gRecursos.carregouSpriteSheet("menubg"))
	{
		gRecursos.carregarSpriteSheet("menubg", "Assets/menubg.png");
	}menubg.setSpriteSheet("menubg");
	if (!gRecursos.carregouSpriteSheet("marca"))
	{
		gRecursos.carregarSpriteSheet("marca", "Assets/marca.png");
	}marca.setSpriteSheet("marca");

	if (!gRecursos.carregouSpriteSheet("contraflor"))
	{
		gRecursos.carregarSpriteSheet("contraflor", "Assets/Botoes/contraflor.png");
	}contraflor.setSpriteSheet("contraflor");

	if (!gRecursos.carregouSpriteSheet("contrafloreoresto"))
	{
		gRecursos.carregarSpriteSheet("contrafloreoresto", "Assets/Botoes/contrafloreoresto.png");
	}contrafloreoresto.setSpriteSheet("contrafloreoresto");

	if (!gRecursos.carregouSpriteSheet("envido"))
	{
		gRecursos.carregarSpriteSheet("envido", "Assets/Botoes/envido.png");
	}envido.setSpriteSheet("envido");

	if (!gRecursos.carregouSpriteSheet("faltaenvido"))
	{
		gRecursos.carregarSpriteSheet("faltaenvido", "Assets/Botoes/faltaenvido.png");
	}faltaenvido.setSpriteSheet("faltaenvido");

	if (!gRecursos.carregouSpriteSheet("flor1"))
	{
		gRecursos.carregarSpriteSheet("flor1", "Assets/Botoes/flor1.png");
	}flor1.setSpriteSheet("flor1");

	if (!gRecursos.carregouSpriteSheet("flor2"))
	{
		gRecursos.carregarSpriteSheet("flor2", "Assets/Botoes/flor2.png");
	}flor2.setSpriteSheet("flor2");

	if (!gRecursos.carregouSpriteSheet("realenvido"))
	{
		gRecursos.carregarSpriteSheet("realenvido", "Assets/Botoes/realenvido.png");
	}realenvido.setSpriteSheet("realenvido");

	if (!gRecursos.carregouSpriteSheet("retruco"))
	{
		gRecursos.carregarSpriteSheet("retruco", "Assets/Botoes/retruco.png");
	}retruco.setSpriteSheet("retruco");

	if (!gRecursos.carregouSpriteSheet("truco"))
	{
		gRecursos.carregarSpriteSheet("truco", "Assets/Botoes/truco.png");
	}truco.setSpriteSheet("truco");

	if (!gRecursos.carregouSpriteSheet("vale4"))
	{
		gRecursos.carregarSpriteSheet("vale4", "Assets/Botoes/vale4.png");
	}vale4.setSpriteSheet("vale4");

	if (!gRecursos.carregouSpriteSheet("caixa"))
	{
		gRecursos.carregarSpriteSheet("caixa", "Assets/caixa.png");
	}caixa.setSpriteSheet("caixa");

	if (!gRecursos.carregouSpriteSheet("box"))
	{
		gRecursos.carregarSpriteSheet("box", "Assets/box.png");
	}box.setSpriteSheet("box");

	if (!gRecursos.carregouSpriteSheet("moeda"))
	{
		gRecursos.carregarSpriteSheet("moeda", "Assets/moeda.png");
	}moeda.setSpriteSheet("moeda");
	

	if (!gRecursos.carregouSpriteSheet("controlesSom"))
	{
		gRecursos.carregarSpriteSheet("controlesSom", "Assets/controlesSom.png");
	}controlesSom.setSpriteSheet("controlesSom");


	if (!gRecursos.carregouAudio("cartaClique"))
	{
		gRecursos.carregarAudio("cartaClique", "Assets/Sons/carta.ogg");
	}cartaClique.setAudio("cartaClique");

	if (!gRecursos.carregouAudio("menuClique"))
	{
		gRecursos.carregarAudio("menuClique", "Assets/Sons/menu.ogg");
	}menuClique.setAudio("menuClique");

	if (!gRecursos.carregouMusica("musica"))
	{
		gRecursos.carregarMusica("musica", "Assets/Sons/musica.mp3");
	}


	/////////////////////////////////////////////////


	if (!gRecursos.carregouSpriteSheet("bsolo"))
	{
		gRecursos.carregarSpriteSheet("bsolo", "Assets/Botoes/bsolo.png");
	}bsolo.setSpriteSheet("bsolo");

	if (!gRecursos.carregouSpriteSheet("botaoBranco"))
	{
		gRecursos.carregarSpriteSheet("botaoBranco", "Assets/Botoes/botaoBranco.png");
	}botaoBranco.setSpriteSheet("botaoBranco");
	botaoBranco.setEscala(1.2, 1.2);


	if (!gRecursos.carregouSpriteSheet("bjogar"))
	{
		gRecursos.carregarSpriteSheet("bjogar", "Assets/Botoes/jogar.png", 2);
	}bjogar.setSpriteSheet("bjogar");

	if (!gRecursos.carregouSpriteSheet("bregras"))
	{
		gRecursos.carregarSpriteSheet("bregras", "Assets/Botoes/regras.png", 2);
	}bregras.setSpriteSheet("bregras");


	if (!gRecursos.carregouSpriteSheet("bsolo"))
	{
		gRecursos.carregarSpriteSheet("bsolo", "Assets/Botoes/bsolo.png");
	}bsolo.setSpriteSheet("bsolo");

	if (!gRecursos.carregouSpriteSheet("correrTruco"))
	{
		gRecursos.carregarSpriteSheet("correrTruco", "Assets/Botoes/correrTruco.png");
	}correrTruco.setSpriteSheet("correrTruco");

	if (!gRecursos.carregouSpriteSheet("bduplas"))
	{
		gRecursos.carregarSpriteSheet("bduplas", "Assets/Botoes/bduplas.png");
	}bsolo.setSpriteSheet("bduplas");

	if (!gRecursos.carregouSpriteSheet("verso"))
	{
		gRecursos.carregarSpriteSheet("verso", "Assets/Cartas/verso.png");
	}verso.setSpriteSheet("verso");
	verso.setEscala(0.7, 0.7);

	if (!gRecursos.carregouSpriteSheet("colisao"))
	{
		gRecursos.carregarSpriteSheet("colisao", "Assets/Cartas/colisao.png"); // antigo Transparente
	}for (int i = 0; i < 12; i++)
	{
		card[i].setSpriteSheet("colisao");

	}

	if (!gRecursos.carregouSpriteSheet("base"))
	{
		gRecursos.carregarSpriteSheet("base", "Assets/Cartas/base.png");
	}for (int i = 0; i < 4; i++)
	{
		base[i].setSpriteSheet("base");
	}



	//cada botão tem 40 de altura

	correrTruco.setPos(gJanela.getLargura() / 2 - 50, gJanela.getAltura() / 2 + 200);

	truco.setPos(gJanela.getLargura() / 2 - 50, gJanela.getAltura() / 2 + 280);
	retruco.setPos(gJanela.getLargura() / 2 - 50, gJanela.getAltura() / 2 + 320);
	vale4.setPos(gJanela.getLargura() / 2 - 50, gJanela.getAltura() / 2 + 360);

	envido.setPos(gJanela.getLargura() - 150, gJanela.getAltura() / 2);
	realenvido.setPos(gJanela.getLargura() - 150, gJanela.getAltura() / 2);
	faltaenvido.setPos(gJanela.getLargura() - 150, gJanela.getAltura() / 2 + 45);

	flor1.setPos(150, gJanela.getAltura() / 2);
	flor2.setPos(150, gJanela.getAltura() / 2+50);
	contraflor.setPos(150, gJanela.getAltura() / 2);
	contrafloreoresto.setPos(150, gJanela.getAltura() / 2 + 45);


	if (!gRecursos.carregouFonte("f1"))
	{
		gRecursos.carregarFonte("f1", "Assets/Fontes/f1.otf", 32);
	}for (int i = 0; i < 10; i++)
	{
		texto[i].setFonte("f1");
		
	}

	if (!gRecursos.carregouFonte("f2"))
	{
		gRecursos.carregarFonte("f2", "Assets/Fontes/kenvector_future.ttf", 20);
	}for (int i = 0; i < 10; i++)
	{
		texto2[i].setFonte("f2");
		texto2[i].setCor(0, 0, 0);
	}

	nVezesJogadas = 0;
	arq.open("vezesJogadas.dat", ios::in, ios::binary);
	arq.read(reinterpret_cast<char*> (&nVezesJogadas), sizeof(int));	arq.close();

	posX[0] = gJanela.getLargura() / 2 - 170;
	posX[1] = gJanela.getLargura() / 2 - 55;
	posX[2] = gJanela.getLargura() / 2 + 55;
	posX[3] = gJanela.getLargura() / 2 + 170;
	posY = gJanela.getAltura() / 2;


	venceDuelo[0] = venceDuelo[1] = 0;
	
	nJogadores = 4;
	xDuelos = 0;
	vez = 0;
	score1 = 0;
	score2 = 0;
	vencedor = 0;
	contPos = 0;
	contx = conty = 0;
	for (int i = 0; i < 4; i++)
	{
		cont[i] = 0;
	}
	criarBaralho();
	iniciarMesa();
	tela = Dev;
	//tela = Menu;
}

void Jogo::finalizar()
{
	//	O resto da finalização vem aqui (provavelmente, em ordem inversa a inicialização)!
	//	...

	uniFinalizar();
}

void Jogo::executar()
{
	gMusica.tocar("musica", true);
	gMusica.setVolumeGlobal(3);
	if (gMusica.estaPausado()) { gMusica.tocar("musica", true); }
	gMusica.irParaOTempo(0.04);
	while (!gEventos.sair)
	{
		uniIniciarFrame();

		if (gTeclado.pressionou[TECLA_ESQ]) { gMusica.pausar(); }
		if (gTeclado.pressionou[TECLA_DIR]) { gMusica.continuar(); }

		if (gTeclado.segurando[TECLA_CIMA]) { gMusica.setVolumeGlobal(gMusica.getVolumeGlobal() + 0.1); }
		if (gTeclado.segurando[TECLA_BAIXO]) { gMusica.setVolumeGlobal(gMusica.getVolumeGlobal() - 0.1); }


		switch (tela)
		{
		case Mesa: telaJogo();
			break;
		case Menu: telaMenu();
			break;
		case Dev: dev();
			break;
		case Regras: telaRegras();
			break;
		case EndGame: telaEndGame();
			break;
		}

		if (gTeclado.pressionou[TECLA_ESC]) { vale = 1; score1 = score2 = 0; reset(); tela = Menu; }

		uniTerminarFrame();

	}
}

void Jogo::iniciarMesa()
{
	
	vale = 1;
	venceDuelo[0] = venceDuelo[1] = 0;
	j = new Jogador * [nJogadores];
	for (int i = 0; i < nJogadores; i++)
	{
		j[i] = new Jogador("Jogador " + to_string(i + 1));

	}
	if (nJogadores == 4)
	{
		ordem.push(uniRandEntre(1, 4));
		auxvez = ordem.front();
		switch (ordem.front())
		{
		case 1: ordem.push(2); ordem.push(3); ordem.push(4); break;
		case 2: ordem.push(3); ordem.push(4); ordem.push(1); break;
		case 3: ordem.push(4); ordem.push(1); ordem.push(2); break;
		case 4: ordem.push(1); ordem.push(2); ordem.push(3); break;
		}
		pegarCartas(nJogadores);
	}



}

Carta Jogo::duelo(Carta c1, Carta c2)
{//antes de usar este metodo, testar se c1==c2;
	if (c1 > c2) { return c1; }
	else { return c2; }
}
Carta Jogo::duelo(Carta c1, Carta c2, Carta c3, Carta c4)
{//antes de usar este metodo, testar se c1==c2;

	Carta maior = c1;

	if (maior < c2) { maior = c2; }

	if (maior < c3) { maior = c3; }

	if (maior < c4) { maior = c4; }

	return maior;

}

int Jogo::duelo(Carta* c[4])
{
	Carta* maior = c[0];
	int vencedor;
	vencedor = 1;
	if (auxvez == 1 || auxvez == 3) { dupla = 1; }
	else { dupla = 2; }

	if (*maior < *c[1]) {
		maior = c[1]; vencedor
			= 2;
	}

	if (*maior < *c[2]) {
		maior = c[2]; vencedor
			= 3;
	}

	if (*maior < *c[3]) {
		maior = c[3]; vencedor
			= 4;
	}
	if (dupla == 1 && (vencedor == 1 || vencedor == 3)) { vencedor = 1; }
	else if (dupla == 1) { vencedor = 2; }
	if (dupla == 2 && (vencedor == 1 || vencedor == 3)) { vencedor = 2; }
	else if (dupla == 2) { vencedor = 1; }
	return (vencedor - 1);
}

void Jogo::criarBaralho()
{
	for (int i = 0; i < 12; i++)
	{
		if (i == 7 || i == 8) {}
		else {
			c = new Carta(i + 1, 'o');
			baralho.push(c);
		}
	}

	for (int i = 0; i < 12; i++)
	{
		if (i == 7 || i == 8) {}
		else {
			c = new Carta(i + 1, 'c');
			baralho.push(c);
		}
	}

	for (int i = 0; i < 12; i++)
	{
		if (i == 7 || i == 8) {}
		else {
			c = new Carta(i + 1, 'p');
			baralho.push(c);
		}
	}

	for (int i = 0; i < 12; i++)
	{
		if (i == 7 || i == 8) {}
		else {
			c = new Carta(i + 1, 'e');
			baralho.push(c);
		}
	}



	baralho.embaralhar();
}

void Jogo::pegarCartas(int nJogadores)
{

	if (nJogadores == 2) {

		for (int i = 0; i < 3; i++)
		{
			maoP1.push_front(baralho.pull());
		}
		for (int i = 0; i < 3; i++)
		{
			maoP2.push_front(baralho.pull());
		}
		itP1 = maoP1.begin();

		itP2 = maoP2.begin();


	}
	else if (nJogadores == 4) {
		for (int i = 0; i < 3; i++)
		{
			maoP1.push_front(baralho.pull());
		}
		for (int i = 0; i < 3; i++)
		{
			maoP2.push_front(baralho.pull());
		}
		for (int i = 0; i < 3; i++)
		{
			maoP3.push_front(baralho.pull());
		}
		for (int i = 0; i < 3; i++)
		{
			maoP4.push_front(baralho.pull());

		}
		itP1 = maoP1.begin();
		itP2 = maoP2.begin();
		itP3 = maoP2.begin();
		itP4 = maoP2.begin();

		y1 = 690;
		y2 = 70;
		x1 = 60;
		x2 = 730;

		x[0] = x[1] = x[2] = x[9] = x[10] = x[11] = x1;
		x[3] = x[4] = x[5] = x[6] = x[7] = x[8] = x2;

		y[0] = y[1] = y[2] = y[3] = y[4] = y[5] = y1;
		y[9] = y[10] = y[11] = y[6] = y[7] = y[8] = y2;

		x[1] += 85;
		x[4] += 85;
		x[10] += 85;
		x[7] += 85;

		x[2] += 170;
		x[5] += 170;
		x[11] += 170;
		x[8] += 170;

		//x1,y2 - - - - - - - x2,y2     |	9,10,11    	6,7,8
		//								|	
		//								|	
		//								|	
		//x1,y1 - - - - - - - x2, y1	|	0,1,2  		3,4,5
		card[0].setPos(x1, y1);
		card[1].setPos(x1 + 85, y1);
		card[2].setPos(x1 + 170, y1);
		card[3].setPos(x2, y1);
		card[4].setPos(x2 + 85, y1);
		card[5].setPos(x2 + 170, y1);
		card[6].setPos(x2, y2);
		card[7].setPos(x2 + 85, y2);
		card[8].setPos(x2 + 170, y2);
		card[9].setPos(x1, y2);
		card[10].setPos(x1 + 85, y2);
		card[11].setPos(x1 + 170, y2);
	}


}

void Jogo::reset()
{
	posX[0] = gJanela.getLargura() / 2 - 170;
	posX[1] = gJanela.getLargura() / 2 - 55;
	posX[2] = gJanela.getLargura() / 2 + 55;
	posX[3] = gJanela.getLargura() / 2 + 170;

	venceDuelo[0] = venceDuelo[1] = 0;
	contPos = contx = conty = vez = 0;
	vale = 1;

	while (!ordem.empty())
	{
		ordem.pop();
	}
	for (int i = 0; i < 4; i++)
	{
		cont[i] = false;
	}

	maoP1.clear();
	maoP2.clear();
	maoP3.clear();
	maoP4.clear();
	criarBaralho();

	ordem.push(uniRandEntre(1, 4));
	auxvez = ordem.front();

	switch (ordem.front())
	{
	case 1: ordem.push(2); ordem.push(3); ordem.push(4); break;
	case 2: ordem.push(3); ordem.push(4); ordem.push(1); break;
	case 3: ordem.push(4); ordem.push(1); ordem.push(2); break;
	case 4: ordem.push(1); ordem.push(2); ordem.push(3); break;
	}

	pegarCartas(nJogadores);


}

void Jogo::desenharVez()
{
	switch (ordem.front())
	{
	case 1:marca.desenhar(150, 680); break;
	case 2:marca.desenhar(820, 680); break;
	case 3:marca.desenhar(820, 80); break;
	case 4:marca.desenhar(150, 80); break;
	}
}

void Jogo::desenharTextosDaMesa()
{
	for (int i = 0; i < nJogadores; i++) {
		texto2[i].setString(j[i]->getNome());
		texto2[i].setEscala(0.9, 0.9);
	}

	texto[4].setString("O JOGO VALE:  " + to_string(vale));
	texto2[9].setString("Dupla 1:  " + to_string(score1) + "\n\nDupla 2:  " + to_string(score2));


	texto2[0].desenhar(x1 + 20, y1 - 100);
	texto2[1].desenhar(x2 + 20, y1 - 100);
	texto2[2].desenhar(x2 + 20, y2 + 100);
	texto2[3].desenhar(x1 + 20, y2 + 100);
	texto[4].desenhar(gJanela.getLargura() / 2 - 50, gJanela.getAltura() / 2 + 250);
	texto2[9].desenhar(gJanela.getLargura() / 2 + 420, gJanela.getAltura() / 2 + 150);
	
}

void Jogo::desenharCartas()
{
	itP1 = maoP1.begin();
	for (int k = 0; k < 3; k++) {

		(*itP1)->desenhar(x[contx], y[conty]);
		contx++; conty++;

		for (int i = 0; i < 4; i++)
		{
			if (uniTestarColisao((*itP1)->getSprite(), (*itP1)->getX(), (*itP1)->getY(), (*itP1)->getR(), base[i], posX[i], posY, 0))
			{
				disputa[i] = (*itP1);
				cont[i] = true;

				cartadel[0] = k;
			}
		}itP1++;
	}


	itP2 = maoP2.begin();
	for (int k = 0; k < 3; k++) {

		(*itP2)->desenhar(x[contx], y[conty]);
		contx++; conty++;

		for (int i = 0; i < 4; i++)
		{
			if (uniTestarColisao((*itP2)->getSprite(), (*itP2)->getX(), (*itP2)->getY(), (*itP2)->getR(), base[i], posX[i], posY, 0))
			{
				disputa[i] = (*itP2);
				cont[i] = true;

				cartadel[1] = k;
			}
		}itP2++;
	}


	itP3 = maoP3.begin();
	for (int k = 0; k < 3; k++) {

		(*itP3)->desenhar(x[contx], y[conty]);
		contx++; conty++;

		for (int i = 0; i < 4; i++)
		{
			if (uniTestarColisao((*itP3)->getSprite(), (*itP3)->getX(), (*itP3)->getY(), (*itP3)->getR(), base[i], posX[i], posY, 0))
			{
				disputa[i] = (*itP3);
				cont[i] = true;

				cartadel[2] = k;
			}
		}itP3++;
	}


	itP4 = maoP4.begin();
	for (int k = 0; k < 3; k++)
	{
		(*itP4)->desenhar(x[contx], y[conty]);
		contx++; conty++;

		for (int i = 0; i < 4; i++)
		{
			if (uniTestarColisao((*itP4)->getSprite(), (*itP4)->getX(), (*itP4)->getY(), (*itP4)->getR(), base[i], posX[i], posY, 0))
			{
				disputa[i] = (*itP4);
				cont[i] = true;

				cartadel[3] = k;
			}
		}itP4++;
	}


	contx = conty = 0;
}

void Jogo::colisaoDasCartas()
{
	for (int i = 0; i < 12; i++)
	{
		card[i].atualizar();
		card[i].desenhar();

		if (i < 3 && card[i].estaClicado() && ordem.front() == 1) {
			
			cartaClique.tocar();
			card[i].setPos(-100, -100);
			x[i] = posX[contPos];
			x[i] = posX[contPos];
			y[i] = posY;
			contPos++;

			ordem.push(ordem.front());
			ordem.pop();

		}

		else if (i > 2 && i < 6 && card[i].estaClicado() && ordem.front() == 2) {
			
			cartaClique.tocar();
			card[i].setPos(-100, -100);
			x[i] = posX[contPos];
			y[i] = posY;

			contPos++;
			ordem.push(ordem.front());
			ordem.pop();
		}

		else if (i > 5 && i < 9 && card[i].estaClicado() && ordem.front() == 3) {
			
			cartaClique.tocar();
			card[i].setPos(-100, -100);

			x[i] = posX[contPos];
			y[i] = posY;

			contPos++;
			ordem.push(ordem.front());
			ordem.pop();
		}

		else if (i > 8 && i < 12 && card[i].estaClicado() && ordem.front() == 4) {
			
			cartaClique.tocar();
			card[i].setPos(-100, -100);
			x[i] = posX[contPos];
			y[i] = posY;

			contPos++;
			ordem.push(ordem.front());
			ordem.pop();
		}
	}
	if (contPos > 4) { contPos = 0; }
}

void Jogo::iniciarRodada()
{

	for (int i = 0; i < 4; i++)
	{
		switch (i) {
		case 0: switch (cartadel[i])
		{
		case 0: x[0] = y[0] = -100; break;
		case 1: x[1] = y[1] = -100; break;
		case 2: x[2] = y[2] = -100; break;
		}break;

		case 1: switch (cartadel[i])
		{
		case 0: x[3] = y[3] = -100; break;
		case 1: x[4] = y[4] = -100; break;
		case 2: x[5] = y[5] = -100; break;
		}break;

		case 2: switch (cartadel[i])
		{
		case 0: x[6] = y[6] = -100; break;
		case 1: x[7] = y[7] = -100; break;
		case 2: x[8] = y[8] = -100; break;
		}break;

		case 3: switch (cartadel[i])
		{
		case 0: x[9] = y[9] = -100; break;
		case 1: x[10] = y[10] = -100; break;
		case 2: x[11] = y[11] = -100; break;
		}break;
		}
	}

	for (int i = 0; i < 4; i++)
	{
		cont[i] = false;
	}
	
	posX[0] = gJanela.getLargura() / 2 - 170;
	posX[1] = gJanela.getLargura() / 2 - 55;
	posX[2] = gJanela.getLargura() / 2 + 55;
	posX[3] = gJanela.getLargura() / 2 + 170;
	contPos = 0;
}

int Jogo::calculaEnvido(int nJogador)
{
	switch (nJogador)
	{
	case 1: itP1 = maoP1.begin();

		for (int i = 0; i < 3; i++)
		{
			np[i] = (*itP1)->getNaipe();
			nums[i] = (*itP1)->getNum();
			if (nums[i] > 9) { nums[i] = 0; }
			itP1++;
		}
		if (np[0] == np[1]) { return nums[0] + nums[1] + 20; }
		else if (np[0] == np[2]) { return nums[0] + nums[2] + 20; }
		else if (np[1] == np[2]) { return nums[1] + nums[2] + 20; }
		else {
			Maior = nums[0];
			for (int i = 1; i < 3; i++)
			{
				if (nums[i] > Maior) { Maior = nums[i]; }
			}
			return Maior;
		}
		break;

	case 2: itP2 = maoP2.begin();

		for (int i = 0; i < 3; i++)
		{
			np[i] = (*itP2)->getNaipe();
			nums[i] = (*itP2)->getNum();
			if (nums[i] > 9) { nums[i] = 0; }
			itP2++;
		}
		if (np[0] == np[1]) { return nums[0] + nums[1] + 20; }
		else if (np[0] == np[2]) { return nums[0] + nums[2] + 20; }
		else if (np[1] == np[2]) { return nums[1] + nums[2] + 20; }
		else {
			Maior = nums[0];
			for (int i = 1; i < 3; i++)
			{
				if (nums[i] > Maior) { Maior = nums[i]; }
			}
			return Maior;
		}
		break;

	case 3: itP3 = maoP3.begin();

		for (int i = 0; i < 3; i++)
		{
			np[i] = (*itP3)->getNaipe();
			nums[i] = (*itP3)->getNum();
			if (nums[i] > 9) { nums[i] = 0; }
			itP3++;
		}
		if (np[0] == np[1]) { return nums[0] + nums[1] + 20; }
		else if (np[0] == np[2]) { return nums[0] + nums[2] + 20; }
		else if (np[1] == np[2]) { return nums[1] + nums[2] + 20; }
		else {
			Maior = nums[0];
			for (int i = 1; i < 3; i++)
			{
				if (nums[i] > Maior) { Maior = nums[i]; }
			}
			return Maior;
		}
		break;

	case 4: itP4 = maoP4.begin();

		for (int i = 0; i < 3; i++)
		{
			np[i] = (*itP4)->getNaipe();
			nums[i] = (*itP4)->getNum();
			if (nums[i] > 9) { nums[i] = 0; }
			itP4++;
		}
		if (np[0] == np[1]) { return nums[0] + nums[1] + 20; }
		else if (np[0] == np[2]) { return nums[0] + nums[2] + 20; }
		else if (np[1] == np[2]) { return nums[1] + nums[2] + 20; }
		else {
			Maior = nums[0];
			for (int i = 1; i < 3; i++)
			{
				if (nums[i] > Maior) { Maior = nums[i]; }
			}
			return Maior;
		}
		break;
	}
}

int Jogo::calculaFlor(int nJogador)
{
	switch (nJogador)
	{
	case 1: itP1 = maoP1.begin();

		for (int i = 0; i < 3; i++)
		{
			if ((*itP1)->getNum() > 9) { Numeros[i] = 0; }
			else { Numeros[i] = (*itP1)->getNum(); }
		}
		Resultado = (Numeros[0] + Numeros[1] + Numeros[2]);
		return Resultado;
		break;

	case 2: itP2 = maoP2.begin();

		for (int i = 0; i < 3; i++)
		{
			if ((*itP2)->getNum() > 9) { Numeros[i] = 0; }
			else { Numeros[i] = (*itP2)->getNum(); }
		}
		Resultado = (Numeros[0] + Numeros[1] + Numeros[2]);
		return Resultado;
		break;

	case 3: itP3 = maoP3.begin();

		for (int i = 0; i < 3; i++)
		{
			if ((*itP3)->getNum() > 9) { Numeros[i] = 0; }
			else { Numeros[i] = (*itP3)->getNum(); }
		}
		Resultado = (Numeros[0] + Numeros[1] + Numeros[2]);
		return Resultado;
		break;

	case 4: itP4 = maoP4.begin();

		for (int i = 0; i < 3; i++)
		{
			if ((*itP4)->getNum() > 9) { Numeros[i] = 0; }
			else { Numeros[i] = (*itP4)->getNum(); }
		}
		Resultado = (Numeros[0] + Numeros[1] + Numeros[2]);
		return Resultado;
		break;
	}
}

bool Jogo::testaFlor(int nJogador)
{
	switch (nJogador)
	{
	case 1: itP1 = maoP1.begin();

		for (int i = 0; i < 3; i++)
		{
			Naipes[i] = (*itP1)->getNaipe();
		}
		if (Naipes[0] == Naipes[1] == Naipes[2]) { return true; }
		else {
			return false;
		}
		break;

	case 2: itP2 = maoP2.begin();

		for (int i = 0; i < 3; i++)
		{
			Naipes[i] = (*itP2)->getNaipe();
		}
		if (Naipes[0] == Naipes[1] == Naipes[2]) { return true; }
		else {
			return false;
		}
		break;

	case 3: itP3 = maoP3.begin();

		for (int i = 0; i < 3; i++)
		{
			Naipes[i] = (*itP3)->getNaipe();
		}
		if (Naipes[0] == Naipes[1] == Naipes[2]) { return true; }
		else {
			return false;
		}
		break;

	case 4: itP4 = maoP4.begin();

		for (int i = 0; i < 3; i++)
		{
			Naipes[i] = (*itP4)->getNaipe();
		}
		if (Naipes[0] == Naipes[1] == Naipes[2]) { return true; }
		else {
			return false;
		}
		break;
	}
}

void Jogo::desenharFlor()
{
	bool flores[4];
	int qmflor; //qmFlor controla qm é flor, se for 1 ou 2, é a dupla correspondente, 3, ambas.
	for (int i = 0; i < 4; i++)
	{
		flores[i] = testaFlor(i + 1);
		if (flores[i] == true) { contNFlores++; }
	}
	if (contNFlores == 0) { return; }
	else {
		if (!flores[0] && !flores[2]) { qmflor = 2; }
		else if (!flores[1] && !flores[3]) { qmflor = 1; }
		else { qmflor = 3; }

		switch (qmflor)
		{
		case 1: botaoBranco.desenhar(gJanela.getLargura() / 2, 120);
			texto2[9].setString("Dupla 1 pode\npedir flor!"); texto2[9].desenhar(gJanela.getLargura() / 2, 120);
			flor1.desenhar();
			break;
		}


	}
	gDebug.depurar("contFlor ", contNFlores);
	
}

void Jogo::testarVitoria(int nRodadas)
{
	switch (nRodadas)
	{
	case 2: if (venceDuelo[0] == 2 || venceDuelo[1] == 2) {
		if (venceDuelo[0] > venceDuelo[1]) {
			xDuelos = 3;
			score1 += vale;
		}
		if (venceDuelo[1] > venceDuelo[0]) {
			xDuelos = 3;
			score2 += vale;
		}
	}break;


	case 3:
		if (venceDuelo[0] > venceDuelo[1]) {
			score1 += vale;
		}
		if (venceDuelo[1] > venceDuelo[0]) {
			score2 += vale;

		}break;

	default: return;  break;
	}
}

void Jogo::fimDaPartida(int dupla)
{
	texto[0].setString("				A DUPLA " + to_string(dupla) + "\nFOI A VENCEDORA!\n\n\nPontos Dupla 1: " + to_string(score1) + "\nPontos Dupla 2: " + to_string(score2));

	nVezesJogadas++;	arq.open("vezesJogadas.dat", ios::out, ios::binary);	arq.write(reinterpret_cast<const char*> (&nVezesJogadas), sizeof(int));
	arq.close();
	tela = EndGame;
}

void Jogo::telaJogo()
{
	fundo.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);

	controlesSom.setEscala(0.4, 0.4);
	controlesSom.desenhar(gJanela.getLargura() - 35, 50);

	desenharVez();
	for (int i = 0; i < 4; i++) { base[i].desenhar(posX[i], posY); }
	desenharTextosDaMesa();
	desenharCartas();
	colisaoDasCartas();
	desenharFlor();

	if (vez > 4) { vez = 0; }

	

	if (gTeclado.pressionou[TECLA_G]) { xDuelos = 1; }

	if (vale == 1) {  truco.desenhar(); }
	if (vale == 2) {  retruco.desenhar(); }
	if (vale == 3) {  vale4.desenhar(); }

	if (truco.estaClicado() && vale == 1) {
		vale = 2; menuClique.tocar();
		if (ordem.front() == 1 || ordem.front() == 3) { pediuTruco = 1; }
		if (ordem.front() == 2 || ordem.front() == 4) { pediuTruco = 2; }
	}
	if (retruco.estaClicado() && vale == 2 && (ordem.front()%2)!= (pediuTruco%2)) {
		vale = 3; menuClique.tocar();
		if (ordem.front() == 1 || ordem.front() == 3) { pediuTruco = 1; }
		if (ordem.front() == 2 || ordem.front() == 4) { pediuTruco = 2; }
	}
	if (vale4.estaClicado() && vale == 3 && (ordem.front() % 2) != (pediuTruco % 2)) {
		vale = 4; menuClique.tocar();
		if (ordem.front() == 1 || ordem.front() == 3) { pediuTruco = 1; }
		if (ordem.front() == 2 || ordem.front() == 4) { pediuTruco = 2; }
	}

	if (vale != 1) { correrTruco.desenhar();
	botaoBranco.desenhar(gJanela.getLargura() / 2, 60);
	
	switch (vale)
	{
	case 2: texto2[6].setString("Dupla " + to_string(pediuTruco) + " Pediu\nTruco!");
		texto2[6].desenhar(gJanela.getLargura() / 2, 60);
		break;

	case 3: texto2[6].setString("Dupla " + to_string(pediuTruco) + " Pediu\nRe-Truco!");
		texto2[6].desenhar(gJanela.getLargura() / 2, 60);
		break;

	case 4: texto2[6].setString("Dupla " + to_string(pediuTruco) + " Pediu\nVale 4!");
		texto2[6].desenhar(gJanela.getLargura() / 2, 60);
		break;
	}
	}

	if (correrTruco.estaClicado()) {
		switch (vale)
		{
		case 2: if (pediuTruco == 1) { score1 += 1; }
			  else if (pediuTruco == 2) { score2 += 1; } 
			  xDuelos = 0; reset(); break;

		case 3: if (pediuTruco == 1) { score1 += 2; }
			  else if (pediuTruco == 2) { score2 += 2; } 
			  xDuelos = 0; reset(); break;

		case 4: if (pediuTruco == 1) { score1 += 3; }
			  else if (pediuTruco == 2) { score2 += 3; } 
			  xDuelos = 0; reset(); break;
		}
	}

	correrTruco.atualizar();
	truco.atualizar();
	retruco.atualizar();
	vale4.atualizar();
	//flor1.atualizar();
	//desenharFlor();


	for (int i = 0; i < venceDuelo[0]; i++)
	{
		moeda.desenhar(gJanela.getLargura() / 2 + 370, gJanela.getAltura() / 2 - 40);
	}
	for (int i = 0; i < venceDuelo[1]; i++)
	{
		moeda.desenhar(gJanela.getLargura() / 2 + 370, gJanela.getAltura() / 2 + 65);
	}

	if (cont[3]) {


		venceDuelo[duelo(disputa)]++;
		xDuelos++;

		testarVitoria(xDuelos);

		if (xDuelos < 3) {
			iniciarRodada();
		}
		else if (xDuelos == 3)
		{
			xDuelos = 0;
			reset();

		}

	}

	if (score1 > 23) { fimDaPartida(1); }
	if (score2 > 23) { fimDaPartida(2); }


	if (gTeclado.pressionou[TECLA_K]) { score1 += 23; }
	if (gTeclado.pressionou[TECLA_L]) { score2 += 23; }
	

}

void Jogo::telaMenu()
{
	menubg.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	bregras.setPos(gJanela.getLargura() / 2 + 200, gJanela.getAltura() / 2);
	bjogar.setPos(gJanela.getLargura() / 2 - 200, gJanela.getAltura() / 2);
	controlesSom.setEscala(1, 1);
	controlesSom.desenhar(100, gJanela.getAltura() - 100);

	bjogar.desenhar();
	bjogar.atualizar();

	bregras.desenhar();
	bregras.atualizar();

	if (bjogar.estaClicado()) {
		menuClique.tocar();
		tela = Mesa;
	}

	if (bregras.estaClicado()) {
		menuClique.tocar();
		tela = Regras;
	}



	texto[9].setEscala(2, 2);
	texto[9].setString("VEZES JOGADAS: " + to_string(nVezesJogadas));
	texto[9].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2 + 340);
}



void Jogo::telaEndGame()
{
	texto[1].setString("PRESSIONE \"ENTER\" PARA VOLTAR AO MENU");
	texto[1].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2 + 200);
	texto[0].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2 - 200);
	if (gTeclado.pressionou[TECLA_ENTER]) {
		score1 = score2 = 0;
		reset(); tela = Menu;
	}

	
}

void Jogo::dev()
{

	texto[8].setString("ATENCAO:\nPara facilitar avaliacoes e testes este programa tem alguns atalhos:\nK: +23 pontos para Dupla 1\nL: +23 pontos para Dupla 2\n\nPressione \"ENTER\" para continuar.\n\n\nPara facilitar a navegacao dentro do codigo,\n vide o arquivo de texto \"Elementos Avaliativos.txt\"");
	texto[8].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	if (gTeclado.pressionou[TECLA_ENTER]) {
		tela = Menu;
	}
}

void Jogo::telaRegras()
{
	
	texto[1].setString("As cartas de truco seguem uma ordem de grandeza unica, sendo ela:\n4 - 5 - 6 - 7 - 10 - 11 - 12 - 1 - 2 - 3 - 7 de ouros - 7 de espadas - 1 de paus - 1 de espadas.\n*Nao utiliza-se 8 e 9.\n\nJoga-se em 4 jogadores, duas duplas, 1 jogadore eh sorteado para comecar.\n\nCada jogador tem 3 cartas onde farao um melhor de 3, jogando uma carta por vez,\npara determinar qual dupla sera vencedora. Cada rodada a maior carta vence.\n\n*Em caso de empates, a primeira carta com o valor mais alto jogado vence, nao\neh a regra original do Truco, mas eh a deste jogo.\n\nAo terminar o melhor de tres, a dupla vencedora leva os pontos da rodada e inicia-se\numa nova mao.\n\nPontos e Truco:\n\nCada rodada vale 1 ponto inicialmente e pode-se aumentar ate 4.\nAumenta-se a aposta atraves das palavras \"Truco\", \"Re - Truco\" e \"Vale 4\",\naumentado, respectivamente, a rodada para 2, 3 e 4 pontos.\nA dupla que aumentou a aposta por ultimo nao pode aumenta-la novamente.\nQuando uma dupla aumenta a aposta, a outra pode \"Correr do Truco\",\nfazendo isto a dupla que pediu o aumento da aposta leva 1, 2 ou 3 pontos.");
	texto[1].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	//texto[0].setString("Em desenvolvimento\n\n\nAperte \"ENTER\" para voltar ao menu.");
	//texto[0].desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
	if (gTeclado.pressionou[TECLA_ENTER]) {
		tela = Menu;
	}
}

