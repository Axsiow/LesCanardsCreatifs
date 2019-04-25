#pragma once
#ifndef HEROS_H
#define HEROS_H
#include<iostream>
#include<string>
#include<vector>
#include "Entite.h"
#include "Pouvoir.h"
#include "conio.h"

using namespace std;

class Pouvoir;

class Heros : public Entite
{
public:
	Heros();
	Heros(string affichage, int positionX, int positionY);
	~Heros();

	int getVie();
	void setVie(int vie);

	vector<Pouvoir*> getPouvoir();

	void setPouvoir(vector<Pouvoir*> pouvoir);

	void deplacer();

	void activerPouvoir();

private:
	vector<Pouvoir*> m_pouvoir;
	int m_vie;
};

#endif