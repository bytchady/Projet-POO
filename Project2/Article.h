#pragma once
using namespace std;
using namespace System;

public ref class Article
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
    void setIdArticle(int Id_Article);
    void setRefArticle(int Ref_Article);
    void setNom(String^ Nom_Article);
    void setNature(String^ Nature_Article);
    void setCouleur(String^ Couleur_Article);
    void setStock(int Stock_Article);
    void setQuantiteReapprovisionnement(int Quantite_Reapprovisionnement);
    void setPrixHT(float Prix_HT);
    void setTauxTVA(float Taux_TVA);
    void setSupprimer(bool Supprimer);

    int getIdArticle();
    int getRefArticle();
    String^ getNom();
    String^ getNature();
    String^ getCouleur();
    int getStock();
    int getQuantiteReapprovisionnement();
    float getPrixHT();
    float getTauxTVA();
    bool getSupprimer();
};