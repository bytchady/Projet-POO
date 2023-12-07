#pragma once
#include "BDD.h"
#include "Commande.h"


namespace NS_Commande {
    public ref class ServiceCommande {
    private:
        BDD^ bdd;
    public:
        ServiceCommande();
        ~ServiceCommande();
        System::Data::DataSet^ SelectAllServiceCommande(String^);
        void InsertServiceCommande(Commande^ commande);
        void DeleteServiceCommande(Commande^ commande);
        void UpdateServiceCommande(Commande^ commande);
        bool CommandeExists(String^ refCommande);
    };
}
