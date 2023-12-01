#include "Personnel.h"


int Personnel::getId_Personnel() {
	return this->Id_Personnel;
}

void Personnel::setId_Personnel(int Id_Personnnel)
{
	this->Id_Personnel = Id_Personnel;
}

int Personnel::getId_Superieur()
{
	return this->Id_Superieur;
}

void Personnel::setId_Superieur(int Id_Superieur)
{
	this->Id_Superieur = Id_Superieur;
}

String^ Personnel::getNom_Personnel()
{
	return this->Nom_Personnel;
}

void Personnel::setNom_Personnel(String^ nom)
{
	this->Nom_Personnel = Nom_Personnel;
}

String^ Personnel::getPrenom_Personnel()
{
	return this->Prenom_Personnel;
}

void Personnel::setPrenom_Personnel(String^ prenom)
{
	this->Prenom_Personnel = Prenom_Personnel;
}

bool Personnel::getSupprimer()
{
	return this->Supprimer;

}

void Personnel::setSupprimer(bool value)
{
	this->Supprimer;
}

DateTime Personnel::getDate_Naissance()
{
	return this->Date_Naissance;
}

void Personnel::setDate_Naissance(DateTime Date_Naissance)
{
	this->Date_Naissance = Date_Naissance;
}

DateTime Personnel::getDate_Embauche()
{
	return this->Date_Embauche;
}

void Personnel::setDate_Embauche(DateTime Date_Embauche)
{
	this->Date_Embauche = Date_Embauche;
}

