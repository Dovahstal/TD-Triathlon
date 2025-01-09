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
	M.affiche();	//1.affichage de la distance de l'épreuve de natation du type M

	//création d'un triathlon
	TRIATHLON* Annecy = new TRIATHLON(1, "Triathlong Internation Annecy", "le Pasquier", "21/06/2025", NULL, NULL, M);
	Annecy->getLeType();	//2.type du triathlon

	//3.liste de 100 inscriptions vides
	INSCRIPTION** lesInscriptions;
	for (int i = 0; i < 100; i++)
	{
		lesInscriptions[i] = NULL;
	}

	//création deux inscriptions
	INSCRIPTION J11(1, "22/11/2024", false, 0, &A, NULL, Annecy, NULL, NULL);
	INSCRIPTION J12(2, "22/11/2024", false, 0, &B, NULL, Annecy, NULL, NULL);	

	//4.inser des deux inscriptions a la liste lesInscriptions
	lesInscriptions[0] = &J11;
	lesInscriptions[1] = &J12;

	//5.ajout de la liste au triathlon d'annecy
	Annecy->addLesInscriptions(lesInscriptions);

	//ajout des deux inscriptions a la partie de natation du triathlon d'annecy
	NATATION J11nage(9, "45.0", "5.0", Annecy, &J11);
	NATATION J12nage(9, "45.0", "5.0", Annecy, &J12);


	//partie affichage des données

	//liste de 100 inscriptions vides pour le triathlon d'annecy
	INSCRIPTION** lesInscriptionsAnnecy;
	for (int j = 0; j < 100; j++)
	{
		lesInscriptions[j] = NULL;
	}

	//6.affichhage de la température de l'eau de la partie natation de l'insctiption J11
	std::cout << "La température de l'eau de l'inscription J11 est de " << J11nage.getTemperature() << std::endl;




}