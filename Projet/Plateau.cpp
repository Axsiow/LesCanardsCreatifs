#include "pch.h"
#include "Plateau.h"


Plateau::Plateau()
{
}

Plateau::Plateau(int difficulte)
{
	if (difficulte == 1)
	{
		string p = "H";
		// Constructeur heros
		m_heros = new Heros(p, 5, 5);

		// Constructeur pouvoir
		p = "S";
		m_pouvoir.push_back(new Pouvoir(p));
		p = "I";
		m_pouvoir.push_back(new Pouvoir(p));

		// Constructeur monstre

		p = "M";
		for (int i = 0; i < 2; i++)
		{
			m_monstre.push_back(new Monstre(p));
		}

		if (m_monstre[1]->getPositionX() < 6)
		{
			m_monstre[1]->setPositionX(m_monstre[1]->getPositionX() + 5);
		}
		else
		{
			m_monstre[1]->setPositionX(m_monstre[1]->getPositionX() - 5);
		}

		if (m_monstre[1]->getPositionY() < 6)
		{
			m_monstre[1]->setPositionY(m_monstre[1]->getPositionY() + 5);
		}
		else
		{
			m_monstre[1]->setPositionY(m_monstre[1]->getPositionY() - 5);
		}
		
		

		// Constructeur sortie
		p = "E";
		m_sortie = new Entite(p);

		default_random_engine re(time(0));
		uniform_int_distribution<int> distrib{ 0,10 };

		m_sortie->setPositionX(distrib(re));
		m_sortie->setPositionY(distrib(re));

		m_taille = 10;

		for (int i = 0; i < 2; i++)
		{
			//position confondue heros et monstre
			if (m_monstre[i]->getPositionX() == m_heros->getPositionX() && m_monstre[i]->getPositionY() == m_heros->getPositionY())
			{
				m_monstre[i]->setPositionX(m_monstre[i]->getPositionX() + 1);
			}

			//position confondue heros pouvoir
			if (m_pouvoir[i]->getPositionX() == m_heros->getPositionX() && m_pouvoir[i]->getPositionY() == m_heros->getPositionY())
			{
				m_pouvoir[i]->setPositionX(m_pouvoir[i]->getPositionX() + 1);
			}

			//position confondue pouvoir monstre
			if (m_pouvoir[i]->getPositionX() == m_monstre[i]->getPositionX() && m_pouvoir[i]->getPositionY() == m_monstre[i]->getPositionY())
			{
				m_pouvoir[i]->setPositionX(m_pouvoir[i]->getPositionX() + 1);
			}

		}
	}
}


Plateau::~Plateau()
{
	delete m_heros;
	delete m_sortie;
	for (int i = 0; i < 2; i++)
	{
		delete m_monstre[i];
		delete m_pouvoir[i];
	}
}

int Plateau::getTaille()
{
	return m_taille;
}

void Plateau::setTaille(int taille)
{
	m_taille = taille;
}

Heros* Plateau::getHeros()
{
	return m_heros;
}

void Plateau::setHeros(Heros* heros)
{
	m_heros = heros;
}

Entite* Plateau::getSortie()
{
	return m_sortie;
}

void Plateau::setSortie(Entite* sortie)
{
	m_sortie = sortie;
}

vector<Monstre*> Plateau::getMonstre()
{
	return m_monstre;
}

void Plateau::setMonstre(vector<Monstre*> monstre)
{
	m_monstre = monstre;
}

vector<Pouvoir*> Plateau::getPouvoir()
{
	return m_pouvoir;
}

void Plateau::setPouvoir(vector<Pouvoir*> pouvoir)
{
	m_pouvoir = pouvoir;
}

vector<Obstacle*> Plateau::getObstacle()
{
	return m_obstacle;
}

void Plateau::setObstacle(vector<Obstacle*> obstacle)
{
	m_obstacle == obstacle;
}

