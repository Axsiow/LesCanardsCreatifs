#pragma once
#ifndef POUVOIR_H
#define POUVOIR_H
#include <iostream>
#include <vector>
#include "Entite.h"

using namespace std;
// enumeration
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

	void effet();

private:
	Type m_type;
	string m_pouvoir;
};
#endif
