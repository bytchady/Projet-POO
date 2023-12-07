#include "Personnel.h"
#include "Adresse.h"


	int Personnel::getId_Personnel() {
		return this->Id_Personnel;
	}

	void Personnel::setId_Personnel(int Id_Personnnel)
	{
		this->Id_Personnel = Id_Personnel;
	}

	int Personnel::getId_Personnel_1()
	{
		return this->Id_Personnel_1;
	}

	void Personnel::setId_Personnel_1(int Id_Personnel_1)
	{
		this->Id_Personnel_1 = Id_Personnel_1;
	}

	String^ Personnel::getNom_Personnel()
	{
		return this->Nom_Personnel;
	}

	void Personnel::setNom_Personnel(String^ Nom_Personnel)
	{
		this->Nom_Personnel = Nom_Personnel;
	}

	String^ Personnel::getPrenom_Personnel()
	{
		return this->Prenom_Personnel;
	}

	void Personnel::setPrenom_Personnel(String^ Prenom_Personnel)
	{
		this->Prenom_Personnel = Prenom_Personnel;
	}

	bool Personnel::getSupprimer()
	{
		return this->Supprimer;

	}

	void Personnel::setSupprimer(bool value)
	{
		this->Supprimer;
	}

	DateTime Personnel::getNaissance_Personnel()
	{
		return this->Naissance_Personnel;
	}

	void Personnel::setNaissance_Personnel(DateTime Date_Naissance)
	{
		this->Naissance_Personnel = Date_Naissance;
	}

	DateTime Personnel::getDate_Embauche()
	{
		return this->Date_Embauche;
	}

	void Personnel::setDate_Embauche(DateTime Date_Embauche)
	{
		this->Date_Embauche = Date_Embauche;
	}

	String^ Personnel::CreatePersonnel()
	{
		return "DECLARE @Nom_Personnel varchar(50); SET @Nom_Personnel = '" + Nom_Personnel + "'; "
			"DECLARE @Prenom_Personnel varchar(50); SET @Prenom_Personnel = '" + Prenom_Personnel + "'; "
			"DECLARE @Naissance_Personnel date; SET @Naissance_Personnel  = '" + Naissance_Personnel + "'; "
			"DECLARE @Date_Embauche date; SET @Date_Embauche = " + Convert::ToString(Date_Embauche) + "; "
			"DECLARE @Id_Adresse int; SET @Id_Adresse = " + Convert::ToString(Id_Adresse) + "; "
			"DECLARE @Supprimer bit; SET @Supprimer = 0; "

			"IF NOT EXISTS(SELECT Id_Personnel FROM Personnel WHERE Nom_Personnel = @Nom_Personnel AND Prenom_Personnel = @Prenom_Personnel AND Naissance_Personnel = @Naissance_Personnel AND Date_Embauche = @Date_Embauche) "
			"BEGIN "
			"INSERT INTO Personnel (Nom_Personnel, Prenom_Personnel, Naissance_Personnel, Date_Embauche, Supprimer) "
			"VALUES (@Nom_Personnel, @Prenom_Personnel, @Naissance_Personnel, @Date_Embauche, @Supprimer); "
			"SELECT 'Le personnel a été ajouté avec succès.' AS Resultat; "
			"END "
			"ELSE "
			"BEGIN "
			"SELECT 'Ce personnel existe déjà !' AS Resultat; "
			"END";
	}

	String^ Personnel::UpdatePersonnel()
	{
		return "UPDATE Personnel SET Nom_Personnel = '" + Nom_Personnel + "', Prenom_Personnel = '" + Prenom_Personnel + "', Naissance_Personnel = '" + Naissance_Personnel + "', Date_Embauche = '" + Date_Embauche +
			"', Id_Adresse = " + Id_Adresse + ", Supprimer = 0" + " WHERE Id_Personnel = " + Convert::ToString(Id_Personnel);
	}

	String^ Personnel::DeletePersonnel()
	{
		return "UPDATE Personnel SET Supprimer = 1 WHERE Id_Personnel = " + Convert::ToString(Id_Personnel);
	}

	String^ Personnel::SelectPersonnel()
	{
		return "SELECT * FROM Personnel";
	}

