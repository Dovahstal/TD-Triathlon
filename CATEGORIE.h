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
		TRIATHLETE** lesTriathletesASurveiller(); //retourne l�ensemble des triathl�tes de la cat�gorie s��tant inscrit � un triathlon ayant une �preuve de natation dont la temp�rature de l�eau �tait inf�rieure � 10�
		void addLesTriathletes(TRIATHLETE** lesTriathletes); //ajoute une liste de triathl�tes � la cat�gorie concern�e
		std::string getLibelle(); //renvoie le libell� de la cat�gorie
        TRIATHLETE** lesTriathletes;

};

#endif // !CATEGORIE