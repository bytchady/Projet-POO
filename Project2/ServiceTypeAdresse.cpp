#include "ServiceTypeAdresse.h"
#include "TypeAdresse.h"
#include "Adresse.h"
#include "Client.h"

ServiceTypeAdresse::ServiceTypeAdresse() {
    bdd = gcnew BDD();
}

ServiceTypeAdresse::~ServiceTypeAdresse() {
    delete bdd;
}

List<TypeAdresse^>^ ServiceTypeAdresse::SelectAllTypeAdresse() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Posseder p"
        "JOIN Client cl ON p.Id_Client = cl.Id_Client"
        "JOIN Adresse ad ON p.Id_Adresse = ad.Id_Adresse"
        "WHERE cl.Supprimer = 0"
        "AND ad.Supprimer = 0;"
    );

    List<TypeAdresse^>^ list = gcnew List<TypeAdresse^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows) {
        TypeAdresse^ ta = gcnew TypeAdresse();
        Adresse^ adresse = gcnew Adresse();
        Client^ client = gcnew Client();

        ta->setAdresse(adresse);
        ta->setClient(client);

        if (row->IsNull("Id_Adresse"))
            adresse->setIdAdresse(0);
        else
            adresse->setIdAdresse((int)row["Id_Adresse"]);

        if (row->IsNull("Num_Rue"))
            adresse->setNumRue("");
        else
            adresse->setNumRue((String^)row["Num_Rue"]);

        adresse->setNomrue((String^)row["Nom_Rue"]);
        adresse->setComplementAdr((String^)row["Complement_Adresse"]);
        adresse->setNomVille((String^)row["Nom_Ville"]);
        adresse->setCodePostal((String^)row["Code_Postal"]);

        if (row->IsNull("Id_Client"))
            client->setIdClient(0);
        else
            client->setIdClient((int)row["Id_Client"]);

        ta->setTypeAdresse((String^)row["Type_Adresse"]);

        list->Add(ta);
    }

    return list;
}

void ServiceTypeAdresse::InsertTypeAdresse(TypeAdresse^ typeAdresse) {
    bdd->executeInsert("INSERT INTO TypeAdresse (Id_Client, Id_Adresse, Type_Adresse) VALUES ('" + typeAdresse->getClient()->getIdClient() + "','" + typeAdresse->getAdresse()->getIdAdresse() + "','" + typeAdresse->getTypeAdresse() + "');");
}

void ServiceTypeAdresse::UpdateTypeAdresse(TypeAdresse^ typeAdresse) {
    String^ query = "UPDATE TypeAdresse SET Type_Adresse = '" + typeAdresse->getTypeAdresse() +
        "' WHERE Id_Adresse = " + typeAdresse->getAdresse()->getIdAdresse() +
        " AND Id_Client = " + typeAdresse->getClient()->getIdClient();

    System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);

    bdd->executeNonQuery(query);
}

