#include "TRIATHLETE.h"

TRIATHLETE::TRIATHLETE()
{
	this->numLicense = 0;
	this->nomTriathlete = "";
	this->prenom = "";
	this->sexe = "";
	this->adresse = "";
	this->dateNaissance = "";
	this->laCategorie = CATEGORIE();
	this->laInscription = INSCRIPTION();
}

TRIATHLETE::TRIATHLETE(int numLicense, std::string nomTriathlete, std::string prenom, std::string sexe, std::string adresse, std::string dateNaissance, CATEGORIE* laCategorie, INSCRIPTION* laInscription)
{
	this->numLicense = numLicense;
	this->nomTriathlete = nomTriathlete;
	this->prenom = prenom;
	this->sexe = sexe;
	this->adresse = adresse;
	this->dateNaissance = dateNaissance;
	this->laCategorie = laCategorie;
	this->laInscription = laInscription;
}