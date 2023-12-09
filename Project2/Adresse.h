#pragma once
using namespace System;

public ref class Adresse
{
private:
    int Id_Adresse;
    String^ Num_Rue;
    String^ Nom_rue;
    String^ Complement_Adr;
    String^ Nom_Ville;
    String^ Code_Postal;
    bool Supprimer;

public:
    int getIdAdresse() {
        return this->Id_Adresse;
    }

    String^ getNumRue() {
        return this->Num_Rue;
    }

    String^ getNomRue() {
        return this->Nom_rue;
    }

    String^ getComplementAdr() {
        return this->Complement_Adr;
    }

    String^ getNomVille() {
        return this->Nom_Ville;
    }

    String^ getCodePostal() {
        return this->Code_Postal;
    }

    bool getSupprimer() {
        return this->Supprimer;
    }

    void setIdAdresse(int Id_Adresse) {
        this->Id_Adresse = Id_Adresse;
    }

    void setNumRue(String^ Num_Rue) {
        this->Num_Rue = Num_Rue;
    }

    void setNomRue(String^ Nom_rue) {
        this->Nom_rue = Nom_rue;
    }

    void setComplementAdr(String^ Complement_Adr) {
        this->Complement_Adr = Complement_Adr;
    }

    void setNomVille(String^ Nom_Ville) {
        this->Nom_Ville = Nom_Ville;
    }

    void setCodePostal(String^ Code_Postal) {
        this->Code_Postal = Code_Postal;
    }

    void setSupprimer(bool Supprimer) {
        this->Supprimer = Supprimer;
    }
};