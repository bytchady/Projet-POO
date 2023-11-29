#pragma once
#include <string>
using namespace std;

using namespace System;

namespace NS_Article {
    ref class Article
    {
    private:
        int Id_Article;
        int Ref_Article;
        String^ Nom_Article;
        String^ Nature_Article;
        String^ Couleur_Article;
        int Stock_Article;
        int Quantite_Reapprovisionnement;
        float Prix_HT;
        float Taux_TVA;
        bool Supprimer;

    public:
        void setRefArticle(int ref_article);
        void setNom(String^ nom_article);
        void setNature(String^ nature);
        void setCouleur(String^ couleur);
        void setStock(int stock);
        void setQuantiteReapprovisionnement(int quantite_reapprovisionnement);
        void setPrixHT(float prix_ht);
        void setTauxTVA(float taux_tva);
        void setSupprimer(bool supprimer);

        int getRefArticle();
        String^ getNom();
        String^ getNature();
        String^ getCouleur();
        int getStock();
        int getQuantiteReapprovisionnement();
        float getPrixHT();
        float getTauxTVA();
        bool getSupprimer();

        String^ Create();
        String^ Update();
        String^ Delete();
        String^ Select();
    };
}
