#include "ServiceCommande.h"
#include "Commande.h"
#include "Adresse.h"
#include "Client.h"

ServiceCommande::ServiceCommande() {
    bdd = gcnew BDD();
}

ServiceCommande::~ServiceCommande() {
    delete bdd;
}

List<Commande^>^ ServiceCommande::SelectCommandeClient(Commande^ commande) {
    String^ query = "SELECT * FROM Commande cmd"
        "JOIN Client cl ON cmd.Id_Client = cl.Id_Client"
        "JOIN Posseder pl ON cmd.Id_Adresse = pl.Id_Adresse"
        "JOIN Posseder pf ON cmd.Id_Adresse_1 = pf.Id_Adresse"
        "JOIN Adresse adl ON cmd.Id_Adresse = adl.Id_Adresse"
        "JOIN Adresse adf ON cmd.Id_Adresse_1 = adf.Id_Adresse"
        "WHERE cl.Supprimer = 0"
        "AND cl.Id_Client = " + commande->getClient()->getIdClient() +
        "AND pl.Id_Client = " + commande->getClient()->getIdClient() +
        "AND pf.Id_Client = " + commande->getClient()->getIdClient() +
        "AND cmd.Supprimer = 0"
        "AND adl.Supprimer = 0"
        "AND adf.Supprimer = 0;";

    System::Diagnostics::Debug::WriteLine(query);

    DataSet^ ds = bdd->executeQuery(query);

    List<Commande^>^ list = gcnew List<Commande^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows) {
        Commande^ cmd = gcnew Commande();
        TypeAdresse^ livraison = gcnew TypeAdresse();
        TypeAdresse^ facturation = gcnew TypeAdresse();
        Client^ cl = gcnew Client();

        cmd->setLivraison(livraison);
        cmd->setFacturation(facturation);
        cmd->setClient(cl);

        if (row->IsNull("Id_Commande"))
            cmd->setIdCommande(0);
        else
            cmd->setIdCommande((int)row["Id_Commande"]);
        
        if (row->IsNull("Ref_Commande"))
            cmd->setRefCommande("");
        else
            cmd->setRefCommande((String^)row["Ref_Commande"]);

        if (row->IsNull("Total_TTC"))
            cmd->setTotalTTC(0);
        else
            cmd->setTotalTTC(Convert::ToSingle(row["Total_TTC"]));

        if (row->IsNull("Total_HT"))
            cmd->setTotalHT(0);
        else
            cmd->setTotalHT(Convert::ToSingle(row["Total_HT"]));

        if (row->IsNull("Total_TVA"))
            cmd->setTotalTVA(0);
        else
            cmd->setTotalTVA(Convert::ToSingle(row["Total_TVA"]));

        cmd->setDateEmission(row->IsNull("Date_Emission") ? DateTime::MinValue : Convert::ToDateTime(row["Date_Emission"]));
        cmd->setDateLivraison(row->IsNull("Date_Livraison") ? DateTime::MinValue : Convert::ToDateTime(row["Date_Livraison"]));
        cmd->setDatePaiementFinal(row->IsNull("Date_PaiementFinal") ? DateTime::MinValue : Convert::ToDateTime(row["Date_PaiementFinal"]));

        if (row->IsNull("Remise_Commande"))
            cmd->setRemiseCommande(0);
        else
            cmd->setRemiseCommande(Convert::ToSingle(row["Remise_Commande"]));
        cmd->setSupprimer((bool)row["Supprimer"]);
      
        if (row->IsNull("Id_Adresse"))
            livraison->getAdresse()->setIdAdresse(0);
        else
            livraison->getAdresse()->setIdAdresse((int)row["Id_Adresse"]);

        if (row->IsNull("Id_Adresse_1"))
            facturation->getAdresse()->setIdAdresse(0);
        else
            facturation->getAdresse()->setIdAdresse((int)row["Id_Adresse_1"]);

        if (row->IsNull("Id_Client"))
            cl->setIdClient(0);
        else
            cl->setIdClient((int)row["Id_Client"]);
       

        list->Add(cmd);
    }
    return list;
}
static int incrementalNumberCounter = 0;
String^ ServiceCommande::GenerateCommandReference(String^ prenom, String^ nom, int annee, String^ ville)
{
    incrementalNumberCounter++;
    String^ reference = "";

    if (!String::IsNullOrEmpty(prenom) && prenom->Length >= 2)
        reference += prenom->Substring(0, 2);

    if (!String::IsNullOrEmpty(nom) && nom->Length >= 2)
        reference += nom->Substring(0, 2);

    reference += annee.ToString();

    if (!String::IsNullOrEmpty(ville) && ville->Length >= 3)
        reference += ville->Substring(0, 3);

    reference += incrementalNumberCounter.ToString();

    return reference;
}

void ServiceCommande::InsertCommande(Commande^ commande) {
    String^ totalTTC = commande->getTotalTTC().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalHT = commande->getTotalHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalTVA = commande->getTotalTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ remiseCommande = commande->getRemiseCommande().ToString(System::Globalization::CultureInfo::InvariantCulture);

    String^ refCommande = GenerateCommandReference(commande->getClient()->getPrenomClient(),commande->getClient()->getNomClient(),commande->getDateEmission().Year, commande->getLivraison()->getAdresse()->getNomVille());

    int id_commande = bdd->executeInsert("INSERT INTO Commande (Ref_Commande, Total_TTC, Total_HT, Total_TVA, Date_Emission, Date_Livraison, Date_PaiementFinal, Remise_Commande, Supprimer, Id_Personnel, Id_Adresse, Id_Adresse_1, Id_Client) VALUES ('" + refCommande + "','" + totalTTC + "','" + totalHT + "','" + totalTVA + "','" + commande->getDateEmission() + "','" + commande->getDateLivraison() + "','" + commande->getDatePaiementFinal() + "','" + remiseCommande + "','" + commande->getSupprimer() + commande->getLivraison() + "','" + commande->getFacturation() + "','" + commande->getClient() + "');");
    commande->setIdCommande(id_commande);
}


void ServiceCommande::UpdateCommande(Commande^ commande) {
    String^ totalTTC = commande->getTotalTTC().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalHT = commande->getTotalHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalTVA = commande->getTotalTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ remiseCommande = commande->getRemiseCommande().ToString(System::Globalization::CultureInfo::InvariantCulture);

    bdd->executeNonQuery("UPDATE Commande SET Ref_Commande = '" + commande->getRefCommande() + "', Total_TTC = '" + totalTTC + "', Total_HT = '" + totalHT + "', Total_TVA = '" + totalTVA + "', Date_Emission = '" + commande->getDateEmission() + "', Date_Livraison = '" + commande->getDateLivraison() + "', Date_PaiementFinal = '" + commande->getDatePaiementFinal() + "', Remise_Commande = '" + remiseCommande + "', Supprimer = 0,Id_Adresse = '" + commande->getLivraison() + "', Id_Adresse_1 = '" + commande->getFacturation() + "', Id_Client = '" + commande->getClient() + "' WHERE Id_Commande = '" + commande->getIdCommande() + "';");
}

void ServiceCommande::DeleteCommande(Commande^ commande) {
    bdd->executeNonQuery("UPDATE Commande SET Supprimer = 1 WHERE Id_Commande = " + commande->getIdCommande());
}
