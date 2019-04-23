#include "pch.h"
#include "Score.h"


Score::Score()
{
}


Score::~Score()
{
}

int Score::getNbDeplacement()
{
	return m_nbDeplacement;
}

int Score::getNbPouvoirRamasse()
{
	return m_nbPouvoirRamasse;
}

void Score::setNbDeplacement(int nbDeplacment)
{
	m_nbDeplacement = nbDeplacment;
}

void Score::setNbPouvoir(int nbPouvoir)
{
	m_nbPouvoirRamasse = nbPouvoir;
}

int Score::calculeScore()
{
	return 1000 - m_nbDeplacement * 25 - m_nbPouvoirRamasse * 50;
}
