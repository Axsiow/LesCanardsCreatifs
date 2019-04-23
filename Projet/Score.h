#pragma once
#ifndef SCORE_H
#define SCORE_H
#include <iostream>
#include <vector>

using namespace std;
class Score
{
public:

	// Constructeur
	Score();

	// Destructeur
	~Score();

	// Getter
	int nbDeplacement();
	int nbPouvoirRamasse();
	int calculeScore();
	// Setter

private:

	// m_
	int m_nbDeplacement;
	int m_nbPouvoirRamasse;
	int m_calculeScore;
};

#endif // !SCORE_H 