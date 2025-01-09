#ifndef TRIATHLON_H
#define TRIATHLON_H
#include "EPREUVE.h"
#include "INSCRIPTION.h"
#include "TYPE.h"
#include <iostream>

class TRIATHLON
{
	private:
		int idTriathlon;
		std::string nomTriathlon;
		std::string lieu;
		std::string dateTriathlon;

	public:
		TRIATHLON();
		TRIATHLON(int idTriathlon, std::string nomTriathlon, std::string lieu, std::string dateTriathlon, EPREUVE** lesEpreuves, INSCRIPTION** lesInscriptions, TYPE leType);
		EPREUVE* getLesEpreuves();
		TYPE getLeType(); //renvoie le type de triathlon pour afficher ensuite S, M, L, XL
		INSCRIPTION** getLesInscriptions();
		void addLesInscriptions(INSCRIPTION** lesInscriptions); //ajoute les inscriptions au triathlon concerné

		INSCRIPTION** lesInscriptions;
		EPREUVE** lesEpreuves;
		TYPE leType;

};

#endif // !TRIATHLON_H