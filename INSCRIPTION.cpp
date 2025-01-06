#include "INSCRIPTION.h"

INSCRIPTION::INSCRIPTION()
{
	this->numDossard = 0;
	this->date = "";
	this->forfait = false;
	this->classementC = 0;
}

INSCRIPTION::INSCRIPTION(int numDossard, std::string date, bool forfait, int classementC)
{
	this->numDossard = numDossard;
	this->date = date;
	this->forfait = forfait;
	this->classementC = classementC;
}