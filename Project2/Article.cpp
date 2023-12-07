#include "Article.h"
using namespace System;

void Article::setIdArticle(int Id_Article) {
    this->Id_Article = Id_Article;
}
void Article::setRefArticle(int Ref_Article) {
    this->Ref_Article = Ref_Article;
}

void Article::setNom(String^ Nom_Article) {
    this->Nom_Article = Nom_Article;
}

void Article::setNature(String^ Nature_Article) {
    this->Nature_Article = Nature_Article;
}

void Article::setCouleur(String^ Couleur_Article) {
    this->Couleur_Article = Couleur_Article;
}

void Article::setStock(int Stock_Article) {
    this->Stock_Article = Stock_Article;
}

void Article::setQuantiteReapprovisionnement(int Quantite_Reapprovisionnement) {
    this->Quantite_Reapprovisionnement = Quantite_Reapprovisionnement;
}

void Article::setPrixHT(float Prix_HT) {
    this->Prix_HT = Prix_HT;
}

void Article::setTauxTVA(float Taux_TVA) {
    this->Taux_TVA = Taux_TVA;
}

void Article::setSupprimer(bool Supprimer) {
    this->Supprimer = Supprimer;
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

int Article::getIdArticle() {
    return this->Id_Article;
}