#include "NATATION.h"

NATATION::NATATION()
{
	this->temperature = 0;
	this->gpsDepart = "";
	this->gpsArrive = "";
	this->leTriathlon = NULL;
	this->lesInscriptions = NULL;
}

NATATION::NATATION(int temperature, std::string gpsDepart, std::string gpsArrive, TRIATHLON* leTriathlon, INSCRIPTION* lesInscriptions)
{
	this->temperature = temperature;
	this->gpsDepart = gpsDepart;
	this->gpsArrive = gpsArrive;
	this->leTriathlon = leTriathlon;
	this->lesInscriptions = lesInscriptions;
}

TRIATHLON* NATATION::getLeTriathlon()
{
	return this->leTriathlon;
}