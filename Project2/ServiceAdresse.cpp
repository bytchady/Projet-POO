#pragma once
#include "BDD.h"
#include "Adresse.h"
#include "ServiceAdresse.h" 

using namespace System::Data;
using namespace System::Collections::Generic;

ServiceAdresse::ServiceAdresse() {
    bdd = gcnew BDD();
}

ServiceAdresse::~ServiceAdresse() {
    delete bdd;
}

List<Adresse^>^ ServiceAdresse::SelectAllAdresse() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Adresse WHERE Supprimer = 0");

    List<Adresse^>^ list = gcnew List<Adresse^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows)
    {
        Adresse^ ad = gcnew Adresse();
        ad->setIdAdresse((int)row["Id_Adresse"]);
        ad->setNumRue((String^)row["Num_Rue"]);
        ad->setNomRue((String^)row["Nom_Rue"]);
        ad->setComplementAdr((String^)row["Complement_Adr"]);
        ad->setNomVille((String^)row["Nom_Ville"]);
        ad->setCodePostal((String^)row["Code_Postal"]);
        if (row->IsNull("Supprimer"))
            ad->setSupprimer(0);
        else
            ad->setSupprimer((bool)row["Supprimer"]);
        list->Add(ad);
    }

    return list;
}

void ServiceAdresse::InsertAdresse(Adresse^ ad) {
    int id_adresse = bdd->executeInsert("INSERT INTO Adresse (Num_Rue, Nom_Rue, Complement_Adr, Nom_Ville, Code_Postal, Supprimer) VALUES ('" +
        ad->getNumRue() + "', '" + ad->getNomRue() + "', '" + ad->getComplementAdr() + "', '" +
        ad->getNomVille() + "', '" + ad->getCodePostal() + "', '" + ad->getSupprimer() + "')");

    ad->setIdAdresse(id_adresse);
}

void ServiceAdresse::UpdateAdresse(Adresse^ ad) {
    bdd->executeNonQuery("UPDATE Adresse SET Num_Rue = '" + ad->getNumRue() +
        "', Nom_Rue = '" + ad->getNomRue() +
        "', Complement_Adr = '" + ad->getComplementAdr() +
        "', Nom_Ville = '" + ad->getNomVille() +
        "', Code_Postal = '" + ad->getCodePostal() +
        "' WHERE Id_Adresse = " + ad->getIdAdresse());
}

void ServiceAdresse::DeleteAdresse(Adresse^ ad) {
    bdd->executeNonQuery("UPDATE Adresse SET Supprimer = 1 WHERE Id_Adresse = " + ad->getIdAdresse());
}
