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
        // G�n�rer une r�f�rence al�atoire de 6 chiffres entre 0 et 9
        return rand() % 1000000; // 1000000 est 10^6, donc une r�f�rence de 6 chiffres
    }

    bool ServiceArticle::ReferenceDejaUtilisee(int reference) {
        // V�rifier si la r�f�rence est d�j� pr�sente dans la base de donn�es
        String^ query = "SELECT COUNT(*) FROM Article WHERE Ref_Article = " + reference;
        int count = Convert::ToInt32(bdd->executeScalar(query));

        return count > 0;
    }

    void ServiceArticle::InsertArticle(Article^ article) {
        // G�n�rer une r�f�rence unique
        int reference;
        do {
            reference = GenererReferenceUnique();
        } while (ReferenceDejaUtilisee(reference));

        // Assigner la r�f�rence � l'article
        article->setRefArticle(reference);

        // D�finir le taux de TVA � 20,6%
        article->setTauxTVA(20.6);

        // Ins�rer l'article dans la base de donn�es
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