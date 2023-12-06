#pragma once
#include "Adresse.h"

using namespace std;
using namespace System;

ref class Personnel
{
private:
	int Id_Personnel;
	int Id_Superieur;
	String^ Nom_Personnel;
	String^ Prenom_Personnel;
	DateTime Naissance_Personnel;
	DateTime Date_Embauche;
	Adresse^ adresse;
	bool Supprimer;

public:

	int getId_Personnel();
	int getId_Superieur();
	String^ getNom_Personnel();
	String^ getPrenom_Personnel();
	DateTime getNaissance_Personnel();
	bool getSupprimer();
	DateTime  getDate_Embauche();
	Adresse^ getAdresse();

	void setId_Superieur(int Id_Superieur);
	void setNom_Personnel(String^ nom);
	void setPrenom_Personnel(String^ prenom);
	void setId_Personnel(int Id_Personnel);
	void setSupprimer(bool value);
	void setNaissance_Personnel(DateTime dateNaissance);
	void setDate_Embauche(DateTime dateEmbauche);
	Adresse^ setAdresse(Adresse^ Adresse);

};
