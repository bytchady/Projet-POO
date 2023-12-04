#include "ServiceArticle.h"
#include "Article.h"

namespace NS_Article {

    ServiceArticle::ServiceArticle() {
        bdd = gcnew BDD();
    }

    ServiceArticle::~ServiceArticle() {
        delete bdd;
    }

    bool ServiceArticle::InsertServiceArticle(Article^ article) {
        String^ query = article->CreateArticle();
        System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
        bdd->executeNonQuery(query);
        return true;
    }
    System::Data::DataSet^ ServiceArticle::SelectAllServiceArticle() {
        return bdd->executeQuery("SELECT Ref_Article, Nature_Article, Nom_Article, Couleur_Article, Stock_Article, Quantite_Reapprovisionnement, Prix_HT FROM Article WHERE Supprimer = 0");
    }

    void ServiceArticle::DeleteServiceArticle(Article^ article) {
        String^ query = article->DeleteArticle();
        bdd->executeNonQuery(query);
    }

    void ServiceArticle::UpdateServiceArticle(Article^ article) {
        String^ query = article->UpdateArticle();
        bdd->executeNonQuery(query);
    }

    bool ServiceArticle::ArticleExists(int refArticle) {
        // Construire la requête SQL pour vérifier l'existence de la référence de l'article
        String^ checkQuery = "SELECT Ref_Article FROM Article WHERE Ref_Article = " + Convert::ToString(refArticle);
        System::Data::DataSet^ result = bdd->executeQuery(checkQuery);

        // Vérifier si le DataSet contient des lignes
        return result != nullptr && result->Tables[0]->Rows->Count > 0;
    }
}