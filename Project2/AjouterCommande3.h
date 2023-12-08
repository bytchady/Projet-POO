#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterCommande3
	/// </summary>
	public ref class AjouterCommande3 : public System::Windows::Forms::Form
	{
	public:
		AjouterCommande3(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~AjouterCommande3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ Show_DateLivraison;

	private: System::Windows::Forms::Label^ Sow_Facturation;

	private: System::Windows::Forms::Label^ Show_Livraison;

	private: System::Windows::Forms::Label^ Show_Prenom;

	private: System::Windows::Forms::Label^ NomAddCommande3;

	private: System::Windows::Forms::Label^ PrenomAddCommande3;

	private: System::Windows::Forms::Label^ livraisonAddCommande3;

	private: System::Windows::Forms::Label^ facturationAddCommande3;

	private: System::Windows::Forms::Label^ dateLivraisonAddCommande3;
	private: System::Windows::Forms::Label^ Show_Nom;



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::DataGridView^ CataloguePanier;
	private: System::Windows::Forms::Label^ TitrePanier;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ Show_PrixTTC;
	private: System::Windows::Forms::Label^ PrixAddCommande3;



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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Show_DateLivraison = (gcnew System::Windows::Forms::Label());
			this->Sow_Facturation = (gcnew System::Windows::Forms::Label());
			this->Show_Livraison = (gcnew System::Windows::Forms::Label());
			this->Show_Prenom = (gcnew System::Windows::Forms::Label());
			this->NomAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->PrenomAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->livraisonAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->facturationAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->dateLivraisonAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->Show_Nom = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CataloguePanier = (gcnew System::Windows::Forms::DataGridView());
			this->TitrePanier = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Show_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->PrixAddCommande3 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bValiderCommande = (gcnew System::Windows::Forms::Button());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanier))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.10417F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.89584F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 403)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 299)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				969)));
			this->tableLayoutPanel2->Controls->Add(this->Show_DateLivraison, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->Sow_Facturation, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->Show_Livraison, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->Show_Prenom, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->NomAddCommande3, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->PrenomAddCommande3, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->livraisonAddCommande3, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->facturationAddCommande3, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->dateLivraisonAddCommande3, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->Show_Nom, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 29);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 74.81481F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.18518F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 36)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 37)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1233, 225);
			this->tableLayoutPanel2->TabIndex = 0;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AjouterCommande3::tableLayoutPanel2_Paint);
			// 
			// Show_DateLivraison
			// 
			this->Show_DateLivraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_DateLivraison->AutoSize = true;
			this->Show_DateLivraison->BackColor = System::Drawing::Color::White;
			this->Show_DateLivraison->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_DateLivraison->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Show_DateLivraison->Location = System::Drawing::Point(267, 198);
			this->Show_DateLivraison->Name = L"Show_DateLivraison";
			this->Show_DateLivraison->Size = System::Drawing::Size(963, 27);
			this->Show_DateLivraison->TabIndex = 9;
			// 
			// Sow_Facturation
			// 
			this->Sow_Facturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Sow_Facturation->AutoSize = true;
			this->Sow_Facturation->BackColor = System::Drawing::Color::White;
			this->Sow_Facturation->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Sow_Facturation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Sow_Facturation->Location = System::Drawing::Point(267, 160);
			this->Sow_Facturation->Name = L"Sow_Facturation";
			this->Sow_Facturation->Size = System::Drawing::Size(963, 27);
			this->Sow_Facturation->TabIndex = 8;
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
			this->Show_Livraison->Location = System::Drawing::Point(267, 124);
			this->Show_Livraison->Name = L"Show_Livraison";
			this->Show_Livraison->Size = System::Drawing::Size(963, 27);
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
			this->Show_Prenom->Location = System::Drawing::Point(267, 90);
			this->Show_Prenom->Name = L"Show_Prenom";
			this->Show_Prenom->Size = System::Drawing::Size(963, 27);
			this->Show_Prenom->TabIndex = 6;
			// 
			// NomAddCommande3
			// 
			this->NomAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->NomAddCommande3->AutoSize = true;
			this->NomAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NomAddCommande3->Location = System::Drawing::Point(193, 63);
			this->NomAddCommande3->Name = L"NomAddCommande3";
			this->NomAddCommande3->Size = System::Drawing::Size(68, 25);
			this->NomAddCommande3->TabIndex = 0;
			this->NomAddCommande3->Text = L"Nom :";
			// 
			// PrenomAddCommande3
			// 
			this->PrenomAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->PrenomAddCommande3->AutoSize = true;
			this->PrenomAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PrenomAddCommande3->Location = System::Drawing::Point(163, 92);
			this->PrenomAddCommande3->Name = L"PrenomAddCommande3";
			this->PrenomAddCommande3->Size = System::Drawing::Size(98, 25);
			this->PrenomAddCommande3->TabIndex = 1;
			this->PrenomAddCommande3->Text = L"Prénom :";
			// 
			// livraisonAddCommande3
			// 
			this->livraisonAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->livraisonAddCommande3->AutoSize = true;
			this->livraisonAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->livraisonAddCommande3->Location = System::Drawing::Point(42, 126);
			this->livraisonAddCommande3->Name = L"livraisonAddCommande3";
			this->livraisonAddCommande3->Size = System::Drawing::Size(219, 25);
			this->livraisonAddCommande3->TabIndex = 2;
			this->livraisonAddCommande3->Text = L"Adresse de livraison :";
			// 
			// facturationAddCommande3
			// 
			this->facturationAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->facturationAddCommande3->AutoSize = true;
			this->facturationAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->facturationAddCommande3->Location = System::Drawing::Point(21, 162);
			this->facturationAddCommande3->Name = L"facturationAddCommande3";
			this->facturationAddCommande3->Size = System::Drawing::Size(240, 25);
			this->facturationAddCommande3->TabIndex = 3;
			this->facturationAddCommande3->Text = L"Adresse de facturation :";
			// 
			// dateLivraisonAddCommande3
			// 
			this->dateLivraisonAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->dateLivraisonAddCommande3->AutoSize = true;
			this->dateLivraisonAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateLivraisonAddCommande3->Location = System::Drawing::Point(4, 200);
			this->dateLivraisonAddCommande3->Name = L"dateLivraisonAddCommande3";
			this->dateLivraisonAddCommande3->Size = System::Drawing::Size(257, 25);
			this->dateLivraisonAddCommande3->TabIndex = 4;
			this->dateLivraisonAddCommande3->Text = L"Date de livraison prévue :";
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
			this->Show_Nom->Location = System::Drawing::Point(267, 61);
			this->Show_Nom->Name = L"Show_Nom";
			this->Show_Nom->Size = System::Drawing::Size(963, 27);
			this->Show_Nom->TabIndex = 5;
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
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 260);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 2;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.226F)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 88.774F)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1233, 397);
			this->tableLayoutPanel3->TabIndex = 1;
			// 
			// CataloguePanier
			// 
			this->CataloguePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanier->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanier->Location = System::Drawing::Point(3, 47);
			this->CataloguePanier->Name = L"CataloguePanier";
			this->CataloguePanier->RowHeadersWidth = 51;
			this->CataloguePanier->Size = System::Drawing::Size(1227, 347);
			this->CataloguePanier->TabIndex = 0;
			// 
			// TitrePanier
			// 
			this->TitrePanier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->TitrePanier->AutoSize = true;
			this->TitrePanier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TitrePanier->Location = System::Drawing::Point(3, 19);
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
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 663);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25.17007F)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 74.82993F)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1233, 294);
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
			this->tableLayoutPanel5->Controls->Add(this->PrixAddCommande3, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(1227, 68);
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
			this->Show_PrixTTC->Location = System::Drawing::Point(117, 41);
			this->Show_PrixTTC->Name = L"Show_PrixTTC";
			this->Show_PrixTTC->Size = System::Drawing::Size(1107, 27);
			this->Show_PrixTTC->TabIndex = 3;
			// 
			// PrixAddCommande3
			// 
			this->PrixAddCommande3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PrixAddCommande3->AutoSize = true;
			this->PrixAddCommande3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PrixAddCommande3->Location = System::Drawing::Point(3, 43);
			this->PrixAddCommande3->Name = L"PrixAddCommande3";
			this->PrixAddCommande3->Size = System::Drawing::Size(108, 25);
			this->PrixAddCommande3->TabIndex = 2;
			this->PrixAddCommande3->Text = L"Prix TTC :";
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
				285)));
			this->tableLayoutPanel6->Controls->Add(this->bValiderCommande, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->bAnnuler, 2, 1);
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 77);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 2;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 58.87851F)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 41.12149F)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(1227, 214);
			this->tableLayoutPanel6->TabIndex = 1;
			// 
			// bValiderCommande
			// 
			this->bValiderCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bValiderCommande->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bValiderCommande->Location = System::Drawing::Point(634, 129);
			this->bValiderCommande->Name = L"bValiderCommande";
			this->bValiderCommande->Size = System::Drawing::Size(304, 82);
			this->bValiderCommande->TabIndex = 0;
			this->bValiderCommande->Text = L"Valider Commande";
			this->bValiderCommande->UseVisualStyleBackColor = true;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(944, 129);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(280, 82);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterCommande3::bAnnuler_Click);
			// 
			// AjouterCommande3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"AjouterCommande3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AjouterCommande3";
			this->Load += gcnew System::EventHandler(this, &AjouterCommande3::AjouterCommande3_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanier))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void AjouterCommande3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
