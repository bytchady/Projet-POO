#include "ServiceAdresse.h"
#include "Adresse.h"

namespace NS_Adresse {

    ServiceAdresse::ServiceAdresse() {
        bdd = gcnew BDD();
    }

    ServiceAdresse::~ServiceAdresse() {
        delete bdd;
    }

    void ServiceAdresse::InsertServiceAdresse(Adresse^ adresse) {
        String^ query = adresse->CreateAdresse();
        System::Diagnostics::Debug::WriteLine("Requ�te SQL g�n�r�e : " + query);
        bdd->executeNonQuery(query);
    }
    System::Data::DataSet^ ServiceAdresse::SelectAllServiceAdresse() {
        return bdd->executeQuery("SELECT * FROM Adresse");
    }

    void ServiceAdresse::DeleteServiceAdresse(Adresse^ adresse) {
        String^ query = adresse->DeleteAdresse();
        bdd->executeNonQuery(query);
    }
}