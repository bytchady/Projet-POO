#pragma once
#include "Commande.h"
#include "ServiceCommande.h"


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

	private: System::Windows::Forms::Label^ DateEmission;
	private: System::Windows::Forms::DateTimePicker^ dtp_Livraison;
	private: System::Windows::Forms::DateTimePicker^ dtp_Emission;
	private:
		int idClient;
		int idAdresseLivraison;
		int idAdresseFacturation;
		Commande^ commande;
		Client^ client;
		ServiceCommande^ scmd = gcnew ServiceCommande();
	public:
		CommandeRecap(Client^ c, Commande^ cmd)
		{
			InitializeComponent();
			this->commande = cmd;
			this->client = c;

			this->Show_Nom->Text = Convert::ToString(commande->getClient()->getNomClient());
			this->Show_Prenom->Text = Convert::ToString(commande->getClient()->getPrenomClient());

			Adresse^ livraisonAdresse = commande->getLivraison()->getAdresse();

			String^ livraisonString = String::Format("{0} {1} {2}, {3} {4}",
				livraisonAdresse->getNumRue(),
				livraisonAdresse->getNomRue(),
				livraisonAdresse->getComplementAdr(),
				livraisonAdresse->getCodePostal(),
				livraisonAdresse->getNomVille());

			this->Show_Livraison->Text = livraisonString;


			this->Show_Facturation->Text = String::Format("{0} {1} {2}, {3} {4}",
				commande->getFacturation()->getAdresse()->getNumRue(),
				commande->getFacturation()->getAdresse()->getNomRue(),
				commande->getFacturation()->getAdresse()->getComplementAdr(),
				commande->getFacturation()->getAdresse()->getCodePostal(),
				commande->getFacturation()->getAdresse()->getNomVille());

			if (commande->getDateLivraison() >= this->dtp_Livraison->MinDate &&
				commande->getDateLivraison() <= this->dtp_Livraison->MaxDate)
			{
				this->dtp_Livraison->Value = commande->getDateLivraison();
			}

			if (commande->getDateEmission() >= this->dtp_Emission->MinDate &&
				commande->getDateEmission() <= this->dtp_Emission->MaxDate)
			{
				this->dtp_Emission->Value = commande->getDateEmission();
			}
			//this->Reload();
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
			this->Show_Nom = (gcnew System::Windows::Forms::Label());
			this->DateEmission = (gcnew System::Windows::Forms::Label());
			this->dtp_Livraison = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtp_Emission = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateLivraison = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanier))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.10417)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.89584)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 332)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 403)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel3->ColumnCount = 1;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->CataloguePanier, 0, 1);
			this->tableLayoutPanel3->Controls->Add(this->TitrePanier, 0, 0);
			this->tableLayoutPanel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 227);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.620818)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 92.37918)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1233, 326);
			this->tableLayoutPanel3->TabIndex = 1;
			this->CataloguePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanier->Location = System::Drawing::Point(3, 27);
			this->CataloguePanier->Name = L"CataloguePanier";
			this->CataloguePanier->RowHeadersWidth = 51;
			this->CataloguePanier->Size = System::Drawing::Size(1227, 296);
			this->CataloguePanier->TabIndex = 0;
			this->TitrePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->TitrePanier->AutoSize = true;
			this->TitrePanier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitrePanier->Location = System::Drawing::Point(3, 0);
			this->TitrePanier->Name = L"TitrePanier";
			this->TitrePanier->Size = System::Drawing::Size(86, 24);
			this->TitrePanier->TabIndex = 1;
			this->TitrePanier->Text = L"Panier :";
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 1;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 559);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 28.34467)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 71.65533)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1233, 398);
			this->tableLayoutPanel4->TabIndex = 2;
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				9.372453)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				90.62755)));
			this->tableLayoutPanel5->Controls->Add(this->Show_PrixTTC, 1, 0);
			this->tableLayoutPanel5->Controls->Add(this->Prix, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1227, 106);
			this->tableLayoutPanel5->TabIndex = 0;
			this->Show_PrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_PrixTTC->AutoSize = true;
			this->Show_PrixTTC->BackColor = System::Drawing::Color::White;
			this->Show_PrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_PrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_PrixTTC->Location = System::Drawing::Point(117, 79);
			this->Show_PrixTTC->Name = L"Show_PrixTTC";
			this->Show_PrixTTC->Size = System::Drawing::Size(1107, 27);
			this->Show_PrixTTC->TabIndex = 3;
			this->Prix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Prix->AutoSize = true;
			this->Prix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prix->Location = System::Drawing::Point(3, 81);
			this->Prix->Name = L"Prix";
			this->Prix->Size = System::Drawing::Size(108, 25);
			this->Prix->TabIndex = 2;
			this->Prix->Text = L"Prix TTC :";
			this->tableLayoutPanel6->ColumnCount = 3;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.06783)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.93217)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				290)));
			this->tableLayoutPanel6->Controls->Add(this->bValiderCommande, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->bAnnuler, 2, 1);
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 115);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 46.82081)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 53.17919)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 47)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(1227, 202);
			this->tableLayoutPanel6->TabIndex = 1;
			this->bValiderCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bValiderCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bValiderCommande->Location = System::Drawing::Point(631, 75);
			this->bValiderCommande->Name = L"bValiderCommande";
			this->bValiderCommande->Size = System::Drawing::Size(302, 76);
			this->bValiderCommande->TabIndex = 0;
			this->bValiderCommande->Text = L"Valider Commande";
			this->bValiderCommande->UseVisualStyleBackColor = true;
			this->bValiderCommande->Click += gcnew System::EventHandler(this, &CommandeRecap::bValiderCommande_Click);
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(939, 75);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(285, 76);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &CommandeRecap::bAnnuler_Click);
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				969)));
			this->tableLayoutPanel2->Controls->Add(this->Show_Facturation, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->Show_Livraison, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->Show_Prenom, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->Nom, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->Prenom, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->livraison, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->facturation, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->Show_Nom, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->DateEmission, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->dtp_Livraison, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->dtp_Emission, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->dateLivraison, 0, 4);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 25);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 7;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1233, 196);
			this->tableLayoutPanel2->TabIndex = 0;
			this->Show_Facturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Facturation->AutoSize = true;
			this->Show_Facturation->BackColor = System::Drawing::Color::White;
			this->Show_Facturation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Show_Facturation->Location = System::Drawing::Point(267, 101);
			this->Show_Facturation->Name = L"Show_Facturation";
			this->Show_Facturation->Size = System::Drawing::Size(963, 27);
			this->Show_Facturation->TabIndex = 8;
			this->Show_Livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Livraison->AutoSize = true;
			this->Show_Livraison->BackColor = System::Drawing::Color::White;
			this->Show_Livraison->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Livraison->Location = System::Drawing::Point(267, 69);
			this->Show_Livraison->Name = L"Show_Livraison";
			this->Show_Livraison->Size = System::Drawing::Size(963, 27);
			this->Show_Livraison->TabIndex = 7;
			this->Show_Prenom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Prenom->AutoSize = true;
			this->Show_Prenom->BackColor = System::Drawing::Color::White;
			this->Show_Prenom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Prenom->Location = System::Drawing::Point(267, 37);
			this->Show_Prenom->Name = L"Show_Prenom";
			this->Show_Prenom->Size = System::Drawing::Size(963, 27);
			this->Show_Prenom->TabIndex = 6;
			this->Nom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Nom->AutoSize = true;
			this->Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Nom->Location = System::Drawing::Point(207, 12);
			this->Nom->Name = L"Nom";
			this->Nom->Size = System::Drawing::Size(54, 20);
			this->Nom->TabIndex = 0;
			this->Nom->Text = L"Nom :";
			this->Prenom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Prenom->AutoSize = true;
			this->Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Prenom->Location = System::Drawing::Point(184, 44);
			this->Prenom->Name = L"Prenom";
			this->Prenom->Size = System::Drawing::Size(77, 20);
			this->Prenom->TabIndex = 1;
			this->Prenom->Text = L"Prénom :";
			this->livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->livraison->AutoSize = true;
			this->livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->livraison->Location = System::Drawing::Point(90, 76);
			this->livraison->Name = L"livraison";
			this->livraison->Size = System::Drawing::Size(171, 20);
			this->livraison->TabIndex = 2;
			this->livraison->Text = L"Adresse de livraison :";
			this->facturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->facturation->AutoSize = true;
			this->facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->facturation->Location = System::Drawing::Point(73, 108);
			this->facturation->Name = L"facturation";
			this->facturation->Size = System::Drawing::Size(188, 20);
			this->facturation->TabIndex = 3;
			this->facturation->Text = L"Adresse de facturation :";
			this->Show_Nom->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_Nom->AutoSize = true;
			this->Show_Nom->BackColor = System::Drawing::Color::White;
			this->Show_Nom->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_Nom->Location = System::Drawing::Point(267, 5);
			this->Show_Nom->Name = L"Show_Nom";
			this->Show_Nom->Size = System::Drawing::Size(963, 27);
			this->Show_Nom->TabIndex = 5;
			this->DateEmission->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->DateEmission->AutoSize = true;
			this->DateEmission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DateEmission->Location = System::Drawing::Point(122, 172);
			this->DateEmission->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->DateEmission->Name = L"DateEmission";
			this->DateEmission->Size = System::Drawing::Size(140, 20);
			this->DateEmission->TabIndex = 9;
			this->DateEmission->Text = L"Date d\'émission :";
			this->DateEmission->TextAlign = System::Drawing::ContentAlignment::BottomRight;
			this->dtp_Livraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dtp_Livraison->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_Livraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_Livraison->Location = System::Drawing::Point(266, 130);
			this->dtp_Livraison->Margin = System::Windows::Forms::Padding(2);
			this->dtp_Livraison->Name = L"dtp_Livraison";
			this->dtp_Livraison->Size = System::Drawing::Size(965, 29);
			this->dtp_Livraison->TabIndex = 10;
			this->dtp_Emission->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dtp_Emission->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_Emission->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtp_Emission->Location = System::Drawing::Point(266, 162);
			this->dtp_Emission->Margin = System::Windows::Forms::Padding(2);
			this->dtp_Emission->Name = L"dtp_Emission";
			this->dtp_Emission->Size = System::Drawing::Size(965, 29);
			this->dtp_Emission->TabIndex = 11;
			this->dateLivraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->dateLivraison->AutoSize = true;
			this->dateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateLivraison->Location = System::Drawing::Point(61, 140);
			this->dateLivraison->Name = L"dateLivraison";
			this->dateLivraison->Size = System::Drawing::Size(200, 20);
			this->dateLivraison->TabIndex = 4;
			this->dateLivraison->Text = L"Date de livraison prévue :";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 862);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 844);
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
	/*private: void Reload() {
		/*List<Commande^>^ recapCommande = scmd->SelectCommandeClient(commande);
		this->Show_Nom->Text = "";
		this->Show_Prenom->Text = "";
		this->Show_Livraison->Text = "";
		this->Show_Facturation->Text = "";
		for each (Commande ^ cmd in recapCommande) {
			this->Show_Nom->Text = commande->getClient()->getNomClient();
			this->Show_Prenom->Text = commande->getClient()->getPrenomClient();

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
		}
	}*/
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bValiderCommande_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->Show_Nom->Text) ||
			String::IsNullOrWhiteSpace(this->Show_Prenom->Text) ||
			String::IsNullOrWhiteSpace(this->Show_Livraison->Text) ||
			String::IsNullOrWhiteSpace(this->Show_Facturation->Text)) {

			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else {
			commande->setDateEmission(this->dtp_Emission->Value);
			commande->setDateLivraison(this->dtp_Livraison->Value);
			commande->setSupprimer(0);
			scmd->InsertCommande(commande);

			this->Close();
		}
	}
	
};
}
