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
		//sens� �tre virtuel pur mais ca a �t� modifi� (du coup la classe est pas abstraite)
		TRIATHLON* getLeTriathlon();

		INSCRIPTION** lesInscriptions;
		TRIATHLON* leTriathlon;

};

#endif // !EPREUVE_H