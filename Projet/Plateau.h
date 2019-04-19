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
	//constructeur
	Plateau();
	Plateau(int difficulte);
	//destructeur
	~Plateau();

	//get et set taille
	string getTaille();
	void setTaille();

	//get set heros
	Heros getHeros();
	void setHeros(Heros heros);

	//get set sortie
	Entite getSortie();
	void setSortie(Entite sortie);

	//get set monstre
	vector<Monstre*> getMonstre();
	void setMonstre(vector<Monstre*> monstre);

	//get set pouvoir
	vector<Pouvoir*> getPouvoir();
	void setPouvoir(vector<Pouvoir*> pouvoir);

	//get et set obstacle
	vector<Obstacle*> getObstacle();
	void setObstacle(vector<Obstacle*> obstacle);

	//gère les collision entre monstre héros obstacle et pouvoir
	void percute();

	//afficher le plateau en début de tour
	void afficher();

	//gère si le héros franchie la porte
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
