#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

#include "Entite.h"

class Monstre : public Entite
{
public:
	Monstre();
	Monstre(string symbole);
	~Monstre();

	void deplacement();
};

