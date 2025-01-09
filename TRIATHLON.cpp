#include "TRIATHLON.h"

TRIATHLON::TRIATHLON()
{
	this->idTriathlon = 0;
	this->nomTriathlon = "";
	this->lieu = "";
	this->dateTriathlon = "";
	this->lesEpreuves = NULL;
	this->lesInscriptions = NULL;
	this->leType = TYPE();
}

TRIATHLON::TRIATHLON(int idTriathlon, std::string nomTriathlon, std::string lieu, std::string dateTriathlon, EPREUVE** lesEpreuves, INSCRIPTION** lesInscriptions, TYPE leType)
{
	this->idTriathlon = idTriathlon;
	this->nomTriathlon = nomTriathlon;
	this->lieu = lieu;
	this->dateTriathlon = dateTriathlon;
	this->lesEpreuves = lesEpreuves;
	this->lesInscriptions = lesInscriptions;
	this->leType = leType;
}

TYPE TRIATHLON::getLeType()
{
	return this->leType;
}

void TRIATHLON::addLesInscriptions(INSCRIPTION** lesInscriptions)
{
	this->lesInscriptions = lesInscriptions;
}