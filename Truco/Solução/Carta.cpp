#include "Carta.h"



Carta::Carta()
{
}

Carta::Carta(int num, char naipe)
{
	this->num = num;
	this->naipe = naipe;
		
	autoPoder();
	autoSpriteSheet();

}


Carta::~Carta()
{
}

void Carta::autoPoder()
{
	/*1E = 14
		1P = 13
		7E = 12
		7O = 11
		3 = 10
		2 = 9
		1 = 8
		12 = 7
		11 = 6
		10 = 5
		7 = 4
		6 = 3
		5 = 2
		4 = 1*/

	switch (num)
	{
	case 1: if (naipe == 'e') { poder = 14;  }
			else if (naipe == 'p') { poder = 13; 
			}
			else { poder = 8; }break;
	case 2: poder = 9; break;
	case 3: poder = 10; break;
	case 4: poder = 1; break;
	case 5: poder = 2; break;
	case 6: poder = 3; break;
	case 7: if (naipe == 'e') { poder = 12; }
			else if (naipe == 'o') { poder = 11; }
			else { poder = 4; }break;
	case 10: poder = 5; break;
	case 11: poder = 6; break;
	case 12: poder = 7; break;
	}
}


void Carta::autoSpriteSheet()
{
	

	if (!gRecursos.carregouSpriteSheet("ouros"))
	{
		gRecursos.carregarSpriteSheet("ouros", "Assets/Cartas/ouros.png", 1, 12);
	}
	if (!gRecursos.carregouSpriteSheet("copas"))
	{
		gRecursos.carregarSpriteSheet("copas", "Assets/Cartas/copas.png", 1, 12);
	}
	if (!gRecursos.carregouSpriteSheet("espadas"))
	{
		gRecursos.carregarSpriteSheet("espadas", "Assets/Cartas/espadas.png", 1, 12);
	}
	if (!gRecursos.carregouSpriteSheet("paus"))
	{
		gRecursos.carregarSpriteSheet("paus", "Assets/Cartas/paus.png", 1, 12);
	}
	
	switch (naipe) {
	case 'p': spr.setSpriteSheet("paus"); break;
	case 'e': spr.setSpriteSheet("espadas"); break;
	case 'o': spr.setSpriteSheet("ouros"); break;
	case 'c': spr.setSpriteSheet("copas"); break;
	}
	//spr.set
	spr.setEscala(0.4, 0.4);
	spr.setFrame(num-1);
	if (num == 7)
		cout << num;

}
