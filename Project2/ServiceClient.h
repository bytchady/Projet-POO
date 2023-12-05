#pragma once
#include "BDD.h"
#include "Client.h"


namespace NS_Client {
    public ref class ServiceClient {
    private:
        BDD^ bdd;
    public:
        ServiceClient();
        ~ServiceClient();
        System::Data::DataSet^ SelectAllServiceClient();
        bool InsertServiceClient(Client^ client);
        void DeleteServiceClient(Client^ client);
        void UpdateServiceClient(Client^ client);
        bool ClientExists(String^ num_client);
    };
}
