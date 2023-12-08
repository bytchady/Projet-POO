#include "ServiceArticle.h"
#include "Article.h"



ServiceArticle::ServiceArticle() {
    bdd = gcnew BDD();
}

ServiceArticle::~ServiceArticle() {
    delete bdd;
}


List<Article^>^ ServiceArticle::SelectAllArticle() {
    DataSet^ ds = bdd->executeQuery("SELECT * FROM Article WHERE Supprimer = 0");

    List<Article^>^ list = gcnew List<Article^>();

    for each (DataRow ^ row in ds->Tables[0]->Rows) {
        Article^ a = gcnew Article();
        a->setIdArticle((int)row["Id_Article"]);
        a->setRefArticle((int)row["Ref_Article"]);
        a->setNom((String^)row["Nom_Article"]);
        a->setNature((String^)row["Nature_Article"]);
        a->setCouleur((String^)row["Couleur_Article"]);
        a->setStock((int)row["Stock_Article"]);
        a->setQuantiteReapprovisionnement((int)row["Quantite_Reapprovisionnement"]);
        a->setPrixHT(Convert::ToSingle(row["Prix_HT"]));
        a->setTauxTVA(Convert::ToSingle(row["Taux_TVA"]));
        a->setSupprimer((bool)(row["Supprimer"]));
        list->Add(a);
    }
    return list;
}

void ServiceArticle::InsertArticle(Article^ article) {
    String^ prixHT = article->getPrixHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ tauxTVA = article->getTauxTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);

    int id_article = bdd->executeInsert("INSERT INTO Article (Ref_Article, Nom_Article, Nature_Article, Couleur_Article, Stock_Article, Quantite_Reapprovisionnement, Prix_HT, Taux_TVA, Supprimer) VALUES ('" + article->getRefArticle() + "','" + article->getNom() + "','" + article->getNature() + "','" + article->getCouleur() + "','" + article->getStock() + "','" + article->getQuantiteReapprovisionnement() + "','" + prixHT + "','" + tauxTVA + "','" + article->getSupprimer() + "');");
    article->setIdArticle(id_article);
}

void ServiceArticle::UpdateArticle(Article^ article) {
    String^ prixHT = article->getPrixHT().ToString(System::Globalization::CultureInfo::InvariantCulture);
    String^ tauxTVA = article->getTauxTVA().ToString(System::Globalization::CultureInfo::InvariantCulture);

    bdd->executeNonQuery("UPDATE Article SET Ref_Article = '" + article->getRefArticle() + "', Nom_Article = '" + article->getNom() + "', Nature_Article = '" + article->getNature() + "', Couleur_Article = '" + article->getCouleur() + "', Stock_Article = '" + article->getStock() + "', Quantite_Reapprovisionnement = '" + article->getQuantiteReapprovisionnement() + "', Prix_HT = '" + prixHT + "', Taux_TVA = '" + tauxTVA + "', Supprimer = 0 WHERE Id_Article = '" + article->getIdArticle() + "';");
}
void ServiceArticle::DeleteArticle(Article^ article) {
    bdd->executeNonQuery("UPDATE Article SET Supprimer = 1 WHERE Id_Article = " + article->getIdArticle());
}