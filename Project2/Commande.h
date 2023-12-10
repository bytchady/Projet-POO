#pragma once
#include"Client.h"
#include "TypeAdresse.h"

using namespace System;


	public ref class Commande
	{
    private:
        int Id_Commande;
        String^ Ref_Commande;
        float Total_TTC;
        float Total_HT;
        float Total_TVA;
        DateTime Date_Emission;
        DateTime Date_Livraison;
        DateTime Date_PaiementFinal;
        float Remise_Commande;
        TypeAdresse^ livraison = gcnew TypeAdresse();
        TypeAdresse^ facturation = gcnew TypeAdresse();
        Client^ client = gcnew Client();
        bool Supprimer;

    public:
        void setIdCommande(int idCommande) {
            this->Id_Commande = idCommande;
        }
        void setRefCommande(String^ refCommande) {
            this->Ref_Commande = refCommande;
        }

        void setTotalTTC(float totalTTC) {
            this->Total_TTC = totalTTC;
        }

        void setTotalHT(float totalHT) {
            this->Total_HT = totalHT;
        }

        void setTotalTVA(float totalTVA) {
            this->Total_TVA = totalTVA;
        }

        void setDateEmission(DateTime dateEmission) {
            this->Date_Emission = dateEmission;
        }

        void setDateLivraison(DateTime dateLivraison) {
            this->Date_Livraison = dateLivraison;
        }

        void setDatePaiementFinal(DateTime datePaiementFinal) {
            this->Date_PaiementFinal = datePaiementFinal;
        }

        void setRemiseCommande(float remiseCommande) {
            this->Remise_Commande = remiseCommande;
        }

        void setLivraison(TypeAdresse^ livraison)
        {
            this->livraison = livraison;
        }

        void setFacturation(TypeAdresse^ facturation)
        {
            this->facturation = facturation;
        }

        void setClient(Client^ client)
        {
            this->client = client;
        }

        void setSupprimer(bool supprimer) {
            this->Supprimer = supprimer;
        }

        int getIdCommande() {
            return this->Id_Commande;
        }

        String^ getRefCommande() {
            return this->Ref_Commande;
        }

        float getTotalTTC() {
            return this->Total_TTC;
        }

        float getTotalHT() {
            return this->Total_HT;
        }

        float getTotalTVA() {
            return this->Total_TVA;
        }

        DateTime getDateEmission() {
            return this->Date_Emission;
        }

        DateTime getDateLivraison() {
            return this->Date_Livraison;
        }

        DateTime getDatePaiementFinal() {
            return this->Date_PaiementFinal;
        }

        float getRemiseCommande() {
            return this->Remise_Commande;
        }

        TypeAdresse^ getLivraison()
        {
            return this->livraison;
        }

        TypeAdresse^ getFacturation()
        {
            return this->facturation;
        }

        Client^ getClient()
        {
            return this->client;
        }

        bool getSupprimer() {
            return this->Supprimer;
        }
    };


