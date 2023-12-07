#include "Personnel.h"
#include "Adresse.h"

int Personnel::getIdPersonnel() {
	return this->Id_Personnel;
}

void Personnel::setIdPersonnel(int Id_Personnel)
{
	this->Id_Personnel = Id_Personnel;
}

int Personnel::getIdSuperieur()
{
	return this->Id_Superieur;
}

void Personnel::setIdSuperieur(int Id_Superieur)
{
	this->Id_Superieur = Id_Superieur;
}

String^ Personnel::getNomPersonnel()
{
	return this->Nom_Personnel;
}

void Personnel::setNomPersonnel(String^ Nom_Personnel)
{
	this->Nom_Personnel = Nom_Personnel;
}

String^ Personnel::getPrenomPersonnel()
{
	return this->Prenom_Personnel;
}

void Personnel::setPrenomPersonnel(String^ Prenom_Personnel)
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

DateTime Personnel::getDateNaissance()
{
	return this->Date_Naissance;
}

void Personnel::setDateNaissance(DateTime dateNaissance)
{
	this->Date_Naissance = dateNaissance;
}

DateTime Personnel::getDateEmbauche()
{
	return this->Date_Embauche;
}

Adresse^ Personnel::getAdresse()
{
	return this->adresse;
}

void Personnel::setDateEmbauche(DateTime dateEmbauche)
{
	this->Date_Embauche = dateEmbauche;
}

/*Adresse^ Personnel::setAdresse(Adresse^ Adresse)
{
	return this->adresse = Adresse;
}*/
