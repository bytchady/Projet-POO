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
        cmd->setIdPersonnel((int)row["Id_Personnel"]);
        cmd->setIdLivraison((int)row["Id_Livraison"]);
        cmd->setIdFacturation((int)row["Id_Facturation"]);
        cmd->setIdClient((int)row["Id_Client"]);

        list->Add(cmd);
    }
    return list;
}

void ServiceCommande::InsertCommande(Commande^ commande) {
    String^ totalTTC = commande->getTotalTTC().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalHT = commande->getTotalHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalTVA = commande->getTotalTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ remiseCommande = commande->getRemiseCommande().ToString(System::Globalization::CultureInfo::InvariantCulture);

    int id_commande = bdd->executeInsert("INSERT INTO Commande (Ref_Commande, Total_TTC, Total_HT, Total_TVA, Date_Emission, Date_Livraison, Date_PaiementFinal, Remise_Commande, Supprimer, Id_Personnel, Id_Livraison, Id_Facturation, Id_Client) VALUES ('" + commande->getRefCommande() + "','" + totalTTC + "','" + totalHT + "','" + totalTVA + "','" + commande->getDateEmission() + "','" + commande->getDateLivraison() + "','" + commande->getDatePaiementFinal() + "','" + remiseCommande + "','" + commande->getSupprimer() + "','" /* +commande->getIdPersonnel() +*/ "','" + commande->getIdLivraison() + "','" + commande->getIdFacturation() + "','" + commande->getIdClient() + "');");
    commande->setIdCommande(id_commande);
}

void ServiceCommande::UpdateCommande(Commande^ commande) {
    String^ totalTTC = commande->getTotalTTC().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalHT = commande->getTotalHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ totalTVA = commande->getTotalTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ remiseCommande = commande->getRemiseCommande().ToString(System::Globalization::CultureInfo::InvariantCulture);

    bdd->executeNonQuery("UPDATE Commande SET Ref_Commande = '" + commande->getRefCommande() + "', Total_TTC = '" + totalTTC + "', Total_HT = '" + totalHT + "', Total_TVA = '" + totalTVA + "', Date_Emission = '" + commande->getDateEmission() + "', Date_Livraison = '" + commande->getDateLivraison() + "', Date_PaiementFinal = '" + commande->getDatePaiementFinal() + "', Remise_Commande = '" + remiseCommande + "', Supprimer = 0, Id_Personnel = '"/* + commande->getIdPersonnel() +*/ "', Id_Livraison = '" + commande->getIdLivraison() + "', Id_Facturation = '" + commande->getIdFacturation() + "', Id_Client = '" + commande->getIdClient() + "' WHERE Id_Commande = '" + commande->getIdCommande() + "';");
}

void ServiceCommande::DeleteCommande(Commande^ commande) {
    bdd->executeNonQuery("UPDATE Commande SET Supprimer = 1 WHERE Id_Commande = " + commande->getIdCommande());
}
