#include "TYPE.h"

TYPE::TYPE()
{
	this->codeType = 0;
	this->libelleType = "";
	this->longCyclisme = 0;
	this->longPied = 0;
	this->longNatation = 0;
}

TYPE::TYPE(int codeType, std::string libelleType, float longCyclisme, float longPied, float longNatation)
{
	this->codeType = codeType;
	this->libelleType = libelleType;
	this->longCyclisme = longCyclisme;
	this->longPied = longPied;
	this->longNatation = longNatation;
}

//ne retourne que la longueur de natation
std::string TYPE::affiche()
{
	std::cout << "Longeur de l'épreuve de natation " << this->longNatation << std::endl;
}