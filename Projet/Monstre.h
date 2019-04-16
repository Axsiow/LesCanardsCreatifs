#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Entite.h"

class Monstre : public Entite
{
public:
	Monstre();
	Monstre(string symbole);
	~Monstre();

	void deplacement();
	void monstre(string);
};

