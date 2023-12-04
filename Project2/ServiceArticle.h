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
        System::Data::DataSet^ SelectAllServiceArticle();
        bool InsertServiceArticle(Article^ article);
        void DeleteServiceArticle(Article^ article);
        void UpdateServiceArticle(Article^ article);
    };
}
