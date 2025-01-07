#ifndef TRIATHLETE_H
#define TRIATHLETE_H
#include "INSCRIPTION.h"
#include "CATEGORIE.h"
#include <iostream>


class TRIATHLETE
{
	private:
		int numLicense;
		std::string nomTriathlete;
		std::string prenom;
		std::string sexe;
		std::string adresse;
		std::string dateNaissance;

	public:
		TRIATHLETE();
		TRIATHLETE(int numLicense, std::string nomTriathlete, std::string prenom, std::string sexe, std::string adresse, std::string dateNaissance, CATEGORIE* laCategorie, INSCRIPTION* laInscription);
		INSCRIPTION* getLesInscriptions();
		CATEGORIE* getLaCategorie();
		bool equipeFranceMarathon(); //retourne vrai si le triathlète à participé à un triathlon avec une épreuve de course à pied dont la distance est supérieure ou égale à 20 km et ayant obtenu une vitesse supérieure à 20 km / h.
		std::string affiche(); //retourne nom, prénom, sexe, adresse
		int getNumLicense(); //retourne le numéro de licence
		CATEGORIE* laCategorie;
		INSCRIPTION* laInscription;
};
#endif // !TRIATHLETE_H

