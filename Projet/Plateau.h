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
	int getTaille();
	void setTaille(int taille);

	// Get Set heros
	Heros* getHeros();
	void setHeros(Heros* heros);

	// Get Set sortie
	Entite* getSortie();
	void setSortie(Entite* sortie);

	// Get Set monstre
	vector<Monstre*> getMonstre();
	void setMonstre(vector<Monstre*> monstre);

	// Get Set pouvoir
	vector<Pouvoir*> getPouvoir();
	void setPouvoir(vector<Pouvoir*> pouvoir);

	// Get et Set obstacle
	vector<Obstacle*> getObstacle();
	void setObstacle(vector<Obstacle*> obstacle);

	// Gère les collision entre monstre héros obstacle et pouvoir
	void percute(string pouvoir);

	// Afficher le plateau en début de tour
	void afficher();

	// Gère si le héros franchie la porte
	bool porteFranchie();


private:

	int m_taille;
	Heros* m_heros;
	Entite* m_sortie;
	vector<Monstre*> m_monstre;
	vector<Pouvoir*> m_pouvoir;
	vector<Obstacle*> m_obstacle;
};


#endif // 
