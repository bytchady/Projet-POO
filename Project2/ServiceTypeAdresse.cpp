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

List<TypeAdresse^>^ ServiceTypeAdresse::SelectAllLivraisonAdresse(TypeAdresse^ typeAdresse) {
    String^ query = "SELECT * FROM Posseder p "
        "JOIN Client cl ON p.Id_Client = cl.Id_Client "
        "JOIN Adresse ad ON p.Id_Adresse = ad.Id_Adresse "
        "WHERE cl.Supprimer = 0 "
        "AND ad.Supprimer = 0 "
        "AND cl.Id_Client = " + typeAdresse->getClient()->getIdClient() +
        " AND p.Type_Adresse like '%Livraison%';";

    // Afficher la requête dans la fenêtre de sortie de Visual Studio
    System::Diagnostics::Debug::WriteLine(query);

    // Exécuter la requête et récupérer le DataSet
    DataSet^ ds = bdd->executeQuery(query);

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

        if (row->IsNull("Nom_Rue"))
            adresse->setNomRue("");
        else
            adresse->setNomRue((String^)row["Nom_Rue"]);

        if (row->IsNull("Complement_Adr"))
            adresse->setComplementAdr("");
        else
            adresse->setComplementAdr((String^)row["Complement_Adr"]);

        if (row->IsNull("Nom_Ville"))
            adresse->setNomVille("");
        else
            adresse->setNomVille((String^)row["Nom_Ville"]);

        if (row->IsNull("Code_Postal"))
            adresse->setCodePostal("");
        else
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

List<TypeAdresse^>^ ServiceTypeAdresse::SelectAllFacturationAdresse(TypeAdresse^ typeAdresse) {
    String^ query = "SELECT * FROM Posseder p "
        "JOIN Client cl ON p.Id_Client = cl.Id_Client "
        "JOIN Adresse ad ON p.Id_Adresse = ad.Id_Adresse "
        "WHERE cl.Supprimer = 0 "
        "AND ad.Supprimer = 0 "
        "AND cl.Id_Client = " + typeAdresse->getClient()->getIdClient() +
        " AND p.Type_Adresse like '%Facturation%';";
    
    System::Diagnostics::Debug::WriteLine(query);

    // Exécuter la requête et récupérer le DataSet
    DataSet^ ds = bdd->executeQuery(query);

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

        if (row->IsNull("Nom_Rue"))
            adresse->setNomRue("");
        else
            adresse->setNomRue((String^)row["Nom_Rue"]);

        if (row->IsNull("Complement_Adr"))
            adresse->setComplementAdr("");
        else
            adresse->setComplementAdr((String^)row["Complement_Adr"]);

        if (row->IsNull("Nom_Ville"))
            adresse->setNomVille("");
        else
            adresse->setNomVille((String^)row["Nom_Ville"]);

        if (row->IsNull("Code_Postal"))
            adresse->setCodePostal("");
        else
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
    String^ query = "INSERT INTO Posseder (Id_Client, Id_Adresse, Type_Adresse) VALUES ('" + typeAdresse->getClient()->getIdClient() + "','" + typeAdresse->getAdresse()->getIdAdresse() + "','" + typeAdresse->getTypeAdresse() + "');";
    System::Diagnostics::Debug::WriteLine(query);
    bdd->executeNonQuery(query);
}


