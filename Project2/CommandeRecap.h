#pragma once
#include "Commande.h"
#include "ServiceCommande.h"
#include "Adresse.h"
#include "TypeAdresse.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeRecap
	/// </summary>
	public ref class CommandeRecap : public System::Windows::Forms::Form
	{
		Commande^ cmd = gcnew Commande();;
	private: System::Windows::Forms::Label^ DateEmission;
	private: System::Windows::Forms::DateTimePicker^ dtp_Livraison;
	private: System::Windows::Forms::DateTimePicker^ dtp_Emission;
		   ServiceCommande^ scmd;
	private:
		int idClient;
		int idAdresseLivraison;
		int idAdresseFacturation;
	public:
		CommandeRecap(void )
		{
			InitializeComponent();

			this->Show_Nom->Text = Convert::ToString(cmd->getClient()->getNomClient());
			this->Show_Prenom->Text = Convert::ToString(cmd->getClient()->getPrenomClient());

			Adresse^ livraisonAdresse = cmd->getLivraison()->getAdresse();

			String^ livraisonString = String::Format("{0} {1} {2}, {3} {4}",
				livraisonAdresse->getNumRue(),
				livraisonAdresse->getNomRue(),
				livraisonAdresse->getComplementAdr(),
				livraisonAdresse->getCodePostal(),
				livraisonAdresse->getNomVille());

			this->Show_Livraison->Text = livraisonString;


			this->Show_Facturation->Text = String::Format("{0} {1} {2}, {3} {4}",
				cmd->getFacturation()->getAdresse()->getNumRue(),
				cmd->getFacturation()->getAdresse()->getNomRue(),
				cmd->getFacturation()->getAdresse()->getComplementAdr(),
				cmd->getFacturation()->getAdresse()->getCodePostal(),
				cmd->getFacturation()->getAdresse()->getNomVille());

			if (cmd->getDateLivraison() >= this->dtp_Livraison->MinDate &&
				cmd->getDateLivraison() <= this->dtp_Livraison->MaxDate)
			{
				this->dtp_Livraison->Value = cmd->getDateLivraison();
			}

			if (cmd->getDateEmission() >= this->dtp_Emission->MinDate &&
				cmd->getDateEmission() <= this->dtp_Emission->MaxDate)
			{
				this->dtp_Emission->Value = cmd->getDateEmission();
			}

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CommandeRecap()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ Show_Facturation;




	private: System::Windows::Forms::Label^ Show_Livraison;

	private: System::Windows::Forms::Label^ Show_Prenom;
	private: System::Windows::Forms::Label^ Nom;
	private: System::Windows::Forms::Label^ Prenom;
	private: System::Windows::Forms::Label^ livraison;
	private: System::Windows::Forms::Label^ facturation;
	private: System::Windows::Forms::Label^ dateLivraison;
	private: System::Windows::Forms::Label^ Show_Nom;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::DataGridView^ CataloguePanier;
	private: System::Windows::Forms::Label^ TitrePanier;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ Show_PrixTTC;
	private: System::Windows::Forms::Label^ Prix;




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Button^ bValiderCommande;
	private: System::Windows::Forms::Button^ bAnnuler;

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CataloguePanier = (gcnew System::Windows::Forms::DataGridView());
			this->TitrePanier = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Show_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->Prix = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bValiderCommande = (gcnew System::Windows::Forms::Button());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Show_Facturation = (gcnew System::Windows::Forms::Label());
			this->Show_Livraison = (gcnew System::Windows::Forms::Label());
			this->Show_Prenom = (gcnew System::Windows::Forms::Label());
			this->Nom = (gcnew System::Windows::Forms::Label());
			this->Prenom = (gcnew System::Windows::Forms::Label());
			this->livraison = (gcnew System::Windows::Forms::Label());
			this->facturation = (gcnew System::Windows::Forms::Label());
			this->dateLivraison = (gcnew System::Windows::Forms::Label());
			this->Show_Nom = (gcnew System::Windows::Forms::Label());
			this->DateEmission = (gcnew System::Windows::Forms::Label());
			this->dtp_Livraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp_Emission = (gcnew System::Windows::Forms::DateTimePicker());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanier))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 20);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.10417F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.89584F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 610)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 453)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(2203, 1455);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->CataloguePanier, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->TitrePanier, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(5, 396);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.226F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.774F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(2193, 600);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// CataloguePanier
			// 
			this->CataloguePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanier->Location = System::Drawing::Point(5, 72);
			this->CataloguePanier->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->CataloguePanier->Name = L"CataloguePanier";
			this->CataloguePanier->RowHeadersWidth = 51;
			this->CataloguePanier->Size = System::Drawing::Size(2183, 523);
			this->CataloguePanier->TabIndex = 0;
			// 
			// TitrePanier
			// 
			this->TitrePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->TitrePanier->AutoSize = true;
			this->TitrePanier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitrePanier->Location = System::Drawing::Point(5, 42);
			this->TitrePanier->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->TitrePanier->Name = L"TitrePanier";
			this->TitrePanier->Size = System::Drawing::Size(86, 25);
			this->TitrePanier->TabIndex = 1;
			this->TitrePanier->Text = L"Panier :";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(5, 1006);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.17007F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 74.82993F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(2193, 444);
			this->tableLayoutPanel4->TabIndex = 2;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				9.372453F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				90.62755F)));
			this->tableLayoutPanel5->Controls->Add(this->Show_PrixTTC, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->Prix, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(5, 5);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(2183, 101);
			this->tableLayoutPanel5->TabIndex = 0;
			// 
			// Show_PrixTTC
			// 
			this->Show_PrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_PrixTTC->AutoSize = true;
			this->Show_PrixTTC->BackColor = System::Drawing::Color::White;
			this->Show_PrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_PrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_PrixTTC->Location = System::Drawing::Point(209, 74);
			this->Show_PrixTTC->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Show_PrixTTC->Name = L"Show_PrixTTC";
			this->Show_PrixTTC->Size = System::Drawing::Size(1969, 27);
			this->Show_PrixTTC->TabIndex = 3;
			// 
			// Prix
			// 
			this->Prix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Prix->AutoSize = true;
			this->Prix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prix->Location = System::Drawing::Point(5, 76);
			this->Prix->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Prix->Name = L"Prix";
			this->Prix->Size = System::Drawing::Size(194, 25);
			this->Prix->TabIndex = 2;
			this->Prix->Text = L"Prix TTC :";
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.06783F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.93217F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				524)));
			this->tableLayoutPanel6->Controls->Add(this->bValiderCommande, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->bAnnuler, 2, 1);
			this->tableLayoutPanel6->Location = System::Drawing::Point(5, 116);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 58.87851F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 41.12149F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(2183, 323);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// bValiderCommande
			// 
			this->bValiderCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bValiderCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bValiderCommande->Location = System::Drawing::Point(1117, 195);
			this->bValiderCommande->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bValiderCommande->Name = L"bValiderCommande";
			this->bValiderCommande->Size = System::Drawing::Size(536, 123);
			this->bValiderCommande->TabIndex = 0;
			this->bValiderCommande->Text = L"Valider Commande";
			this->bValiderCommande->UseVisualStyleBackColor = true;
			this->bValiderCommande->Click += gcnew System::EventHandler(this, &CommandeRecap::bValiderCommande_Click);
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(1663, 195);
			this->bAnnuler->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(515, 123);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &CommandeRecap::bAnnuler_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				1723)));
			this->tableLayoutPanel2->Controls->Add(this->Show_Facturation, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->Show_Livraison, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->Show_Prenom, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->Nom, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->Prenom, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->livraison, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->facturation, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->dateLivraison, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->Show_Nom, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->DateEmission, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->dtp_Livraison, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->dtp_Emission, 1, 5);
			this->tableLayoutPanel2->Location = System::Drawing::Point(5, 44);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 7;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 49)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(2193, 342);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// Show_Facturation
			// 
			this->Show_Facturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Facturation->AutoSize = true;
			this->Show_Facturation->BackColor = System::Drawing::Color::White;
			this->Show_Facturation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Show_Facturation->Location = System::Drawing::Point(475, 169);
			this->Show_Facturation->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Show_Facturation->Name = L"Show_Facturation";
			this->Show_Facturation->Size = System::Drawing::Size(1713, 27);
			this->Show_Facturation->TabIndex = 8;
			// 
			// Show_Livraison
			// 
			this->Show_Livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Livraison->AutoSize = true;
			this->Show_Livraison->BackColor = System::Drawing::Color::White;
			this->Show_Livraison->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Livraison->Location = System::Drawing::Point(475, 120);
			this->Show_Livraison->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Show_Livraison->Name = L"Show_Livraison";
			this->Show_Livraison->Size = System::Drawing::Size(1713, 27);
			this->Show_Livraison->TabIndex = 7;
			// 
			// Show_Prenom
			// 
			this->Show_Prenom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Prenom->AutoSize = true;
			this->Show_Prenom->BackColor = System::Drawing::Color::White;
			this->Show_Prenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Prenom->Location = System::Drawing::Point(475, 71);
			this->Show_Prenom->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Show_Prenom->Name = L"Show_Prenom";
			this->Show_Prenom->Size = System::Drawing::Size(1713, 27);
			this->Show_Prenom->TabIndex = 6;
			// 
			// Nom
			// 
			this->Nom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Nom->AutoSize = true;
			this->Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nom->Location = System::Drawing::Point(397, 24);
			this->Nom->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(68, 25);
			this->Nom->TabIndex = 0;
			this->Nom->Text = L"Nom :";
			// 
			// Prenom
			// 
			this->Prenom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Prenom->AutoSize = true;
			this->Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prenom->Location = System::Drawing::Point(367, 73);
			this->Prenom->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(98, 25);
			this->Prenom->TabIndex = 1;
			this->Prenom->Text = L"Prénom :";
			// 
			// livraison
			// 
			this->livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->livraison->AutoSize = true;
			this->livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->livraison->Location = System::Drawing::Point(246, 122);
			this->livraison->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->livraison->Name = L"livraison";
			this->livraison->Size = System::Drawing::Size(219, 25);
			this->livraison->TabIndex = 2;
			this->livraison->Text = L"Adresse de livraison :";
			// 
			// facturation
			// 
			this->facturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->facturation->AutoSize = true;
			this->facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturation->Location = System::Drawing::Point(225, 171);
			this->facturation->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->facturation->Name = L"facturation";
			this->facturation->Size = System::Drawing::Size(240, 25);
			this->facturation->TabIndex = 3;
			this->facturation->Text = L"Adresse de facturation :";
			// 
			// dateLivraison
			// 
			this->dateLivraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->dateLivraison->AutoSize = true;
			this->dateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivraison->Location = System::Drawing::Point(208, 220);
			this->dateLivraison->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(257, 25);
			this->dateLivraison->TabIndex = 4;
			this->dateLivraison->Text = L"Date de livraison prévue :";
			// 
			// Show_Nom
			// 
			this->Show_Nom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Nom->AutoSize = true;
			this->Show_Nom->BackColor = System::Drawing::Color::White;
			this->Show_Nom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Nom->Location = System::Drawing::Point(475, 22);
			this->Show_Nom->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Show_Nom->Name = L"Show_Nom";
			this->Show_Nom->Size = System::Drawing::Size(1713, 27);
			this->Show_Nom->TabIndex = 5;
			// 
			// DateEmission
			// 
			this->DateEmission->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DateEmission->AutoSize = true;
			this->DateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateEmission->Location = System::Drawing::Point(4, 245);
			this->DateEmission->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DateEmission->Name = L"DateEmission";
			this->DateEmission->Size = System::Drawing::Size(462, 49);
			this->DateEmission->TabIndex = 9;
			this->DateEmission->Text = L"Date d\'émission de la commande :";
			this->DateEmission->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			// 
			// dtp_Livraison
			// 
			this->dtp_Livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dtp_Livraison->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_Livraison->Location = System::Drawing::Point(474, 200);
			this->dtp_Livraison->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtp_Livraison->Name = L"dtp_Livraison";
			this->dtp_Livraison->Size = System::Drawing::Size(265, 22);
			this->dtp_Livraison->TabIndex = 10;
			// 
			// dtp_Emission
			// 
			this->dtp_Emission->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dtp_Emission->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_Emission->Location = System::Drawing::Point(474, 249);
			this->dtp_Emission->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dtp_Emission->Name = L"dtp_Emission";
			this->dtp_Emission->Size = System::Drawing::Size(265, 22);
			this->dtp_Emission->TabIndex = 11;
			// 
			// CommandeRecap
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 1061);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(5, 5, 5, 5);
			this->MaximumSize = System::Drawing::Size(1701, 1251);
			this->MinimumSize = System::Drawing::Size(1701, 1030);
			this->Name = L"CommandeRecap";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Recapitulatif de commande";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanier))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void bValiderCommande_Click(System::Object^ sender, System::EventArgs^ e) {
}

};
}
