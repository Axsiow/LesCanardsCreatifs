#pragma once
#ifndef PARTIE_H
#define PARTIE_H
#include "Score.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Partie
{
public:

	// Constructeur
	Partie();

	// Destructeur
	~Partie();

	// Getter
	int difficulte();
	int nbVieHero();

	// Setter
	void lancerPartie(string lancerPartie, int lancerPartieInt);
	void niveauSuivant();
	void finPartie();

private:

	// m_
	int m_difficulte;
	int m_nbVieHero;
};

#endif // !PARTIE_H  