//V.1 Version fonctionelle (apres 30h de travail)
/*
	+ Le plateau s'affiche
	+ Le heros peut se deplacer
	+ Les monstres fonctionnent
	+ La sortie est opperationelle 
	+ Score fonctionnel
	+ Pouvoirs fonctionnels 

	++ Le jeu fonctionne !

*/

#include "pch.h"
#include <iostream>
#include <random>
#include <time.h>
#include <conio.h>
#include "Entite.h"
#include "Heros.h" 
#include "Monstre.h"
#include "Obstacle.h"
#include "Partie.h"
#include "Plateau.h"
#include "Pouvoir.h"
#include "Score.h"

using namespace std;

int main()
{

Plateau* plateau = new Plateau(1);

bool gagne = false;

int compteurPouvoir = 0;

string pouvoirRamasse = "rien";

Score* score = new Score();

score->setNbDeplacement(0);
score->setNbPouvoir(0);
cout << "------------------------------" << endl;
cout << "Hero and monsters" << endl << "Fait par LesCanardsCreatifs";
cout << endl << "------------------------------" << endl << endl;
cout << "Pour commencer la partie, appuyez sur la touche 'z' !" << endl << endl;

cout << "Vous incarnez un heros (represente par le caractere 'H')\nVotre but et de vous enfuir du plateau en atteignant la sortie (represente par le caractere 'E')\ntout en evitant les monstres (caractere 'M') ! " << endl;
cout << "Vous pouvez vous aider des deux pouvoirs present sur le plateau ! (respectivement 'S' et 'I')" << endl << endl;

cout << "Commandes de deplacement : z, q, s, d" << endl << endl;
cout << "Bonne chance !";
while (_getch() != 'z') {

}

system("cls");

while (plateau->getHeros()->getVie()>0 && gagne != true)
{
	score->setNbDeplacement(score->getNbDeplacement() + 1);
		
	plateau->afficher();
	cout << endl << "Score : " << score->calculeScore() << endl;


	if (compteurPouvoir > 0)
	{
		compteurPouvoir--;
	}
	else
	{
		pouvoirRamasse = "rien";
	}

	plateau->percute(pouvoirRamasse);

	for (int i = 0; i < 2; i++)
	{
		if (plateau->getHeros()->getPositionX() == plateau->getPouvoir()[i]->getPositionX() && plateau->getHeros()->getPositionY() == plateau->getPouvoir()[i]->getPositionY())
		{
			compteurPouvoir = 3;
			pouvoirRamasse = plateau->getPouvoir()[i]->getAffichage();
			plateau->getPouvoir()[i]->setAffichage(" ");
			score->setNbPouvoir(score->getNbPouvoirRamasse() + 1);
		}
	}


	gagne = plateau->porteFranchie();



}
	cout << "------------------------------" << endl;

	if (gagne == true) {
		cout << "Vous avez gagne !" << endl;
	}
	else {
		cout << "Vous avez perdu !" << endl;
	}
	cout << "Score : " << score->calculeScore() << endl;

	cout << "Pour quitter, appuyer sur '0'" << endl;

	cout << "------------------------------" << endl;

	while (_getch() != '0') {

	}
}

// CRASH TEST //

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

