#include "pch.h"
#include "Pouvoir.h"


Pouvoir::Pouvoir()
{
}

Pouvoir::Pouvoir(string pouvoir)
{
	if (pouvoir == "s"){	// Pouvoir de déplacement rapide 

		m_type = deplacementRapide;
	}
	else{	// Pouvoir d'invincibilité

		m_type = invincible;
	}
	m_pouvoir = pouvoir;
}

Pouvoir::~Pouvoir()
{
}

Type Pouvoir::getType()
{
	return m_type;
}

void Pouvoir::effet()
{
}
