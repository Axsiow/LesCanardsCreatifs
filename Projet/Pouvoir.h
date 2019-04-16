#ifndef POUVOIR_H
#define POUVOIR_H
#include <iostream>
#include <vector>
#include "Entite.h"

using namespace std;

enum Type { invincible, deplacementRapide };

class Pouvoir : public Entite
{
public:
	Pouvoir(string pouvoir);
	Pouvoir();
	~Pouvoir();

void effet();
};

#endif // !1