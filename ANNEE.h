#ifndef ANNEE_H
#define ANNEE_H
#include "PRODUITDOPANTS.h"
#include <iostream>

class ANNEE
{
	private:
		int annee;

	public:
		ANNEE();
		ANNEE(int annee);
		PRODUITDOPANTS dope(); //retourne le produit dopant qui a engendr� le plus de tests positifs dans l�ann�e.Peut - �tre � NULL si aucun pr�l�vement positif.

};

#endif // !ANNEE_H