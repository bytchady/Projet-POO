#include "ServiceAdresse.h"
#include "Adresse.h"

namespace NS_Adresse {

    ServiceAdresse::ServiceAdresse() {
        bdd = gcnew BDD();
    }

    ServiceAdresse::~ServiceAdresse() {
        delete bdd;
    }

    String^ ServiceAdresse::InsertServiceAdresse(Adresse^ adresse) {
        //String^ query = adresse->CreateAdresse();
        //System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        //bdd->executeNonQuery(query);

        auto addressId = bdd->executeInsert("INSERT INTO Adresse (Num_Rue, Nom_Rue, Complement_Adr, Nom_Ville, Code_Postal, Supprimer) VALUES ('" + adresse->getNum_Rue() + "', '" + adresse->getNom_rue() + "', '" + adresse->getComplement_Adr() + "', '" + adresse->getNom_Ville() + "', '" + adresse->getCode_Postal() + "', '" + adresse->getSupprimer() + "'); ");
        return addressId.ToString();
    }
    System::Data::DataSet^ ServiceAdresse::SelectAllServiceAdresse() {
        return bdd->executeQuery("SELECT * FROM Adresse");
    }

    void ServiceAdresse::DeleteServiceAdresse(Adresse^ adresse) {
        String^ query = adresse->DeleteAdresse();
        bdd->executeNonQuery(query);
    }
}