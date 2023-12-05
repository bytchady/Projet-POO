#pragma once

using namespace System;

namespace NS_Client {
    public ref class Client
    {
    private:
        int Id_Client;
        String^ Numero_Client;
        String^ Nom_Client;
        String^ Prenom_Client;
        String^ Naissance_Client;
        String^ PremierAchat;
        bool Supprimer;

    public:
        void setNumeroClient(String^ num_client);
        void setNomClient(String^ nom_client);
        void setPrenomClient(String^ prenom_client);
        void setNaissanceClient(String^ naissance_client);
        void setPremierAchat(String^ premier_achat);
        void setSupprimer(bool supprimer);

        String^ getNumeroClient();
        String^ getNomClient();
        String^ getPrenomClient();
        String^ getNaissanceClient();
        String^ getPremierAchat();
        bool getSupprimer();

        String^ CreateClient();
        String^ UpdateClient();
        String^ DeleteClient();
    };
}
