#include "pch.h"
#include "Score.h"


Score::Score()
{
}


Score::~Score()
{
}

int Score::nbDeplacement()
{
	return m_nbDeplacement;
}

int Score::nbPouvoirRamasse()
{
	return m_nbPouvoirRamasse;
}

int Score::calculeScore()
{
	return m_calculeScore;
}
