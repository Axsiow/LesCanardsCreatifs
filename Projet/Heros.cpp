#include "pch.h"
#include "Heros.h"


Heros::Heros() //Constructeur de base
{
}


Heros::Heros(string affichage, int positionX, int positionY) //Création du héros prenant en paramètre son symbole et sa position sur les deux axes
{
	m_affichage = affichage; 
	m_positionX = positionX;
	m_positionY = positionY;
}

Heros::~Heros() //Destructeur
{
}

void Heros::deplacer() //operateur permettant de récuperer la touche sur laquelle appui le joueur et de faire avancer le Héros en fonction de sa saisie
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

int Heros::getVie() //Renvoie le nombre de vie du Héros
{
	return m_vie;
}

void Heros::setVie(int nb_vie) //Permet de régler le nombre de vies du Héros
{
	m_vie = nb_vie;
}

void Heros::activerPouvoir() //En contruction : Permettera d'activer le pouvoir rammaser par le Héros
{
}
