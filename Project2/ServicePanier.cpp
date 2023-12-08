#include "ServicePanier.h"
#include "Article.h"
#include "Commande.h"

ServicePanier::ServicePanier() {
    bdd = gcnew BDD();
}

ServicePanier::~ServicePanier() {
    delete bdd;
}

List<Panier^>^ ServicePanier::SelectAllPanier() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Acheter ach"
        "JOIN Article AS art ON ach.Id_Article = art.Id_Article"
        "JOIN Commande AS cmd ON ach.Id_Commande = cmd.Id_Commande"
       " WHERE cmd.Supprimer = 0"
        "AND art.Supprimer = 0;");

    List<Panier^>^ list = gcnew List<Panier^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows) {
        Panier^ panier = gcnew Panier();
        Commande^ commande = gcnew Commande();
        Article^ article = gcnew Article();

        panier->setCommande(commande);
        panier->setArticle(article);

        if (row->IsNull("Id_Commande"))
            commande->setIdCommande(0);
        else
            commande->setIdCommande((int)row["Id_Commande"]);

        if (row->IsNull("Id_Article"))
            article->setIdArticle(0);
        else
            article->setIdArticle((int)row["Id_Article"]);

        panier->setQuantiteArticle((int)row["Quantite_Article"]);
        panier->setPrixFinal(Convert::ToSingle(row["Prix_Final"]));

        list->Add(panier);
    }

    return list;
}

void ServicePanier::InsertPanier(Panier^ panier) {
    bdd->executeInsert("INSERT INTO Acheter (Id_Commande, Id_Article, Quantite_Article, Prix_Final) VALUES ('" + panier->getCommande()->getIdCommande() + "','" + panier->getArticle()->getIdArticle() + "','" + panier->getQuantiteArticle() + "','" + panier->getPrixFinal() + "');");
}

void ServicePanier::UpdatePanier(Panier^ panier) {
    String^ query = "UPDATE Acheter SET Quantite_Article = '" + panier->getQuantiteArticle() +
        "', Prix_Final = '" + panier->getPrixFinal() +
        "' WHERE Id_Article = " + panier->getArticle()->getIdArticle() +
        " AND Id_Commande = " + panier->getCommande()->getIdCommande();
    System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
    bdd->executeNonQuery(query);
}

void ServicePanier::DeletePanier(Panier^ panier) {
    String^ query = "DELETE * FROM Acheter WHERE Id_Article = " + panier->getArticle()->getIdArticle() +
        " AND Id_Commande = " + panier->getCommande()->getIdCommande();
    System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
    bdd->executeNonQuery(query);
}