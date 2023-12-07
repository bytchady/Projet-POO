#include "Commande.h"
#include "BDD.h"
#include "Adresse.h"
#include "Client.h"

using namespace NS_Adresse;

namespace NS_Commande {
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

    void Commande::setIdPersonnel(int idPersonnel)
    {
        this->Id_Adresse = idPersonnel;
    }
    void Commande::setIdAdresse(int idLivraison)
    {
        this->Id_Adresse = idLivraison;
    }

    void Commande::setIdAdresse1(int idFacturation)
    {
        this->Id_Adresse_1 = idFacturation;
    }

    void Commande::setIdClient(int idClient)
    {
        this->Id_Client = idClient;
    }

    void Commande::setSupprimer(bool supprimer)
    {
        this->Supprimer = supprimer;
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
        return "DECLARE @Ref_Commande varchar(50); SET @ref_command = '" + Ref_Commande +
            "'; DECLARE @Total_TTC float; SET @Total_TTC  = '" + Convert::ToString(Total_TTC) +
            "' DECLARE @Total_HT float; SET @date_emission = '" + Convert::ToString(Total_HT) +
            "'; DECLARE @Total_TVA float; SET @Total_TVA = '" + Convert::ToString(Total_TVA) +
            "'; DECLARE @Date_Emission date; SET @Date_Emission ='" + Date_Emission +
            "'; DECLARE @Date_Livraison date; SET @Date_Livraison ='" + Date_Livraison +
            "'; DECLARE @Date_PaiementFinal date; SET @Date_PaiementFinal ='" + Date_PaiementFinal +
            "'; DECLARE @Remise_Commande float; SET @Remise_Commande = '" + Convert::ToString(Remise_Commande) +
            "'; DECLARE @Id_Personnel int; SET @Id_Personnel = '" + Convert::ToString(Id_Personnel) +
            "'; DECLARE @Id_Adresse int; SET @Id_Adresse = '" + Convert::ToString(Id_Adresse) +
            "'; DECLARE @Id_Adresse_1 int; SET @Id_Adresse_1 = '" + Convert::ToString(Id_Adresse_1) +
            "'; DECLARE @Id_Client int; SET @Id_Client = '" + Convert::ToString(Id_Client) +
            "DECLARE @Supprimer bit; SET @Supprimer = 0; "

            "'INSERT INTO Commande (Ref_Commande, Total_TTC,Total_HT ,Total_TVA ,Date_Emission ,Date_Livraison ,Date_PaiementFinal,Remise_Commande ,Id_Personnel, Id_Adresse, Id_Adresse_1, Id_Client, Supprimer) "
            "VALUES(@ref_command,@Total_TTC ,@Total_HT,@Total_TVA,@Date_Emission,@Date_Livraison,@Date_PaiementFinal,@Remise_Commande,@Id_Personnel, @Id_Adresse, @Id_Adresse_1, @Id_Client, Supprimer) ";
    }

    String^ Commande::UpdateCommande()
    {
        return "UPDATE Commande SET Ref_Commande = " + Ref_Commande +
            ", Total_TTC = " + Convert::ToString(Total_TTC )+
            ", Total_HT = " + Convert::ToString(Total_HT) +
            ", Total_TVA = " + Convert::ToString(Total_TVA) +
            ", Date_Emission = " + Date_Emission +
            ", Date_Livraison = " + Date_Livraison +
            ", Date_PaiementFinal = " + Date_PaiementFinal +
            ", Remise_Commande =" + Convert::ToString(Remise_Commande) +
            ", Id_Personnel = " + Id_Personnel +
            ", Id_Adresse = " + Id_Adresse +
            ", Id_Adresse_1 = " + Id_Adresse_1 +
            ", Id_Client = " + Id_Client +
            ", Supprimer = 0"
            " WHERE Ref_Commande = " + Ref_Commande + ";";
    }

    String^ Commande::DeleteCommande()
    {
        return "UPDATE Commande SET Supprimer = 1 WHERE Ref_Commande = " + Ref_Commande;
    }

    String^ Commande::SelectCommande()
    {
        return "SELECT * FROM Commande WHERE Supprimer = 0";
    }

}

