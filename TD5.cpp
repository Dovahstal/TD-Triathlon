#include "ANNEE.h"
#include "CATEGORIE.h"
#include "COURSES.h"
#include "CYCLISME.h"
#include "EPREUVE.h"
#include "INSCRIPTION.h"
#include "LABORATOIRE.h"
#include "NATATION.h"
#include "PIED.h"
#include "PRELEVEMENT.h"
#include "PRODUITDOPANTS.h"
#include "TAUX.h"
#include "TRIATHLETE.h"
#include "TRIATHLON.h"
#include "TYPE.h"
#include <iostream>

int main()
{
	//cr�ation des donn�es

	//cr�ation 2 cat�gories
	CATEGORIE* J1 = new CATEGORIE(1, "Junior", 15, 17, NULL);
	CATEGORIE* S1 = new CATEGORIE(2, "Senior", 19, 30, NULL);

	//cr�ation 4 triathl�tes
	TRIATHLETE A(1, "TOTO", "TOTO", "M", "Annecy", "23/02/2009", J1, NULL);
}