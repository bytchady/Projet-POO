#include "Article.h"
using namespace System;


namespace NS_Article {
    void Article::setRefArticle(int ref_article) {
        this->Ref_Article = ref_article;
    }

    void Article::setNom(String^ nom_article) {
        this->Nom_Article = nom_article;
    }

    void Article::setNature(String^ nature) {
        this->Nature_Article = nature;
    }

    void Article::setCouleur(String^ couleur) {
        this->Couleur_Article = couleur;
    }

    void Article::setStock(int stock) {
        this->Stock_Article = stock;
    }

    void Article::setQuantiteReapprovisionnement(int quantite_reapprovisionnement) {
        this->Quantite_Reapprovisionnement = quantite_reapprovisionnement;
    }

    void Article::setPrixHT(float prix_ht) {
        this->Prix_HT = prix_ht;
    }

    void Article::setTauxTVA(float taux_tva) {
        this->Taux_TVA = taux_tva;
    }

    void Article::setSupprimer(bool supprimer) {
        this->Supprimer = supprimer;
    }

    int Article::getRefArticle() {
        return Ref_Article;
    }

    String^ Article::getNom() {
        return Nom_Article;
    }

    String^ Article::getNature() {
        return Nature_Article;
    }

    String^ Article::getCouleur() {
        return Couleur_Article;
    }

    int Article::getStock() {
        return Stock_Article;
    }

    int Article::getQuantiteReapprovisionnement() {
        return Quantite_Reapprovisionnement;
    }

    float Article::getPrixHT() {
        return Prix_HT;
    }

    float Article::getTauxTVA() {
        return Taux_TVA;
    }

    bool Article::getSupprimer() {
        return Supprimer;
    }

    String^ Article::Create() {
        return "DECLARE @Nature_Article varchar(50); SET @Nature_Article = '" + Nature_Article + "'; "
            "DECLARE @Nom_Article varchar(50); SET @Nom_Article = '" + Nom_Article + "'; "
            "DECLARE @Couleur_Article varchar(50); SET @Couleur_Article  = '" + Couleur_Article + "'; "
            "DECLARE @Ref_Article  int; SET @Ref_Article = " + Convert::ToString(Ref_Article) + "; "
            "IF NOT EXISTS(SELECT Ref_Article FROM Article WHERE Nature_Article = @Nature_Article AND Nom_Article = @Nom_Article AND Couleur_Article = @Couleur_Article) "
            "BEGIN "
            "INSERT INTO Article (Nom_Article, Nature_Article, Couleur_Article, Stock_Article, Quantite_Reapprovisionnement, Prix_HT, Taux_TVA, Supprimer) "
            "VALUES (@Nom_Article, @Nature_Article, @Couleur_Article, " +
            Convert::ToString(Stock_Article) + ", " + Convert::ToString(Quantite_Reapprovisionnement) + ", " +
            Convert::ToString(Prix_HT) + ", " + Convert::ToString(Taux_TVA) + ", 0); "
            "SELECT 'L''article a été ajouté avec succès.' AS Resultat; "
            "END "
            "ELSE "
            "BEGIN "
            "SELECT 'Cet article existe déjà !' AS Resultat; "
            "END";
    }
    String^ Article::Update() {
        return "UPDATE Article SET Nom_Article = '" + Nom_Article + "', Nature_Article = '" + Nature_Article + "', Couleur_Article = '" + Couleur_Article +
            "', Stock_Article = " + Stock_Article + ", Quantite_Reapprovisionnement = " +
            Convert::ToString(Quantite_Reapprovisionnement) + ", Prix_HT = " + Convert::ToString(Prix_HT) +
            ", Taux_TVA = " + Convert::ToString(Taux_TVA) + ", Supprimer = " + (Supprimer ? "1" : "0") +
            " WHERE Ref_Article = " + Convert::ToString(Ref_Article);
    }

    String^ Article::Delete() {
        return "UPDATE Article SET Supprimer = 1 WHERE Ref_Article = " + Convert::ToString(Ref_Article);
    }

    String^ Article::Select() {
        return "SELECT * FROM Article";
    }
}
    

