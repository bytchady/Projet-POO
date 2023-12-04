#include "Adresse.h"

namespace NS_Adresse {
    int Adresse::getId_Adresse()
    {
        return this->getId_Adresse();
    }

    int Adresse::getNum_Rue()
    {
        return this->getNum_Rue();
    }

    String^ Adresse::getNom_rue()
    {
        return this->getNom_rue();
    }

    String^ Adresse::getComplement_Adr()
    {
        return this->getComplement_Adr();
    }

    String^ Adresse::getNom_Ville()
    {
        return this->getNom_Ville();
    }

    int Adresse::getCode_Postal()
    {
        return getCode_Postal();
    }

    bool Adresse::getSupprimer()
    {
        return getSupprimer();
    }

    void Adresse::setId_Adresse(int Id_Adresse)
    {
        this->Id_Adresse = Id_Adresse;
    }

    void Adresse::setNum_Rue(int Num_Rue)
    {
        this->Num_Rue = Num_Rue;
    }

    void Adresse::setNom_rue(String^ Nom_rue)
    {
        this->Nom_rue = Nom_rue;
    }

    void Adresse::setComplement_Adr(String^ Complement_Adr)
    {
        this->Complement_Adr = Complement_Adr;
    }

    void Adresse::setNom_Ville(String^ Nom_Ville)
    {
        this->Nom_Ville = Nom_Ville;
    }

    void Adresse::setCode_Postal(int Code_Postal)
    {
        this->Code_Postal = Code_Postal;
    }

    void Adresse::setSupprimer(bool Supprimer)
    {
        this->Supprimer = Supprimer;
    }

    String^ Adresse::CreateAdresse()
    {
        return "DECLARE @Num_Rue int; SET @Num_Rue = '" + Convert::ToString(Num_Rue) + "'; "
            "DECLARE @Nom_rue varchar(50); SET @Nom_rue  = '" + Nom_rue + "'; "
            "DECLARE @Complement_Adr varchar(50); SET @Complement_Adr = " + Complement_Adr + "; "
            "DECLARE @Nom_Ville varchar(50); SET @Nom_Ville = " + Nom_Ville + "; "
            "DECLARE @Code_Postal int; SET @Code_Postal = " + Convert::ToString(Code_Postal) + "; "
            "DECLARE @Supprimer bit; SET @Supprimer = 0; ";
    }

    String^ Adresse::DeleteAdresse()
    {
        return "UPDATE Adresse SET Supprimer = 1 WHERE Id_Adresse = " + Convert::ToString(Id_Adresse);

    }

    String^ Adresse::SelectAdresse()
    {

    }
}
