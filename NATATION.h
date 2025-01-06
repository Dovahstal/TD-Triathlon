#ifndef NATATION_H
#define NATATION_H
#include "EPREUVE.h"
#include "TRIATHLON.h"
#include <iostream>

class NATATION : EPREUVE
{
	private:
		int temperature;

	public:
		NATATION();
		NATATION(int temperature);
		int getTemperature(); //retourne la temp�rature de l�eau
		TRIATHLON* getLeTriathlon();

};

#endif // !NATATION_H