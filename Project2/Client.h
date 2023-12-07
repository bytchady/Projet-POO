#pragma once
using namespace System;

public ref class Client
{
private:
    int Id_Client;
    String^ Numero_Client;
    String^ Nom_Client;
    String^ Prenom_Client;
    DateTime Date_Naissance;
    DateTime Date_PremierAchat;
    bool Supprimer;

public:
    void setIdClient(int id_client) {
        this->Id_Client = id_client;
    }

    void setNumClient(String^ num_client) {
        this->Numero_Client = num_client;
    }

    void setNomClient(String^ nom_client) {
        this->Nom_Client = nom_client;
    }

    void setPrenomClient(String^ prenom_client) {
        this->Prenom_Client = prenom_client;
    }

    void setNaissanceClient(DateTime date_naissance) {
        this->Date_Naissance = date_naissance;
    }

    void setPremierAchat(DateTime date_premierachat) {
        this->Date_PremierAchat = date_premierachat;
    }

    void setSupprimer(bool supprimer) {
        this->Supprimer = supprimer;
    }

    int getIdClient() {
        return this->Id_Client;
    }

    String^ getNumClient() {
        return this->Numero_Client;
    }

    String^ getNomClient() {
        return this->Nom_Client;
    }

    String^ getPrenomClient() {
        return this->Prenom_Client;
    }

    DateTime getNaissanceClient() {
        return this->Date_Naissance;
    }

    DateTime getPremierAchat() {
        return this->Date_PremierAchat;
    }

    bool getSupprimer() {
        return this->Supprimer;
    }
};
