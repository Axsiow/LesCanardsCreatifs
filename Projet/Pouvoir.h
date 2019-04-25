#pragma once
#ifndef POUVOIR_H
#define POUVOIR_H
#include <iostream>
#include <vector>
#include <random>
#include <time.h>
#include "Entite.h"
#include "Heros.h"

using namespace std;

	// Enumeration
enum Type { invincible, deplacementRapide };

class Pouvoir : public Entite
{
public:

	// Constructeurs et destructeurs
	Pouvoir(string pouvoir);
	Pouvoir();
	~Pouvoir();

	// Getters et Setters
	Type getType();

private:
	Type m_type;
};
#endif
