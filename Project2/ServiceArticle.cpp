#include "ServiceArticle.h"
#include "Article.h"
#include <cstdlib>

namespace NS_Article {

    ServiceArticle::ServiceArticle() {
        bdd = gcnew BDD();
    }

    ServiceArticle::~ServiceArticle() {
        delete bdd;
    }

    int ServiceArticle::GenererReferenceUnique() {
        // Générer une référence aléatoire de 6 chiffres entre 0 et 9
        return rand() % 1000000; // 1000000 est 10^6, donc une référence de 6 chiffres
    }

    bool ServiceArticle::ReferenceDejaUtilisee(int reference) {
        // Vérifier si la référence est déjà présente dans la base de données
        String^ query = "SELECT COUNT(*) FROM Article WHERE Ref_Article = " + reference;
        int count = Convert::ToInt32(bdd->executeScalar(query));

        return count > 0;
    }

    void ServiceArticle::InsertArticle(Article^ article) {
        // Générer une référence unique
        int reference;
        do {
            reference = GenererReferenceUnique();
        } while (ReferenceDejaUtilisee(reference));

        // Assigner la référence à l'article
        article->setRefArticle(reference);

        // Définir le taux de TVA à 20,6%
        article->setTauxTVA(20.6);

        // Insérer l'article dans la base de données
        String^ query = article->Create();
        bdd->executeNonQuery(query);
    }
    System::Data::DataSet^ ServiceArticle::SelectAllArticle() {
        return bdd->executeQuery("SELECT * FROM Article");
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