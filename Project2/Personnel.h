#pragma once
#include "Adresse.h"

using namespace std;
using namespace System;

public ref class Personnel
{
private:
	int Id_Personnel;
	int Id_Superieur;
	String^ Nom_Personnel;
	String^ Prenom_Personnel;
	DateTime Date_Naissance;
	DateTime Date_Embauche;
	Adresse^ adresse = gcnew Adresse();
	bool Supprimer;

public:

	int getIdPersonnel();
	int getIdSuperieur();
	String^ getNomPersonnel();
	String^ getPrenomPersonnel();
	DateTime getDateNaissance();
	bool getSupprimer();
	DateTime  getDateEmbauche();
	Adresse^ getAdresse();

	void setIdSuperieur(int Id_Superieur);
	void setNomPersonnel(String^ nom);
	void setPrenomPersonnel(String^ prenom);
	void setIdPersonnel(int Id_Personnel);
	void setSupprimer(bool value);
	void setDateNaissance(DateTime dateNaissance);
	void setDateEmbauche(DateTime dateEmbauche);
	//Adresse^ setAdresse(Adresse^ Adresse);
	void Personnel::setAdresse(Adresse^ adresse)
	{
		this->adresse = adresse;
	}

};
