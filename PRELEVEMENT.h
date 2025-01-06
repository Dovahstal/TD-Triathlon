#ifndef PRELEVEMENT_H
#define PRELEVEMENT_H
#include "TAUX.h"
#include "PRODUITDOPANTS.h"
#include <iostream>

class PRELEVEMENT
{
	private:
		int idPrelevement;
		std::string datePrelevement;

	public:
		PRELEVEMENT();
		PRELEVEMENT(int idPrelevement, std::string datePrelevement);
		TAUX* getLesTaux();
		PRODUITDOPANTS* produitsDopantPositifs(); //retourne la liste des produits dopants ou la mesure est positive.Le test est positif � un produit dopant si le taux du pr�l�vement est sup�rieur au taux admis par le produit dopant
		bool estPositif(); //retourne vrai si le pr�l�vement est positif � au moins un produit dopant

};

#endif // !PRELEVEMENT_H