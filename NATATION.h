#ifndef NATATION_H
#define NATATION_H
#include "EPREUVE.h"
#include <iostream>

class NATATION : EPREUVE
{
	private:
		int temperature;

	public:
		NATATION();
		NATATION(int temperature, std::string gpsDepart, std::string gpsArrive, TRIATHLON* leTriathlon, INSCRIPTION* lesInscriptions);
		int getTemperature(); //retourne la température de l’eau
		TRIATHLON* getLeTriathlon();

};

#endif // !NATATION_H