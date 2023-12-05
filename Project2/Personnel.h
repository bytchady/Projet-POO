#pragma once

using namespace std;
using namespace System;

ref class Personnel
{
private:
    int Id_Personnel;
    int Id_Superieur;
    String^ Nom_Personnel;
    String^ Prenom_Personnel;
    DateTime Date_Naissance;
    DateTime Date_Embauche;
    bool Supprimer;

public:

    int getId_Personnel();
    void setId_Personnel(int Id_Personnel);

    int getId_Superieur();
    void setId_Superieur(int Id_Superieur);

    String^ getNom_Personnel();
    void setNom_Personnel(String^ nom);

    String^ getPrenom_Personnel();
    void setPrenom_Personnel(String^ prenom);

    bool getSupprimer();
    void setSupprimer(bool value);

    DateTime getDate_Naissance();
    void setDate_Naissance(DateTime date);

    DateTime getDate_Embauche();
    void setDate_Embauche(DateTime date);

};
