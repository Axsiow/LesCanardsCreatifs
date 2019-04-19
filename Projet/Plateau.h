#pragma once
#ifndef PLATEAU_H
#define PLATEAU_H
#include<iostream>
#include<string>
#include<vector>
#include "Heros.h"
#include "Monstre.h"
#include "Pouvoir.h"
#include "Entite.h"
#include "Obstacle.h"
#include "Score.h"
#include "Partie.h"

using namespace std;

class Heros;
class Obstacle;
class Monstre;
class Pouvoir;
class Entite;

class Plateau
{
public:
	// Constructeur
	Plateau();
	Plateau(int difficulte);
	// Destructeur
	~Plateau();

	// Get et Set taille
	string getTaille();
	void setTaille();

	// Get Set heros
	Heros getHeros();
	void setHeros(Heros heros);

	// Get Set sortie
	Entite getSortie();
	void setSortie(Entite sortie);

	// Get Set monstre
	vector<Monstre*> getMonstre();
	void setMonstre(vector<Monstre*> monstre);

	// Get Set pouvoir
	vector<Pouvoir*> getPouvoir();
	void setPouvoir(vector<Pouvoir*> pouvoir);

	// Get et Set obstacle
	vector<Obstacle*> getObstacle();
	void setObstacle(vector<Obstacle*> obstacle);

	// G�re les collision entre monstre h�ros obstacle et pouvoir
	void percute();

	// Afficher le plateau en d�but de tour
	void afficher();

	// G�re si le h�ros franchie la porte
	void porteFranchie();


private:

	string m_taille;
	Heros* m_heros;
	Entite* m_sortie;
	vector<Monstre*> m_monstre;
	vector<Pouvoir*> m_pouvoir;
	vector<Obstacle*> m_obstacle;
};


#endif // 
