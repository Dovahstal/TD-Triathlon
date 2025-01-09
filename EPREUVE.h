#ifndef EPREUVE_H
#define EPREUVE_H
#include "TRIATHLON.h"
#include "INSCRIPTION.h"
#include <iostream>

class EPREUVE
{
	protected:
		std::string gpsDepart;
		std::string gpsArrive;

	public:
		EPREUVE();
		EPREUVE(std::string gpsDepart, std::string gpsArrive, TRIATHLON* leTriathlon, INSCRIPTION** lesInscriptions);
		//sensé être virtuel pur mais ca a été modifié (du coup la classe est pas abstraite)
		TRIATHLON* getLeTriathlon();

		INSCRIPTION** lesInscriptions;
		TRIATHLON* leTriathlon;

};

#endif // !EPREUVE_H