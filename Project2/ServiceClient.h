#pragma once
#include "BDD.h"
#include "Client.h"
using namespace System::Data;
using namespace  System::Collections::Generic;

public ref class ServiceClient {
    private:
        BDD^ bdd;
    public:
        ServiceClient();
        ~ServiceClient();
        List<Client^>^ ServiceClient::SelectAllClient();
        void InsertClient(Client^ c);
        void DeleteClient(Client^ c);
        void UpdateClient(Client^ c);
};

