#ifndef COURSES_H
#define COURSES_H
#include "EPREUVE.h"
#include <iostream>

class COURSES : EPREUVE
{
	private:
		std::string deniveleMax;
		std::string deniveleMin;

	public:
		COURSES();
		COURSES(std::string deniveleMax, std::string deniveleMin);
		virtual void affiche() = 0;

};

#endif // !COURSES_H