void Plateau::percute()
{
	//enrgistrement position heros
	int xH = m_heros->getPositionX();
	int yH = m_heros->getPositionY();

	//enrgistrement position monstre
	int nbMonstre;
	if (m_taille == 10)
	{
		nbMonstre = 2;
	}
	else
	{
		nbMonstre = 3;
	}

	vector<int> xM(nbMonstre);
	vector<int> yM(nbMonstre);
	for (int i=0; i < nbMonstre; i++)
	{
		xM[i] = m_monstre[i]->getPositionX();
		yM[i] = m_monstre[i]->getPositionY();
	}


	// vérif heros murs   
	
	while (xH == m_heros->getPositionX() && yH == m_heros->getPositionY())
	{
		m_heros->deplacer();
		cout << "Deplacement impossible, recommencer.";
		if (m_heros->getPositionX() < 0 || m_heros->getPositionX() > 9 || m_heros->getPositionY() < 0 || m_heros->getPositionY() > 9)
		{
			//retour du hero
			m_heros->setPositionX(xH);
			m_heros->setPositionY(yH);
		}
		system("cls");
	}

	
	


	//vérif monstre murs


	for (int i = 0; i < nbMonstre; i++)
	{
		while (xM[i] == m_monstre[i]->getPositionX() && yM[i] == m_monstre[i]->getPositionY())
		{
			m_monstre[i]->deplacement();

			if (m_monstre[i]->getPositionX() < 0 || m_monstre[i]->getPositionX() > 9 || m_monstre[i]->getPositionY() < 0 || m_monstre[i]->getPositionY() > 9)
			{
				// retour du monstre
				m_monstre[i]->setPositionX(xM[i]);
				m_monstre[i]->setPositionY(yM[i]);
			}

		}
		system("cls");
	}
	


	//colision monstre et heros

	for (int i = 0; i < nbMonstre; i++)
	{
		if (m_monstre[i]->getPositionX() == m_heros->getPositionX() && m_monstre[i]->getPositionY() == m_heros->getPositionY())
		{
			m_heros->setVie(m_heros->getVie() - 1);
		}
		if (xH == m_monstre[i]->getPositionX() && yH == m_monstre[i]->getPositionY())
		{
			m_heros->setVie(m_heros->getVie() - 1);
		}
	}
	
}



void Plateau::afficher()
{
	// ligne du dessus
	for (int ligne = 0; ligne < 10; ligne++)
	{
		cout << "  _";
		if (ligne == 9)
		{
			cout << endl;
		}
	}

	int nbMonstre;
	if (m_taille == 10)
	{
		nbMonstre = 2;
	}
	else
	{
		nbMonstre = 3;
	}

	//int�rieur du plateau
	for (int colonneJ = 0; colonneJ < 10; colonneJ++)
	{
		cout << "|";
		for (int ligneJ = 0; ligneJ < 10; ligneJ++)
				{

				if (ligneJ == m_heros->getPositionX() && colonneJ == m_heros->getPositionY())
				{
					cout << " " << m_heros->getAffichage() << " ";
				}	
			
				else if (ligneJ == m_pouvoir[0]->getPositionX() && colonneJ == m_pouvoir[0]->getPositionY())
				{
					cout << " " << m_pouvoir[0]->getAffichage() << " ";
				}

				else if (ligneJ == m_pouvoir[1]->getPositionX() && colonneJ == m_pouvoir[1]->getPositionY())
				{
					cout << " " << m_pouvoir[1]->getAffichage() << " ";
				}


				else
				{
					int rien = 0;
					for (int i = 0; i < nbMonstre; i++)
					{
						if (ligneJ == m_monstre[i]->getPositionX() && colonneJ == m_monstre[i]->getPositionY())
						{
							cout << " "<< m_monstre[i]->getAffichage() <<" ";
						}
						else
						{
							rien++;
						}
					}
					if (rien == 2)
					{
						cout << "   ";
					}

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

	cout << "\nNombre de vie : " << m_heros->getVie();
}



void Plateau::porteFranchie()
{
}


