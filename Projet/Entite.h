#pragma once
#ifndef ENTITE_H
#define ENTITE_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Entite
{
public:
	Entite();
	Entite(string entite);
	~Entite();
	
	int getPositionX();
	void setPositionX(int positionX);
	
	int getPositionY();
	void setPositionY(int positionY);
	
	string getAffichage();
	
protected:
	int m_positionX;
	int m_positionY;
	string m_affichage;
	
};

#endif // !1