#pragma once
#include "BDD.h"
#include "Article.h"
using namespace System::Collections::Generic;
using namespace System::Data;

public ref class ServiceArticle {
private:
    BDD^ bdd;

public:
    ServiceArticle();
    ~ServiceArticle();

    List<Article^>^ ServiceArticle::SelectAllArticle();
    void InsertArticle(Article^ article);
    void DeleteArticle(Article^ article);
    void UpdateArticle(Article^ article);
    //bool ArticleExists(int refArticle;
};


