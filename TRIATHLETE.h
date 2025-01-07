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
		bool equipeFranceMarathon(); //retourne vrai si le triathl�te � particip� � un triathlon avec une �preuve de course � pied dont la distance est sup�rieure ou �gale � 20 km et ayant obtenu une vitesse sup�rieure � 20 km / h.
		std::string affiche(); //retourne nom, pr�nom, sexe, adresse
		int getNumLicense(); //retourne le num�ro de licence
		CATEGORIE* laCategorie;
		INSCRIPTION* laInscription;
};
#endif // !TRIATHLETE_H

