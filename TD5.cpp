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
	//création des données

	//création 2 catégories
	CATEGORIE* J1 = new CATEGORIE(1, "Junior", 15, 17, NULL);
	CATEGORIE* S1 = new CATEGORIE(2, "Senior", 19, 30, NULL);

	//création 4 triathlètes
	TRIATHLETE A(1, "TOTO", "TOTO", "M", "Annecy", "23/02/2009", J1, NULL);
	TRIATHLETE B(2, "TITI", "TITI", "F", "Rumilly", "12/02/2008", J1, NULL);
	TRIATHLETE C(3, "TATA", "TATA", "M", "Chambery", "22/03/2000", S1, NULL);
	TRIATHLETE D(4, "TUTU", "TATA", "F", "Epagny", "30/06/2009", S1, NULL);

	//création d'un type
	TYPE M(0, "M", 1.5, 50.0, 10.0);

	//création d'un triathlon
}