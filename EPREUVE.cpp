#include "EPREUVE.h"

EPREUVE::EPREUVE()
{
	this->gpsDepart = "";
	this->gpsArrive = "";
	this->lesInscriptions = NULL;
	this->leTriathlon = NULL;
}

EPREUVE::EPREUVE(std::string gpsDepart, std::string gpsArrive, TRIATHLON* leTriathlon, INSCRIPTION** lesInscriptions)
{
	this->gpsDepart = gpsDepart;
	this->gpsArrive = gpsArrive;
	this->lesInscriptions = lesInscriptions;
	this->leTriathlon = leTriathlon;
}

TRIATHLON* EPREUVE::getLeTriathlon()
{
	return NULL;
}