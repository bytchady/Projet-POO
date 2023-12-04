#include "ServicePersonnel.h"
#include "Personnel.h"

namespace NS_Personnel {

    ServicePersonnel::ServicePersonnel() {
        bdd = gcnew BDD();
    }

    ServicePersonnel::~ServicePersonnel() {
        delete bdd;
    }

    void ServicePersonnel::InsertServicePersonnel(Personnel^ personnel) {
        String^ query = personnel->CreatePersonnel();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
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