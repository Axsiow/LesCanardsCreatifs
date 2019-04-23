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
#include"conio.h"

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

	Heros* superTheo = new Heros("H", 5, 5);



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
		  if (ligneJ == superTheo->getPositionX() && colonneJ== superTheo->getPositionY())
		  {
			  cout << " H ";
		  }
		  else
		  {
			cout<<"   ";
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

}
