#include "pch.h"
#include "Monstre.h"


Monstre::Monstre()
{
}

Monstre::Monstre(string symbole)
{
	m_affichage = symbole;
	srand(time(NULL));
	m_positionX= rand() % (11);
	m_positionY= rand() % (11);

}


Monstre::~Monstre()
{
}

void Monstre::deplacement()
{
	srand(time(NULL));
	int direction = rand() % (4);
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