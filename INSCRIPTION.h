#ifndef INSCRIPTION_H
#define INSCRIPTION_H
#include "TRIATHLON.h"
#include "TRIATHLETE.h"
#include "TEMPS.h"
#include "EPREUVE.h"
#include "PRELEVEMENT.h"
#include <iostream>

class INSCRIPTION
{
	private:
		int numDossard;
		std::string date;
		bool forfait;
		int classementC;

	public:
		INSCRIPTION();
		INSCRIPTION(int numDossard, std::string date, bool forfait, int classementC, TRIATHLETE* leTriathlete, TEMPS leTemps, TRIATHLON* leTriathlon, EPREUVE* lesEpreuves, PRELEVEMENT* lesPrelevements);
		TRIATHLON* getLeTriathlon(); //retourne le triathlon concern� par l'inscription
		TEMPS* getLesTemps();
		EPREUVE* getLesTroisEpreuves();
		PRELEVEMENT* getLesPrelevements();
		bool estForfait(); //retourne vrai si le triathl�te a d�clar� forfait ou s�il n�a pas termin� une ou plusieurs �preuves.S�il n�a pas termin� une �preuve il n�y a pas de temps inscrit pour cette �preuve
		TRIATHLETE* getLeTriathlete(); //retourne un triathl�te sur une inscription
		std::string affiche(); //renvoie le num�ro de dossard et la date

		TRIATHLON* leTriathlon;
		TEMPS leTemps;
		EPREUVE* lesEpreuves;
		PRELEVEMENT* lesPrelevements;
		TRIATHLETE* leTriathlete;

};
#endif // !INSCRIPTION_H
