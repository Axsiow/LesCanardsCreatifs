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
	int getNbDeplacement();
	int getNbPouvoirRamasse();
	
	// Setter
	void setNbDeplacement(int nbDeplacment);
	void setNbPouvoir(int nbPouvoir);
	
	
	int calculeScore();
private:

	// m_
	int m_nbDeplacement;
	int m_nbPouvoirRamasse;
};

#endif // !SCORE_H 