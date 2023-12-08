#pragma once

using namespace System;

namespace NS_Acheter {
    public ref class Acheter
    {
    private:
        int Id_Article;
        int Id_Commande;
        int Quantite_Article;
        int Prix_Final;

    public:
        void setIdArticle();
        void setIdCommande();
        void setQuantiteArticle();
        void setPrixFinal();

        int^ getIdArticle();
        int getIdCommande();
        int getQuantiteArticle();
        int getPrixFinal(float prixInitial, int quantiteArticle);
        
        String^ CreateAcheter();
        String^ UpdateAcheter();
        String^ DeleteAcheter();
    };
}

