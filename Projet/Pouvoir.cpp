#include "pch.h"
#include "Pouvoir.h"


Pouvoir::Pouvoir()
{
}

Pouvoir::Pouvoir(string pouvoir)
{
	if (pouvoir == "S"){	// Pouvoir de déplacement rapide 

		m_type = deplacementRapide;
	}
	else{	// Pouvoir d'invincibilité

		m_type = invincible;
	}
	m_affichage = pouvoir;

	default_random_engine re(time(0));
	uniform_int_distribution<int> distrib{ 0,10 };

	m_positionX = distrib(re);
	m_positionY = distrib(re);

}

Pouvoir::~Pouvoir()
{
}

Type Pouvoir::getType()
{
	return m_type;
}

