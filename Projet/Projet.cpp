#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
#include "Entite.h"
#include "Heros.h" 
#include"Monstre.h"
#include"Obstacle.h"
#include"Partie.h"
#include"Plateau.h"
#include"Pouvoir.h"
#include"Score.h"
#include<conio.h>

using namespace std;

int main()
{
	/*
	int alleatoire = rand();
	cout << alleatoire;
	*/
	/*
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << rand() % (11)<<endl;
	}
	*/
	/*
	Monstre* machin = new Monstre("m");
	cout << machin->getPositionX()<<endl<<machin->getPositionY();
	*/
	/*
	Score* score = new Score();
	score->setNbDeplacement(2);
	score->setNbPouvoir(4);
	cout<<score->calculeScore();
	*/
	/*
	int posiX = 2;
	int posiY = 0;
	string chara = "G";
	for (int i = -1; i < 12; i++)
	{
		for (int j = -1; j < 12; j++)
		{
			if((i!=-1 || i!=11) && (j!=-1 || j!=11))
			{
				cout << "   ";
			}


			//murs droite et gauche
			if (j == -1 || j == 11)
			{
				if (i != -1 || i != 11)
				{
					cout << "|";
				}

			}
			// murs haut bas


			if (i == -1 || i == 11)
				{
					cout << "_";
				}
		}
		cout << endl;
	}*/


	/*cout<<"  _  _  _  _  _  _  _  _  _  _\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "|                             |\n" <<
		  "  _  _  _  _  _  _  _  _  _  _\n";
	  */

	
	
	/*
	
	Heros* superTheo = new Heros("H", 5, 5);

	Monstre* enzo = new Monstre("M");

	Pouvoir* invincible = new Pouvoir("I");

	if (enzo->getPositionX() == superTheo->getPositionX() && enzo->getPositionY() == superTheo->getPositionY())
	{
		enzo->setPositionX(enzo->getPositionX() + 1);
	}
	if (invincible->getPositionX() == superTheo->getPositionX() && invincible->getPositionY() == superTheo->getPositionY())
	{
		invincible->setPositionX(invincible->getPositionX() + 1);
	}

	while (superTheo->getVie()>0) {

		// ligne du dessus
		for (int ligne = 0; ligne < 10; ligne++)
		{
			cout << "  _";
			if (ligne == 9)
			{
				cout << endl;
			}
		}

		//int�rieur du plateau
		for (int colonneJ = 0; colonneJ < 10; colonneJ++)
		{
			cout << "|";
			for (int ligneJ = 0; ligneJ < 10; ligneJ++)
			{
				if (ligneJ == superTheo->getPositionX() && colonneJ == superTheo->getPositionY())
				{
					cout << " " << superTheo->getAffichage() << " ";
				}
				else if (ligneJ == enzo->getPositionX() && colonneJ == enzo->getPositionY())
				{
					cout << " " << enzo->getAffichage() << " ";
				}
				else if (ligneJ == invincible->getPositionX() && colonneJ == invincible->getPositionY())
				{
					cout << " " << invincible->getAffichage() << " ";
				}
				else
				{
					cout << "   ";
				}

			}
			cout << "|" << endl;
		}

		//ligne du bas
		for (int ligne = 0; ligne < 10; ligne++)
		{
			cout << "  _";
			if (ligne == 9)
			{
				cout << endl;
			}
		}

		cout << "\nNombre de vie : " << superTheo->getVie();

		//déplacement

		//enrgistrement position heros
		int xH = superTheo->getPositionX();
		int yH = superTheo->getPositionY();

		//enrgistrement position monstre
		int xM = enzo->getPositionX();
		int yM = enzo->getPositionY();


		// vérif heros murs   

		while (xH==superTheo->getPositionX() && yH==superTheo->getPositionY())
		{
			superTheo->deplacer();

			if (superTheo->getPositionX() < 0 || superTheo->getPositionX() > 9 || superTheo->getPositionY() < 0 || superTheo->getPositionY() > 9)
			{
				//retour du hero
				superTheo->setPositionX(xH);
				superTheo->setPositionY(yH);
			}
		}

system("cls");


		//vérif monstre murs

		while (xM == enzo->getPositionX() && yM == enzo->getPositionY())
		{
			enzo->deplacement();

			if (enzo->getPositionX() < 0  || enzo->getPositionX() > 9 || enzo->getPositionY() < 0 || enzo->getPositionY() > 9)
			{
				// retour du monstre
				enzo->setPositionX(xM);
				enzo->setPositionY(yM);
			}
			
		}
		system("cls");


		//colision monstre et heros
		if (enzo->getPositionX() == superTheo->getPositionX() && enzo->getPositionY() == superTheo->getPositionY())
		{
			superTheo->setVie(superTheo->getVie() - 1);
		}
		if (xH == enzo->getPositionX() && yH == enzo->getPositionY())
		{
			superTheo->setVie(superTheo->getVie() - 1);
		}
	}

	cout << "Game Over";
	*/
	

Plateau* plateau = new Plateau(1);


while (plateau->getHeros()->getVie()>0)
{
	plateau->afficher();

	plateau->percute();

}
cout << "Game Over";




}
