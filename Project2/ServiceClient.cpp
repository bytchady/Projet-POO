#pragma once
#include "BDD.h"
#include "Client.h"
#include "ServiceClient.h"
using namespace System::Data;
using namespace System::Collections::Generic;

ServiceClient::ServiceClient() {
    bdd = gcnew BDD();
}

ServiceClient::~ServiceClient() {
    delete bdd;
}

List<Client^>^ ServiceClient::SelectAllClient() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Client WHERE Supprimer = 0");

    List<Client^>^ list = gcnew List<Client^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        Client^ c = gcnew Client();
        c->setIdClient((int)row["Id_Client"]);
        c->setNumClient((String^)row["Numero_Client"]);
        c->setNomClient((String^)row["Nom_Client"]);
        c->setPrenomClient((String^)row["Prenom_Client"]);
        c->setNaissanceClient((DateTime)row["Date_Naissance"]);
        c->setSupprimer((bool)row["Supprimer"]);

        list->Add(c);
    }

    return list;
}

void ServiceClient::InsertClient(Client^ c) {
   int id_client = bdd->executeInsert("INSERT INTO Client (Numero_Client, Nom_Client, Prenom_Client, Date_Naissance, Supprimer) VALUES ('" +
        c->getNumClient() + "', '" + c->getNomClient() + "', '" + c->getPrenomClient() + "', '" +
        c->getNaissanceClient().ToString("yyyy-MM-dd") + "', '" +
        c->getSupprimer() + "')");

    c->setIdClient(id_client);
}

void ServiceClient::UpdateClient(Client^ c) {
    bdd->executeNonQuery("UPDATE Client SET Numero_Client = '" + c->getNumClient() +
        "', Nom_Client = '" + c->getNomClient() +
        "', Prenom_Client = '" + c->getPrenomClient() +
        "', Date_Naissance = '" + c->getNaissanceClient().ToString("yyyy-MM-dd") +
        //"', Date_PremierAchat = '" + c->getPremierAchat().ToString("yyyy-MM-dd") +
        "' WHERE Id_Client = " + c->getIdClient());
}

void ServiceClient::DeleteClient(Client^ c) {
    bdd->executeNonQuery("UPDATE Client SET Supprimer = 1 WHERE Id_Client = " + c->getIdClient());
}
