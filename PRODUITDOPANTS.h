#ifndef PRODUITDOPANTS_H
#define PRODUITDOPANTS_H
#include <iostream>

class PRODUITDOPANTS
{
	private:
		int codeProduit;
		std::string libelleProduit;
		float taux;

	public:
		PRODUITDOPANTS();
		PRODUITDOPANTS(int codeProduit, std::string libelleProduit, float taux);
		float getLeTaux();

};

#endif // !PRODUITDOPANTS_H