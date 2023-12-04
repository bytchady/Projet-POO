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
        return bdd->executeQuery("SELECT * FROM Article");
    }

    void ServiceArticle::DeleteServiceArticle(Article^ article) {
        String^ query = article->DeleteArticle();
        bdd->executeNonQuery(query);
    }

    void ServiceArticle::UpdateServiceArticle(Article^ article) {
        String^ query = article->UpdateArticle();
        bdd->executeNonQuery(query);
    }
}