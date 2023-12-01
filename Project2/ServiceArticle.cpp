#include "ServiceArticle.h"
#include "Article.h"

namespace NS_Article {

    ServiceArticle::ServiceArticle() {
        bdd = gcnew BDD();
    }

    ServiceArticle::~ServiceArticle() {
        delete bdd;
    }

    System::Data::DataSet^ ServiceArticle::SelectAllArticle() {
        return bdd->executeQuery("SELECT * FROM Article");
    }

    void ServiceArticle::InsertArticle(Article^ article) {
        String^ query = article->Create();
        bdd->executeNonQuery(query);
    }

    void ServiceArticle::DeleteArticle(Article^ article) {
        String^ query = article->Delete();
        bdd->executeNonQuery(query);
    }

    void ServiceArticle::UpdateArticle(Article^ article) {
        String^ query = article->Update();
        bdd->executeNonQuery(query);
    }

    System::Data::DataTable^ ServiceArticle::GetDataTable() {
        String^ query = "SELECT * FROM Article";
        return bdd->executeQuery(query)->Tables[0];
    }

}