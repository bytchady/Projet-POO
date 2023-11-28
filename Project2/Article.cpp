#include "Article.h"

namespace NS_article {
    void Article::setRefArticle(int ref_article) {
        Ref_Article = ref_article;
    }

    void Article::setNom(string& nom_article) {
        Nom_Article = nom_article;
    }

    void Article::setNature(string& nature) {
        Nature_Article = nature;
    }

    void Article::setCouleur(string& couleur) {
        Couleur_Article = couleur;
    }

    void Article::setStock(int stock) {
        Stock_Article = stock;
    }

    void Article::setQuantiteReapprovisionnement(int quantite_reapprovisionnement) {
        Quantite_Reapprovisionnement = quantite_reapprovisionnement;
    }

    void Article::setPrixHT(float prix_ht) {
        Prix_HT = prix_ht;
    }

    void Article::setTauxTVA(float taux_tva) {
        Taux_TVA = taux_tva;
    }

    void Article::setSupprimer(bool supprimer) {
        Supprimer = supprimer;
    }

    int Article::getRefArticle() {
        return Ref_Article;
    }

    string Article::getNom() {
        return Nom_Article;
    }

    string Article::getNature() {
        return Nature_Article;
    }

    string Article::getCouleur() {
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

    string Article::Create() {
        return "DECLARE @nature varchar(50); SET @Nature_Article = '" + Nature_Article + "'; "
            "DECLARE @Nom_Article varchar(50); SET @Nom_Article = '" + Nom_Article + "'; "
            "DECLARE @Couleur_Article varchar(50); SET @Couleur_Article  = '" + Couleur_Article + "'; "
            "DECLARE @Ref_Article  int; SET @Ref_Article = " + to_string(Ref_Article) + "; "
            "IF NOT EXISTS(SELECT Ref_Article FROM Article WHERE Nature_Article = @Nature_Article AND Nom_Article = @Nom_Article AND Couleur_Article = @Couleur_Article) "
            "BEGIN"
            "INSERT INTO Article (Ref_Article, Nom_Article, Nature_Article, Couleur_Article, Stock_Article, Quantite_Reapprovisionnement, Prix_HT, Taux_TVA, Supprimer) "
            "VALUES (@Ref_Article, @Nom_Article, @Nature_Article, @Couleur_Article, " +
            to_string(Stock_Article) + ", " + to_string(Quantite_Reapprovisionnement) + ", " +
            to_string(Prix_HT) + ", " + to_string(Taux_TVA) + ", 0); "
            "SELECT 'L''article a été ajouté avec succès.' AS Resultat; "
            "END"
            "ELSE"
            "BEGIN"
            "SELECT 'Cet article existe déjà !' AS Resultat; "
            "END";
        }

    string Article::Update() {
        return "UPDATE Article SET Nom_Article = '" + Nom_Article + "', Nature_Article = '" + Nature_Article + "', Couleur_Article = '" + Couleur_Article +
            "', Stock_Article = " + to_string(Stock_Article) + "', Quantite_Reapprovisionnement = " +
            to_string(Quantite_Reapprovisionnement) + ", Prix_HT = " + to_string(Prix_HT) +
            ", Taux_TVA = " + to_string(Taux_TVA) + ", Supprimer = " + (Supprimer ? "1" : "0") +
            " WHERE Ref_Article = " + to_string(Ref_Article);
    }

    string Article::Delete() {
        return "UPDATE Article SET supprimer = 1 WHERE Ref_Article = " + to_string(Ref_Article);
    }

    string Article::Select() {
        return "SELECT * FROM Article";
    }
}