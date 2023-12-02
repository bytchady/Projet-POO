#pragma once
#include "BDD.h"
#include "Article.h"


namespace NS_Article {
    public ref class ServiceArticle {
    private:
        BDD^ bdd;
    public:
        ServiceArticle();
        ~ServiceArticle();
        System::Data::DataSet^ SelectAllArticle();
        void InsertArticle(Article^ article);
        void DeleteArticle(Article^ article);
        void UpdateArticle(Article^ article);
        System::Data::DataTable^ GetDataTable();
        int GenererReferenceUnique();
        bool ReferenceDejaUtilisee(int reference);
    };
}
