#include "pch.h"
#include "Obstacle.h"


Obstacle::Obstacle()
{
}

Obstacle::Obstacle(string symbole)
{
	m_affichage = symbole;
}


Obstacle::~Obstacle()
{
}

bool Obstacle::getVertcal()
{
	return false;
}

void Obstacle::setVertical(bool vertical)
{
}
