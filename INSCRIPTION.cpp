#include "INSCRIPTION.h"

INSCRIPTION::INSCRIPTION()
{
	this->numDossard = 0;
	this->date = "";
	this->forfait = false;
	this->classementC = 0;
	this->leTriathlon = NULL;
	this->leTemps = TEMPS();
	this->lesEpreuves = NULL;
	this->lesPrelevements = NULL;
	this->leTriathlete = NULL;
}

INSCRIPTION::INSCRIPTION(int numDossard, std::string date, bool forfait, int classementC, TRIATHLETE* leTriathlete, TEMPS leTemps, TRIATHLON* leTriathlon, EPREUVE* lesEpreuves, PRELEVEMENT* lesPrelevements)
{
	this->numDossard = numDossard;
	this->date = date;
	this->forfait = forfait;
	this->classementC = classementC;
	this->leTriathlon = leTriathlon;
	this->leTemps = leTemps;
	this->lesEpreuves = lesEpreuves;
	this->lesPrelevements = lesPrelevements;
	this->leTriathlete = leTriathlete;
}