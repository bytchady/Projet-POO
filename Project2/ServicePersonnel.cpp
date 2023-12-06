#include "ServicePersonnel.h"
#include "Personnel.h"
#include "BDD.h"
#include "Adresse.h"

namespace NS_Personnel {

	ServicePersonnel::ServicePersonnel() {
		bdd = gcnew BDD();
	}

	ServicePersonnel::~ServicePersonnel() {
		delete bdd;
	}
	/*
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
	}*/


	List<Personnel^>^ ServicePersonnel::SelectAllServicePersonnel() {
		DataSet^ ds = bdd->executeQuery("SELECT * FROM Personnel p JOIN Adresse a ON a.Id_Adresse = p.Id_Adresse WHERE p.Supprimer = 0");;

		List<Personnel^>^ list = gcnew List<Personnel^>();

		for each (DataRow ^ row in ds->Tables[0]->Rows)
		{
			Personnel^ p = gcnew Personnel();

			if (row->IsNull("Id_Superieur"))
				p->setId_Superieur(0);
			else
				p->setId_Superieur((int)row["Id_Superieur"]);

			p->setNom_Personnel((String^)row["Nom_Personnel"]);
			p->setPrenom_Personnel((String^)row["Prenom_Personnel"]);
			p->setId_Personnel((int)row["Id_Personnel"]);
			p->setSupprimer((bool)row["Supprimer"]);
			p->setNaissance_Personnel((DateTime)row["Naissance_Personnel"]);
			p->setDate_Embauche((DateTime)row["Date_Embauche"]);

			Adresse^ a = gcnew Adresse();
			p->setAdresse(a);

			a->setId_Adresse((int)row["Id_Adresse"]);
			a->setNom_rue((String^)row["Nom_Rue"]);

			list->Add(p);
		}

		return list;
	}



	void ServicePersonnel::InsertServicePersonnel(Personnel^ personnel) {
		//String^ query = personnel->CreatePersonnel();
		//System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);

		//insert l'adresse pour avoir l'id adresse correct
		serviceAdresse.InsertServiceAdresse(personnel->getAdresse());

		//TODO ajouter Id_Superieur
		bdd->executeInsert("INSERT INTO Personnel (Nom_Personnel, Prenom_Personnel, Naissance_Personnel, Date_Embauche, Supprimer, Id_Adresse) VALUES ('" + personnel->getNom_Personnel() + "', '" + personnel->getPrenom_Personnel() + "', '" + personnel->getNaissance_Personnel().ToString("yyyy-MM-dd") + "', '" + personnel->getDate_Embauche().ToString("yyyy-MM-dd") + "', '" + personnel->getSupprimer() + "', 7); ");
	
	}

	void ServicePersonnel::UpdateServicePersonnel(Personnel^ personnel) {

		serviceAdresse.DeleteServiceAdresse(personnel->getAdresse());
		serviceAdresse.InsertServiceAdresse(personnel->getAdresse());

		String^ query = "UPDATE Personnel SET Nom_Personnel = '" + personnel->getNom_Personnel() + "', Prenom_Personnel = '" + personnel->getPrenom_Personnel() + "', Naissance_Personnel = '" + personnel->getNaissance_Personnel().ToString("yyyy-MM-dd") + "', Date_Embauche = '" + personnel->getDate_Embauche().ToString("yyyy-MM-dd") +
			"', Id_Adresse = " + personnel->getAdresse()->getId_Adresse() + ", Supprimer = 0" + " WHERE Id_Personnel = " + personnel->getId_Personnel();
		System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
		bdd->executeNonQuery(query);

	}


	void ServicePersonnel::DeleteServicePersonnel(Personnel^ personnel) {
		String^ query = "UPDATE Personnel SET Supprimer = 1 WHERE Id_Personnel = " + Convert::ToString(personnel->getId_Personnel());
		bdd->executeNonQuery(query);
	}
}