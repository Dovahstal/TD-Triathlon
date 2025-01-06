#ifndef TYPE_H
#define TYPE_H
#include <iostream>

class TYPE
{
	private:
		int codeType;
		std::string libelleType;
		float longCyclisme;
		float longPied;
		float longNatation;

	public:
		TYPE();
		TYPE(int codeType, std::string libelleType, float longCyclisme, float longPied, float longNatation);
		float getLongNatation(); //retourne la longueur de l’épreuve de natation
		float getLongCyclisme();
		float getLongPied();
		std::string affiche(); //permet d’afficher le type de triathlon en S, M, L, XL

};

#endif // !TYPE_H