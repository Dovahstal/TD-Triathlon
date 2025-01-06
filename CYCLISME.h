#ifndef CYCLISME_H
#define CYCLISME_H
#include "COURSES.h"
#include <iostream>

class CYCLISME : COURSES
{
	private:
		int pente;

	public:
		CYCLISME();
		CYCLISME(int pente);
		void affiche();

};

#endif // !CYCLISME_H