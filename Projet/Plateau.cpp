#include "pch.h"
#include "Plateau.h"


Plateau::Plateau()
{
}

Plateau::Plateau(int difficulte)
{
	if (difficulte == 1)
	{
		string p = "h";
		// Constructeur heros
		m_heros = new Heros(p, 5, 5);

		// Constructeur pouvoir
		p = "s";
		m_pouvoir.push_back(new Pouvoir(p));
		p = "i";
		m_pouvoir.push_back(new Pouvoir(p));

		// Constructeur monstre

		p = "m";
		for (int i = 0; i < 2; i++)
		{
			m_monstre.push_back(new Monstre(p));
		}

		// Constructeur sortie
		p = "e";
		m_sortie = new Entite(p);

		m_taille = 10;
	}
}


Plateau::~Plateau()
{
	delete m_heros;
	delete m_sortie;
	for (int i = 0; i < 2; i++)
	{
		delete m_monstre[i];
		delete m_pouvoir[i];
	}
}

string Plateau::getTaille()
{
	return string();
}

void Plateau::setTaille()
{
}

Heros Plateau::getHeros()
{
	return Heros();
}

void Plateau::setHeros(Heros heros)
{
}

Entite Plateau::getSortie()
{
	return Entite();
}

void Plateau::setSortie(Entite sortie)
{
}

vector<Monstre*> Plateau::getMonstre()
{
	return vector<Monstre*>();
}

void Plateau::setMonstre(vector<Monstre*> monstre)
{
}

vector<Pouvoir*> Plateau::getPouvoir()
{
	return vector<Pouvoir*>();
}

void Plateau::setPouvoir(vector<Pouvoir*> pouvoir)
{
}

vector<Obstacle*> Plateau::getObstacle()
{
	return vector<Obstacle*>();
}

void Plateau::setObstacle(vector<Obstacle*> obstacle)
{
}

void Plateau::percute()
{
}



void Plateau::afficher()
{
	// ligne du dessus
	for (int ligne = 0; ligne < 10; ligne++)
	{
		cout << "  _";
		if (ligne == 9)
		{
			cout << endl;
		}
	}

	//intérieur du plateau
	for (int colonneJ = 0; colonneJ < 10; colonneJ++)
	{
		cout << "|";
		for (int ligneJ = 0; ligneJ < 10; ligneJ++)
		{
			cout << "   ";
		}
		cout << "|" << endl;
	}

	//ligne du bas
	for (int ligne = 0; ligne < 10; ligne++)
	{
		cout << "  _";
		if (ligne == 9)
		{
			cout << endl;
		}
	}
}



void Plateau::porteFranchie()
{
}


