#pragma once
#ifndef HEROS_H
#define HEROS_H
#include<iostream>
#include<string>
#include<vector>
#include "Entite.h"
#include "conio.h"

using namespace std;

class Heros : Entite
{
public:
	Heros();
	Heros(string affichage, int positionX, int positionY);
	~Heros();

	int getVie();
	void setVie(int vie);

	void deplacer();

	void activerPouvoir();

private:
	int m_vie;
};

#endif