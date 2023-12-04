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
        return this->Ref_Article;
    }

    String^ Article::getNom() {
        return this->Nom_Article;
    }

    String^ Article::getNature() {
        return this->Nature_Article;
    }

    String^ Article::getCouleur() {
        return this->Couleur_Article;
    }

    int Article::getStock() {
        return this->Stock_Article;
    }

    int Article::getQuantiteReapprovisionnement() {
        return this->Quantite_Reapprovisionnement;
    }

    float Article::getPrixHT() {
        return this->Prix_HT;
    }

    float Article::getTauxTVA() {
        return this->Taux_TVA;
    }

    bool Article::getSupprimer() {
        return this->Supprimer;
    }

    String^ Article::CreateArticle() {
        float defaultTauxTVA = 20.6;

        return "DECLARE @Ref_Article int; SET @Ref_Article = " + Convert::ToString(Ref_Article) + "; "
            "DECLARE @Nature_Article varchar(50); SET @Nature_Article = '" + Nature_Article + "'; "
            "DECLARE @Nom_Article varchar(50); SET @Nom_Article = '" + Nom_Article + "'; "
            "DECLARE @Couleur_Article varchar(50); SET @Couleur_Article  = '" + Couleur_Article + "'; "
            "DECLARE @Stock_Article int; SET @Stock_Article = " + Convert::ToString(Stock_Article) + "; "
            "DECLARE @Quantite_Reapprovisionnement int; SET @Quantite_Reapprovisionnement = " + Convert::ToString(Quantite_Reapprovisionnement) + "; "
            "DECLARE @Prix_HT float; SET @Prix_HT = " + Convert::ToString(Prix_HT)->Replace(",", ".") + "; "
            "DECLARE @Taux_TVA float; SET @Taux_TVA = " + Convert::ToString(defaultTauxTVA)->Replace(",", ".") + "; "
            "DECLARE @Supprimer bit; SET @Supprimer = 0; "  

            "IF NOT EXISTS(SELECT Id_Article FROM Article WHERE Ref_Article = @Ref_Article AND Nature_Article = @Nature_Article AND Nom_Article = @Nom_Article AND Couleur_Article = @Couleur_Article) "
            "BEGIN "
            "INSERT INTO Article (Ref_Article, Nom_Article, Nature_Article, Couleur_Article, Stock_Article, Quantite_Reapprovisionnement, Prix_HT, Taux_TVA, Supprimer) "
            "VALUES (@Ref_Article, @Nom_Article, @Nature_Article, @Couleur_Article, @Stock_Article, @Quantite_Reapprovisionnement, @Prix_HT, @Taux_TVA, @Supprimer); "
            "SELECT 'L''article a été ajouté avec succès.' AS Resultat; "
            "END "
            "ELSE "
            "BEGIN "
            "SELECT 'Cet article existe déjà !' AS Resultat; "
            "END";
    }

    String^ Article::UpdateArticle() {
        float defaultTauxTVA = 20.6;
        return "UPDATE Article SET Nom_Article = '" + Nom_Article + "', Nature_Article = '" + Nature_Article + "', Couleur_Article = '" + Couleur_Article +
            "', Stock_Article = " + Stock_Article + ", Quantite_Reapprovisionnement = " +
            Convert::ToString(Quantite_Reapprovisionnement) + ", Prix_HT = " + Convert::ToString(Prix_HT)->Replace(",", ".") +
            ", Taux_TVA = " + Convert::ToString(defaultTauxTVA)->Replace(",", ".") + ", Supprimer = 0" +
            " WHERE Ref_Article = " + Ref_Article;
    }

    String^ Article::DeleteArticle() {
        return "UPDATE Article SET Supprimer = 1 WHERE Ref_Article = " + Convert::ToString(Ref_Article);
    }
}