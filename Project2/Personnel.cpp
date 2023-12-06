#include "Personnel.h"
#include "Adresse.h"

int Personnel::getId_Personnel() {
	return this->Id_Personnel;
}

void Personnel::setId_Personnel(int Id_Personnel)
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

void Personnel::setNom_Personnel(String^ Nom_Personnel)
{
	this->Nom_Personnel = Nom_Personnel;
}

String^ Personnel::getPrenom_Personnel()
{
	return this->Prenom_Personnel;
}

void Personnel::setPrenom_Personnel(String^ Prenom_Personnel)
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

DateTime Personnel::getNaissance_Personnel()
{
	return this->Naissance_Personnel;
}

void Personnel::setNaissance_Personnel(DateTime dateNaissance)
{
	this->Naissance_Personnel = dateNaissance;
}

DateTime Personnel::getDate_Embauche()
{
	return this->Date_Embauche;
}

Adresse^ Personnel::getAdresse()
{
	return this->adresse;
}

void Personnel::setDate_Embauche(DateTime dateEmbauche)
{
	this->Date_Embauche = dateEmbauche;
}

Adresse^ Personnel::setAdresse(Adresse^ Adresse)
{
	return this->adresse = Adresse;
}
