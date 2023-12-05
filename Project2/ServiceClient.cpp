#include "ServiceClient.h"
#include "Client.h"

namespace NS_Client {

    ServiceClient::ServiceClient() {
        bdd = gcnew BDD();
    }

    ServiceClient::~ServiceClient() {
        delete bdd;
    }

    bool ServiceClient::InsertServiceClient(Client^ client) {
        String^ query = client->CreateClient();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
        return true;
    }
    System::Data::DataSet^ ServiceClient::SelectAllServiceClient() {
        return bdd->executeQuery("SELECT Numero_Client, Nom_Client, Prenom_Client, Naissance_Client, PremierAchat  FROM Client WHERE Supprimer = 0");
    }

    void ServiceClient::DeleteServiceClient(Client^ client) {
        String^ query = client->DeleteClient();
        bdd->executeNonQuery(query);
    }

    void ServiceClient::UpdateServiceClient(Client^ client) {
        String^ query = client->UpdateClient();
        bdd->executeNonQuery(query);
    }

    bool ServiceClient::ClientExists(String^ num_client) {
        String^ checkQuery = "SELECT Numero_Client FROM Client WHERE Numero_Client = " + Convert::ToString(num_client);
        System::Data::DataSet^ result = bdd->executeQuery(checkQuery);
        return result != nullptr && result->Tables[0]->Rows->Count > 0;
    }
}
