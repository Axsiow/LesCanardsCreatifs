#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Entite.h"
using namespace std;

class Obstacle : public Entite
{
public:
	Obstacle();
	Obstacle(string symbole);
	~Obstacle();

	// get set vertical
	bool getVertcal();
	void setVertical(bool vertical);

private:
	bool m_vertical;

};

