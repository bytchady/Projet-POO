#pragma once
#include "Article.h"
#include "Commande.h"

using namespace System;

public ref class Panier
{
private:
    int Quantite_Article;
    float Prix_Final;
    Commande^ commande = gcnew Commande();
    Article^ article = gcnew Article();

public:
    void setCommande(Commande^ commande)
    {
        this->commande = commande;
    }

    void setArticle(Article^ article)
    {
        this->article = article;
    }

    void setQuantiteArticle(int quantiteArticle)
    {
        this->Quantite_Article = quantiteArticle;
    }

    void setPrixFinal(float prixFinal)
    {
        this->Prix_Final = prixFinal;
    }
    
    int getQuantiteArticle()
    {
        return this->Quantite_Article;
    }

    float getPrixFinal()
    {
        return this->Prix_Final;
    }

    Commande^ getCommande()
    {
        return this->commande;
    }

    Article^ getArticle()
    {
        return this->article;
    }
};


