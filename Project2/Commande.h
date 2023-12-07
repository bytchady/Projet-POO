#pragma once

using namespace System;

namespace NS_Commande {
	public ref class Commande
	{
    private:
        int Id_Commande;
        String^ Ref_Commande;
        float Total_TTC;
        float Total_HT;
        float Total_TVA;
        String^ Date_Emission;
        String^ Date_Livraison;
        String^ Date_PaiementFinal;
        float Remise_Commande;
        int Id_Personnel;
        int Id_Adresse;
        int Id_Adresse_1;
        int Id_Client;
        bool Supprimer;

    public:
        void setRefCommande(String^ refCommande);
        void setTotalTTC(float totalTTC);
        void setTotalHT(float totalHT);
        void setTotalTVA(float totalTVA);
        void setDateEmission(String^ dateEmission);
        void setDateLivraison(String^ dateLivraison);
        void setDatePaiementFinal(String^ datePaiementFinal);
        void setRemiseCommande(float remiseCommande);
        void setIdPersonnel(int idPersonnel);
        void setIdAdresse(int idLivraison);
        void setIdAdresse1(int idFacturation);
        void setIdClient(int idClient);
        void setSupprimer(bool supprimer);

        String^ getRefCommande();
        float getTotalTTC();
        float getTotalHT();
        float getTotalTVA();
        String^ getDateEmission();
        String^ getDateLivraison();
        String^ getDatePaiementFinal();
        float getRemiseCommande();
        int getIdAdresse();
        int getIdAdresse1();
        int getIdClient();
        bool getSupprimer();

		String^ CreateCommande();
        String^ UpdateCommande();
        String^ SelectCommande();
		String^ DeleteCommande();
	};
}


