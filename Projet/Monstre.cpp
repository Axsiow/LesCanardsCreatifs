#include "pch.h"
#include "Monstre.h"


Monstre::Monstre()
{
}

Monstre::Monstre(string symbole)
{
	m_affichage = symbole;
	default_random_engine re(time(0));
	uniform_int_distribution<int> distrib{ 0,10 };
	
	m_positionX = distrib(re);
	m_positionY = distrib(re);

	

}


Monstre::~Monstre()
{
}

void Monstre::deplacement()
{
	default_random_engine re(time(0));
	uniform_int_distribution<int> distrib{ 0,3 };

	int direction = distrib(re);

	if (direction == 0)
	{
		m_positionY = m_positionY + 1;
	}
	else if(direction == 1)
	{
		m_positionX = m_positionX + 1;
	}
	else if (direction == 2)
	{
		m_positionY = m_positionY - 1;
	}
	else
	{
		m_positionX = m_positionX - 1;
	}
}