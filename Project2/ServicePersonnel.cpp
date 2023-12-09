#include "ServicePersonnel.h"
#include "Personnel.h"
#include "BDD.h"
#include "Adresse.h"

ServicePersonnel::ServicePersonnel() {
	bdd = gcnew BDD();
}

ServicePersonnel::~ServicePersonnel() {
	delete bdd;
}

List<Personnel^>^ ServicePersonnel::SelectAllPersonnel() {
	DataSet^ ds = bdd->executeQuery("SELECT * FROM Personnel p JOIN Adresse a ON a.Id_Adresse = p.Id_Adresse WHERE p.Supprimer = 0");;

	List<Personnel^>^ list = gcnew List<Personnel^>();

	for each (DataRow ^ row in ds->Tables[0]->Rows)
	{
		Personnel^ p = gcnew Personnel();
		Adresse^ a = gcnew Adresse();
		p->setAdresse(a);

		if (row->IsNull("Id_Adresse"))
			a->setIdAdresse(0);
		else
			a->setIdAdresse((int)row["Id_Adresse"]);

		if (row->IsNull("Num_Rue"))
			a->setNumRue("");
		else
			a->setNumRue((String^)row["Num_Rue"]);

		a->setNomRue((String^)row["Nom_Rue"]);
		a->setComplementAdr((String^)row["Complement_Adr"]);
		a->setNomVille((String^)row["Nom_Ville"]);
		a->setCodePostal((String^)row["Code_Postal"]);
		if (row->IsNull("Id_Personnel_1"))
			p->setIdSuperieur(0);
		else
			p->setIdSuperieur((int)row["Id_Personnel_1"]);

		p->setIdPersonnel((int)row["Id_Personnel"]);
		p->setNomPersonnel((String^)row["Nom_Personnel"]);
		p->setPrenomPersonnel((String^)row["Prenom_Personnel"]);
		p->setSupprimer((bool)row["Supprimer"]);
		p->setDateNaissance((DateTime)row["Date_Naissance"]);
		p->setDateEmbauche((DateTime)row["Date_Embauche"]);




		list->Add(p);
	}

	return list;
}



void ServicePersonnel::InsertPersonnel(Personnel^ personnel) {
	//String^ query = personnel->CreatePersonnel();
	//System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
	//insert l'adresse pour avoir l'id adresse correct
	serviceAdresse.InsertAdresse(personnel->getAdresse());

	//TODO ajouter Id_Superieur
	//pour gérer les null tu peux faire une condition ternaire boolean ? expression_sivrai : expression_si faux
	// ça reviens a écrire if(boolean){expressionsivrai}else{expression si faux}
	// go test
	int id_personnel = bdd->executeInsert("INSERT INTO Personnel (Nom_Personnel, Prenom_Personnel, Date_Naissance, Date_Embauche, Supprimer, Id_Personnel_1, Id_Adresse) VALUES ('" + personnel->getNomPersonnel() + "', '" + personnel->getPrenomPersonnel() + "', '" + personnel->getDateNaissance().ToString("yyyy-MM-dd") + "', '" + personnel->getDateEmbauche().ToString("yyyy-MM-dd") + "', '" + personnel->getSupprimer() + "', " + (personnel->getIdSuperieur() == 0 ? "NULL" : personnel->getIdSuperieur() + "") + ", " + personnel->getAdresse()->getIdAdresse() + ")");
	personnel->setIdPersonnel(id_personnel);
}

void ServicePersonnel::UpdatePersonnel(Personnel^ personnel) {

	serviceAdresse.DeleteAdresse(personnel->getAdresse());
	serviceAdresse.InsertAdresse(personnel->getAdresse());

	String^ query = "UPDATE Personnel SET Nom_Personnel = '" + personnel->getNomPersonnel() + "', Prenom_Personnel = '" + personnel->getPrenomPersonnel() + "', Date_Naissance = '" + personnel->getDateNaissance().ToString("yyyy-MM-dd") + "', Date_Embauche = '" + personnel->getDateEmbauche().ToString("yyyy-MM-dd") +
		"', Id_Adresse = " + personnel->getAdresse()->getIdAdresse() + ", Supprimer = 0" + " WHERE Id_Personnel = " + personnel->getIdPersonnel();
	System::Diagnostics::Debug::WriteLine("Requête SQL générée : " + query);
	bdd->executeNonQuery(query);

}


void ServicePersonnel::DeletePersonnel(Personnel^ personnel) {
	String^ query = "UPDATE Personnel SET Supprimer = 1 WHERE Id_Personnel = " + Convert::ToString(personnel->getIdPersonnel());
	bdd->executeNonQuery(query);
}
