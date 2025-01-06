#include "CATEGORIE.h"

CATEGORIE::CATEGORIE()
{
	this->codeCategorie = 0;
	this->libelleCategorie = "";
	this->ageMin = 0;
	this->ageMax = 0;
	this->lesTriathletes = NULL;
}

CATEGORIE::CATEGORIE(int codeCategorie, std::string libelleCategorie, int ageMin, int ageMax, TRIATHLETE** lesTriathletes)
{
	this->codeCategorie = codeCategorie;
	this->libelleCategorie = libelleCategorie;
	this->ageMin = ageMin;
	this->ageMax = ageMax;
	this->lesTriathletes = lesTriathletes;
}