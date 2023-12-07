#pragma once

namespace NS_Personnel {
    using namespace System;

    ref class Personnel
    {
    private:
        int Id_Personnel;
        int Id_Personnel_1;
        String^ Nom_Personnel;
        String^ Prenom_Personnel;
        DateTime Naissance_Personnel;
        DateTime Date_Embauche;
        int Id_Adresse;
        bool Supprimer;

    public:

        int getId_Personnel();
        int getId_Personnel_1();
        String^ getNom_Personnel();
        String^ getPrenom_Personnel();
        DateTime getNaissance_Personnel();
        bool getSupprimer();
        DateTime getDate_Embauche();

        void setId_Personnel_1(int Id_Superieur);
        void setNom_Personnel(String^ nom);
        void setPrenom_Personnel(String^ prenom);
        void setId_Personnel(int Id_Personnel);
        void setSupprimer(bool value);
        void setNaissance_Personnel(DateTime date);
        void setDate_Embauche(DateTime date);

        String^ CreatePersonnel();
        String^ UpdatePersonnel();
        String^ DeletePersonnel();
        String^ SelectPersonnel();

    };
}
