#ifndef EPREUVE_H
#define EPREUVE_H
#include "TRIATHLON.h"
#include <iostream>

class EPREUVE
{
	private:
		std::string gpsDepart;
		std::string gpsArrive;

	public:
		EPREUVE();
		EPREUVE(std::string gpsDepart, std::string gpsArrive);
		virtual TRIATHLON* getLeTriathlon() = 0;

};

#endif // !EPREUVE_H