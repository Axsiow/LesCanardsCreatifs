#include "pch.h"
#include "Obstacle.h"


Obstacle::Obstacle()
{
}

Obstacle::Obstacle(string symbole)
{
	m_affichage = symbole;
	if (m_affichage == "|"){
		m_vertical = true;
	}
}


Obstacle::~Obstacle()
{
}

bool Obstacle::getVertcal()
{
	return m_vertical;
}

void Obstacle::setVertical(bool vertical)
{
}
