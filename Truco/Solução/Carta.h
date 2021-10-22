#pragma once
#include "libUnicornio.h"
class Carta
{
public:
	Carta();
	Carta(int num, char naipe);
	~Carta();

	int getPoder() { return poder; }
	void setPoder(int poder) { this->poder = poder; }

	void autoPoder();

	void setSpriteSheet(string str) { spr.setSpriteSheet(str); }
	void autoSpriteSheet();
	void setFrame(int frame) { spr.setFrame(frame);}

	void desenhar(){ spr.desenhar(this->x, this->y, this->r); }
	void desenhar(float x, float y) { this->x = x; this->y = y; spr.desenhar(this->x, this->y); }
	void desenhar(float x, float y, float r) { this->x = x; this->y = y; this->r = r; spr.desenhar(this->x, this->y, this->r); }
	
	int getNum() { return num; }
	int getFrame() { return spr.getFrame(); }
	Sprite getSprite() { return spr; }
	char getNaipe() { return naipe; }


	friend bool operator>(const Carta& c1, const Carta& c2) {		
		if (c1.poder > c2.poder)
			return true;
		else return false;
	}
	
	friend bool operator<(const Carta& c1, const Carta& c2) {		
		if (c1.poder < c2.poder)
			return true;
		else return false;
	}
	friend bool operator==(const Carta& c1, const Carta& c2) {
		if (c1.poder == c2.poder)
			return true;
		else return false;
	}
	BotaoSprite &operator=(BotaoSprite &e){
		x = e.getX();
		y = e.getY();
		return e;
	}


	// operacoes com X e Y
	void setX(float val) { x = val; }
	float getX() { return x; }

	void setY(float val) { y = val; }
	float getY() { return y; }

	void setR(float val) { r = val; }
	float getR() { return r; }

	void addX() { x++; }
	void addX(float val) { x += val; }

	void addR() { r++; }
	void addR(float val) { r += val; }

	void addY() { y++; }
	void addY(float val) { y += val; }

	void subX() { x--; }
	void subX(float val) { x -= val; }

	void subY() { y--; }
	void subY(float val) { y-=val; }

	void subR() { r--; }
	void subR(float val) { r -= val; }

private:
	Sprite spr;
	int num, poder;
	char naipe;
	float x, y, r;

};

