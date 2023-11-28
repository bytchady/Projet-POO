#pragma once
#include <string>
using namespace std;

namespace NS_article {
    class Article
    {
    private:
        int Id_Article;
        int Ref_Article;
        string Nom_Article;
        string Nature_Article;
        string Couleur_Article;
        int Stock_Article;
        int Quantite_Reapprovisionnement;
        float Prix_HT;
        float Taux_TVA;
        bool Supprimer;

    public:
        void setRefArticle(int ref_article);
        void setNom(string& nom_article);
        void setNature(string& nature);
        void setCouleur(string& couleur);
        void setStock(int stock);
        void setQuantiteReapprovisionnement(int quantite_reapprovisionnement);
        void setPrixHT(float prix_ht);
        void setTauxTVA(float taux_tva);
        void setSupprimer(bool supprimer);

        int getRefArticle();
        string getNom();
        string getNature();
        string getCouleur();
        int getStock();
        int getQuantiteReapprovisionnement();
        float getPrixHT();
        float getTauxTVA();
        bool getSupprimer();

        string Create();
        string Update();
        string Delete();
        string Select();
    };
}
