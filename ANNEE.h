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
		PRODUITDOPANTS dope(); //retourne le produit dopant qui a engendré le plus de tests positifs dans l’année.Peut - être à NULL si aucun prélèvement positif.

};

#endif // !ANNEE_H