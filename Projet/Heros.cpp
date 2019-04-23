#include "pch.h"
#include "Heros.h"


Heros::Heros() //Constructeur de base
{
}


Heros::Heros(string nom, int positionX, int positionY)//lol
{
	m_affichage = nom;
	m_positionX = positionX;
	m_positionY = positionY;
	m_vie = 3;
}

Heros::~Heros() //Destructeur
{
}

void Heros::deplacer() //operateur permettant de r�cuperer la touche sur laquelle appui le joueur et de faire avancer le H�ros en fonction de sa saisie
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

int Heros::getVie() //Renvoie le nombre de vie du H�ros
{
	return m_vie;
}

void Heros::setVie(int nb_vie) //Permet de r�gler le nombre de vies du H�ros
{
	m_vie = nb_vie;
}

void Heros::activerPouvoir() //En contruction : Permettera d'activer le pouvoir rammaser par le H�ros
{
}
