#include "ServiceCommande.h"
#include "Commande.h"


ServiceCommande::ServiceCommande() {
    bdd = gcnew BDD();
}

ServiceCommande::~ServiceCommande() {
    delete bdd;
}

List<Commande^>^ ServiceCommande::SelectAllCommande() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Commande WHERE Supprimer = 0");

    List<Commande^>^ list = gcnew List<Commande^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows) {
        Commande^ cmd = gcnew Commande();
        Adresse^ a = gcnew Adresse();
        Client^ cl = gcnew Client();
        Personnel^ p = gcnew Personnel();

        cmd->setLivraison(a);
        if (row->IsNull("Id_Livraison"))
            a->setIdAdresse(0);
        else
            a->setIdAdresse((int)row["Id_Livraison"]);
        if (row->IsNull("Id_Facturation"))
            a->setIdAdresse(0);
        else
            
        cmd->setClient(cl);
        if (row->IsNull("Id_Client"))
            cl->setIdClient(0);
        else
            cl->setIdClient((int)row["Id_Client"]);

        cmd->setPersonnel(p);
        if (row->IsNull("Id_Personnel"))
            p->setId_Personnel(0);
        else
            p->setId_Personnel((int)row["Id_Personnel"]);
        
        cmd->setIdCommande((int)row["Id_Commande"]);
        cmd->setRefCommande((String^)row["Ref_Commande"]);
        cmd->setTotalTTC(Convert::ToSingle(row["Total_TTC"]));
        cmd->setTotalHT(Convert::ToSingle(row["Total_HT"]));
        cmd->setTotalTVA(Convert::ToSingle(row["Total_TVA"]));
        cmd->setDateEmission(Convert::ToDateTime(row["Date_Emission"]));
        cmd->setDateLivraison(Convert::ToDateTime(row["Date_Livraison"]));
        cmd->setDatePaiementFinal(Convert::ToDateTime(row["Date_PaiementFinal"]));
        cmd->setRemiseCommande(Convert::ToSingle(row["Remise_Commande"]));
        cmd->setSupprimer((bool)row["Supprimer"]);

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

    String^ refCommande = GenerateCommandReference(commande->getClient()->getPrenomClient(),
        commande->getClient()->getNomClient(),
        commande->getDateEmission().Year,
        commande->getLivraison()->getNomVille());

    int id_commande = bdd->executeInsert("INSERT INTO Commande (Ref_Commande, Total_TTC, Total_HT, Total_TVA, Date_Emission, Date_Livraison, Date_PaiementFinal, Remise_Commande, Supprimer, Id_Personnel, Id_Livraison, Id_Facturation, Id_Client) VALUES ('" + refCommande + "','" + totalTTC + "','" + totalHT + "','" + totalTVA + "','" + commande->getDateEmission() + "','" + commande->getDateLivraison() + "','" + commande->getDatePaiementFinal() + "','" + remiseCommande + "','" + commande->getSupprimer() + "','" /* +commande->getIdPersonnel() +*/ "','" + commande->getLivraison() + "','" + commande->getFacturation() + "','" + commande->getClient() + "');");
    commande->setIdCommande(id_commande);
}


void ServiceCommande::UpdateCommande(Commande^ commande) {
    String^ totalTTC = commande->getTotalTTC().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalHT = commande->getTotalHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalTVA = commande->getTotalTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ remiseCommande = commande->getRemiseCommande().ToString(System::Globalization::CultureInfo::InvariantCulture);

    bdd->executeNonQuery("UPDATE Commande SET Ref_Commande = '" + commande->getRefCommande() + "', Total_TTC = '" + totalTTC + "', Total_HT = '" + totalHT + "', Total_TVA = '" + totalTVA + "', Date_Emission = '" + commande->getDateEmission() + "', Date_Livraison = '" + commande->getDateLivraison() + "', Date_PaiementFinal = '" + commande->getDatePaiementFinal() + "', Remise_Commande = '" + remiseCommande + "', Supprimer = 0, Id_Personnel = '"/* + commande->getIdPersonnel() +*/ "', Id_Livraison = '" + commande->getLivraison() + "', Id_Facturation = '" + commande->getFacturation() + "', Id_Client = '" + commande->getClient() + "' WHERE Id_Commande = '" + commande->getIdCommande() + "';");
}

void ServiceCommande::DeleteCommande(Commande^ commande) {
    bdd->executeNonQuery("UPDATE Commande SET Supprimer = 1 WHERE Id_Commande = " + commande->getIdCommande());
}
