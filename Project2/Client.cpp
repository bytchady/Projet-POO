#include "Client.h"
using namespace System;

namespace NS_Client {
    void Client::setNumeroClient(String^ num_client)
    {
        this->Numero_Client = num_client;
    }

    void Client::setNomClient(String^ nom_client)
    {
        this->Numero_Client = nom_client;
    }

    void Client::setPrenomClient(String^ prenom_client)
    {
        this->Numero_Client = prenom_client;
    }

    void Client::setNaissanceClient(String^ naissance_client)
    {
        this->Naissance_Client = naissance_client;
    }

    void Client::setPremierAchat(String^ premier_achat)
    {
        this->PremierAchat = premier_achat;
    }

    void Client::setSupprimer(bool supprimer)
    {
        this->Supprimer = supprimer;
    }

    String^ Client::getNumeroClient()
    {
        return this->Numero_Client;
    }

    String^ Client::getNomClient()
    {
        return this->Nom_Client;
    }

    String^ Client::getPrenomClient()
    {
        return this->Prenom_Client;
    }

    String^ Client::getNaissanceClient()
    {
        return this->Naissance_Client;
    }

    String^ Client::getPremierAchat()
    {
        return this->PremierAchat;
    }

    bool NS_Client::Client::getSupprimer()
    {
        return this->Supprimer;
    }

    String^ Client::CreateClient()
    {
        return "DECLARE @Numero_Client varchar(50); SET @Numero_Client = " + Numero_Client + "; "
            "DECLARE @Nom_Client varchar(50); SET @Nom_Client = '" + Nom_Client + "'; "
            "DECLARE @Prenom_Client varchar(50); SET @Prenom_Client = '" + Prenom_Client + "'; "
            "DECLARE @Naissance_Client date; SET @Naissance_Client  = '" + Naissance_Client->Replace("/", "-") + "'; "
            "DECLARE @PremierAchat date; SET @PremierAchat = " + PremierAchat->Replace("/", "-") + "; "
            "DECLARE @Supprimer bit; SET @Supprimer = 0; "

            "IF NOT EXISTS(SELECT Id_Client FROM Client WHERE Numero_Client = @Numero_Client AND Nom_Client = @Nom_Client AND Prenom_Client = @Prenom_Client AND Naissance_Client = @Naissance_Client AND PremierAchat = @PremierAchat) "
            "BEGIN "
            "INSERT INTO Article (Numero_Client, Nom_Client, Prenom_Client, Naissance_Client, PremierAchat, Supprimer) "
            "VALUES (@Numero_Client, @Nom_Client, @Prenom_Client, @Naissance_Client, @PremierAchat, @Supprimer); "
            "SELECT 'Le client a été ajouté avec succès.' AS Resultat; "
            "END "
            "ELSE "
            "BEGIN "
            "SELECT 'Ce client existe déjà !' AS Resultat; "
            "END";
    }

    String^ Client::UpdateClient()
    {
        return "UPDATE Client SET Nom_Client = '" + Nom_Client + 
            "', Prenom_Client = '" + Prenom_Client + "', Stock_Article = " + Convert::ToString(Naissance_Client) + 
            ", PremierAchat = " +Convert::ToString(PremierAchat) + ", Supprimer = 0" +
            " WHERE Numero_Client = " + Numero_Client;
    }

    String^ Client::DeleteClient()
    {
        return "UPDATE Client SET Supprimer = 1 WHERE Numero_Client = " + Convert::ToString(Numero_Client);
    }
}