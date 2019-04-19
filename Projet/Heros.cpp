#include "pch.h"
#include "Heros.h"


Heros::Heros()
{
}


Heros::Heros(string affichage, int positionX, int positionY)
{
	m_affichage = affichage;
	m_positionX = positionX;
	m_positionY = positionY;
}

Heros::~Heros()
{
}

void Heros::deplacer()
{
	switch (_getch()) {
		case 'z':
			m_positionY++;
			//cout << "haut" << endl;
			break;
		case 's':
			m_positionY--;
			//cout << "bas" << endl;
			break;
		case 'q':
			m_positionX--;
			//cout << "gauche" << endl;
			break;
		case 'd':
			m_positionX++;
			//cout << "droite" << endl;
			break;
		default:
			break;
	}
}

int Heros::getVie()
{
	return m_vie;
}

void Heros::setVie(int nb_vie)
{
	m_vie = nb_vie;
}

void Heros::activerPouvoir()
{
}
