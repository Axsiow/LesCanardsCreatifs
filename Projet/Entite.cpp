#include "pch.h"
#include "Entite.h"


Entite::Entite()
{
}


Entite::Entite(string entite)
{
	m_affichage = entite;
}


Entite::~Entite()
{
}

int Entite::getPositionX()
{
	return m_positionX;
}

void Entite::setPositionX(int positionX)
{
	m_positionX = positionX;
}

int Entite::getPositionY()
{
	return m_positionY;
}

void Entite::setPositionY(int positionY)
{
	m_positionY = positionY;
}

string Entite::getAffichage()
{
	return m_affichage;
}

void Entite::affichage(int positionX, int positionY)
{
	HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD C;
	C.X = positionX;
	C.Y = positionY;
	SetConsoleCursorPosition(H, C);
}