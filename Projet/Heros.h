#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Heros
{
public:
	Heros();
	Heros(string nom, int nb_vie, int jsp);
	~Heros();

	void deplacer();
	int getVie();
	void setVie(int nb_vie);
	void activerPouvoir();

private:
	int nb_vie = 3;
};

