#include "pch.h"
#include "Heros.h"


Heros::Heros()
{
}


Heros::Heros(string nom, int positionX, int positionY)//lol
{
	m_affichage = nom;
	m_positionX = positionX;
	m_positionY = positionY;
	m_vie = 3;
}

Heros::~Heros()
{
}

void Heros::deplacer()
{
}

int Heros::getVie()
{
	return 0;
}

void Heros::setVie(int nb_vie)
{
}

void Heros::activerPouvoir()
{
}
