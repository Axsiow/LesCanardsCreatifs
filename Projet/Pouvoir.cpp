#include "pch.h"
#include "Pouvoir.h"


Pouvoir::Pouvoir()
{
}

Pouvoir::Pouvoir(string pouvoir)
{
	if (pouvoir == "s"){	// Pouvoir de d�placement rapide 

		m_type = deplacementRapide;
	}
	else{	// Pouvoir d'invincibilit�

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
