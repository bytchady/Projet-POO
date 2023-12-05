#include "Commande.h"
#include"BDD.h"

namespace NS_Commande {
    void Commande::setIdCommande(int idCommande)
    {
        this->Id_Commande = idCommande;
    }

    void Commande::setRefCommande(System::String^ refCommande)
    {
        this->Ref_Commande = refCommande;
    }

    void Commande::setTotalTTC(float totalTTC)
    {
        this->Total_TTC = totalTTC;
    }

    void Commande::setTotalHT(float totalHT)
    {
        this->Total_HT = totalHT;
    }

    void Commande::setTotalTVA(float totalTVA)
    {
        this->Total_TVA = totalTVA;
    }

    void Commande::setDateEmission(String^ dateEmission)
    {
        this->Date_Emission = dateEmission;
    }

    void Commande::setDateLivraison(String^ dateLivraison)
    {
        this->Date_Livraison = dateLivraison;
    }

    void Commande::setDatePaiementFinal(String^ datePaiementFinal)
    {
        this->Date_PaiementFinal = datePaiementFinal;
    }

    void Commande::setRemiseCommande(float remiseCommande)
    {
        this->Remise_Commande = remiseCommande;
    }

    void Commande::setIdAdresse(int idAdresse)
    {
        this->Id_Adresse = idAdresse;
    }

    void Commande::setIdAdresse1(int idAdresse1)
    {
        this->Id_Adresse_1 = idAdresse1;
    }

    void Commande::setIdClient(int idClient)
    {
        this->Id_Client = idClient;
    }

    void Commande::setSupprimer(bool supprimer)
    {
        this->Supprimer = supprimer;
    }

    int Commande::getIdCommande()
    {
        return this->Id_Commande;
    }

    System::String^ Commande::getRefCommande()
    {
        return this->Ref_Commande;
    }

    float Commande::getTotalTTC()
    {
        return this->Total_TTC;
    }

    float Commande::getTotalHT()
    {
        return this->Total_HT;
    }

    float Commande::getTotalTVA()
    {
        return this->Total_TVA;
    }

    System::String^ Commande::getDateEmission()
    {
        return this->Date_Emission;
    }

    System::String^ Commande::getDateLivraison()
    {
        return this->Date_Livraison;
    }

    System::String^ Commande::getDatePaiementFinal()
    {
        return this->Date_PaiementFinal;
    }

    float Commande::getRemiseCommande()
    {
        return this->Remise_Commande;
    }

    int Commande::getIdAdresse()
    {
        return this->Id_Adresse;
    }

    int Commande::getIdAdresse1()
    {
        return this->Id_Adresse_1;
    }

    int Commande::getIdClient()
    {
        return this->Id_Client;
    }

    bool Commande::getSupprimer()
    {
        return this->Supprimer;
    }

    String^ Commande::CreateCommande()
    {
        // Définissez votre logique d'insertion ici en utilisant la classe BDD.
        // Vous pouvez utiliser les attributs de la classe Commande pour construire votre requête SQL.

        // Exemple basique :
        String^ sql = "INSERT INTO Commande (Ref_Commande, Total_TTC, Total_HT, Total_TVA, Date_Emission, Date_Livraison, Date_PaiementFinal, Remise_Commande, Id_Adresse, Id_Adresse_1, Id_Client, Supprimer) "
            "VALUES ('" + Ref_Commande + "', " + Convert::ToString(Total_TTC) + ", " + Convert::ToString(Total_HT) + ", " + Convert::ToString(Total_TVA) + ", '" + Date_Emission + "', '" + Date_Livraison + "', '" + Date_PaiementFinal + "', "
            + Convert::ToString(Remise_Commande) + ", " + Convert::ToString(Id_Adresse) + ", " + Convert::ToString(Id_Adresse_1) + ", " + Convert::ToString(Id_Client) + ", 0)";

        return BDD().executeInsert(sql).ToString();
    }

    String^ Commande::UpdateCommande()
    {
        // Définissez votre logique de mise à jour ici en utilisant la classe BDD.
        // Vous pouvez utiliser les attributs de la classe Commande pour construire votre requête SQL.

        // Exemple basique :
        String^ sql = "UPDATE Commande SET Total_TTC = " + Convert::ToString(Total_TTC) + ", Total_HT = " + Convert::ToString(Total_HT) + ", Total_TVA = " + Convert::ToString(Total_TVA) + ", "
            "Date_Emission = '" + Date_Emission + "', Date_Livraison = '" + Date_Livraison + "', Date_PaiementFinal = '" + Date_PaiementFinal + "', Remise_Commande = " + Convert::ToString(Remise_Commande) + ", "
            "Id_Adresse = " + Convert::ToString(Id_Adresse) + ", Id_Adresse_1 = " + Convert::ToString(Id_Adresse_1) + ", Id_Client = " + Convert::ToString(Id_Client) + " WHERE Id_Commande = " + Convert::ToString(Id_Commande);

        return Convert::ToString(BDD().executeNonQuery(sql));
    }

    String^ Commande::DeleteCommande()
    {
        // Définissez votre logique de suppression ici en utilisant la classe BDD.
        // Vous pouvez utiliser l'attribut Id_Commande de la classe Commande pour construire votre requête SQL.

        // Exemple basique :
        String^ sql = "UPDATE Commande SET Supprimer = 1 WHERE Id_Commande = " + Convert::ToString(Id_Commande);

        return Convert::ToString(BDD().executeNonQuery(sql));
    }

    DataSet^ Commande::SelectCommande()
    {
        // Définissez votre logique de sélection ici en utilisant la classe BDD.

        // Exemple basique :
        String^ sql = "SELECT * FROM Commande WHERE Supprimer = 0";

        return BDD().executeQuery(sql);
    }
}
