#include "ServiceCommande.h"
#include "Commande.h"

namespace NS_Commande {

    ServiceCommande::ServiceCommande() {
        bdd = gcnew BDD();
    }

    ServiceCommande::~ServiceCommande() {
        delete bdd;
    }

    void ServiceCommande::InsertServiceCommande(Commande^ commande) {
        String^ query = commande->CreateCommande();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
    }
    System::Data::DataSet^ ServiceCommande::SelectAllServiceCommande(String^) {
        return bdd->executeQuery("SELECT Ref_Commande, Total_TTC, Total_HT, Total_TVA, Date_Emission, Date_Livraison, Date_PaiementFinal, Remise_Commande,Id_Personnel, Id_Adresse, Id_Adresse_1, Id_Client FROM Commande WHERE Supprimer = 0");
    }

    void ServiceCommande::DeleteServiceCommande(Commande^ commande) {
        String^ query = commande->DeleteCommande();
        bdd->executeNonQuery(query);
    }

    void ServiceCommande::UpdateServiceCommande(Commande^ commande) {
        String^ query = commande->UpdateCommande();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
    }

    bool ServiceCommande::CommandeExists(String^ refCommande) {
        String^ query = "SELECT Ref_Commande FROM Commande WHERE Ref_Commande = " + refCommande;
        System::Data::DataSet^ result = bdd->executeQuery(query);
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        return result != nullptr && result->Tables[0]->Rows->Count > 0;
    }
}
