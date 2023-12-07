#pragma once

using namespace System;

namespace NS_Adresse {
	public ref class Adresse
	{
	private:
		int Id_Adresse;
		int Num_Rue;
		String^ Nom_rue;
		String^ Complement_Adr;
		String^ Nom_Ville;
		int Code_Postal;
		bool Supprimer;

	public:
		int getNum_Rue();
		String^ getNom_rue();
		String^ getComplement_Adr();
		String^ getNom_Ville();
		int getCode_Postal();
		bool getSupprimer();

		void setNum_Rue(int Num_Rue);
		void setNom_rue(String^ Nom_rue);
		void setComplement_Adr(String^ Complement_Adr);
		void setNom_Ville(String^ Nom_Ville);
		void setCode_Postal(int Code_Postal);
		void setSupprimer(bool Supprimer);

		String^ CreateAdresse();
		String^ DeleteAdresse();
	};
}