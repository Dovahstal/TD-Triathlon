#ifndef CATEGORIE_H
#define CATEGORIE_H
#include "TRIATHLETE.h"
#include <iostream>

class CATEGORIE
{
	private:
		int codeCategorie;
		std::string libelleCategorie;
		int ageMin;
		int ageMax;

	public:
		CATEGORIE();
		CATEGORIE(int codeCategorie, std::string libelleCategorie, int ageMin, int ageMax, TRIATHLETE** lesTriathletes);
		TRIATHLETE** getLesTriathletes();
		TRIATHLETE** lesTriathletesASurveiller(); //retourne l’ensemble des triathlètes de la catégorie s’étant inscrit à un triathlon ayant une épreuve de natation dont la température de l’eau était inférieure à 10°
		void addLesTriathletes(TRIATHLETE** lesTriathletes); //ajoute une liste de triathlètes à la catégorie concernée
		std::string getLibelle(); //renvoie le libellé de la catégorie
        TRIATHLETE** lesTriathletes;

};

#endif // !CATEGORIE