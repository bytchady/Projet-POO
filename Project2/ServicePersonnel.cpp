#include "ServicePersonnel.h"
#include "Personnel.h"
#include "BDD.h"
#include "Adresse.h"

using namespace NS_Adresse;



namespace NS_Personnel {

    ServicePersonnel::ServicePersonnel() {
        bdd = gcnew BDD();
    }

    ServicePersonnel::~ServicePersonnel() {
        delete bdd;
    }

    void ServicePersonnel::InsertServicePersonnel(Personnel^ personnel, String^ adressId) {
        //String^ query = personnel->CreatePersonnel();
        //System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        
        
        bdd->executeInsert("INSERT INTO Personnel (Nom_Personnel, Prenom_Personnel, Naissance_Personnel, Date_Embauche, Supprimer, Id_Adresse) VALUES ('" + personnel->getNom_Personnel() + "', '" + personnel->getPrenom_Personnel() + "', '" + personnel->getNaissance_Personnel() + "', '" + personnel->getDate_Embauche() + "', '" + personnel->getSupprimer() + "', '" + adressId + "'); ");
    }
    System::Data::DataSet^ ServicePersonnel::SelectAllServicePersonnel() {
        return bdd->executeQuery("SELECT * FROM Personnel");
    }

    void ServicePersonnel::DeleteServicePersonnel(Personnel^ personnel) {
        String^ query = personnel->DeletePersonnel();
        bdd->executeNonQuery(query);
    }

    void ServicePersonnel::UpdateServicePersonnel(Personnel^ personnel) {
        String^ query = personnel->UpdatePersonnel();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
    }
}