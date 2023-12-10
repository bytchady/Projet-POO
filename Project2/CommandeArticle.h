#pragma once
#include "CommandeLivraison.h"
#include "ServiceArticle.h"
#include "ServicePanier.h"
#include "Panier.h"


namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeArticle
	/// </summary>
	public ref class CommandeArticle : public System::Windows::Forms::Form
	{
	private:
		Commande^ commande;
		Panier^ nouveauPanier = gcnew Panier();
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Label^ quantite;
	private: System::Windows::Forms::NumericUpDown^ quantiteArticle;
		   Client^ client;
		   int idCommande;
	public:
		CommandeArticle(Client^ c, Commande^ cmd)
		{
			InitializeComponent();
			this->client = c;
			this->commande = cmd;

			//Liste des articles
			DataGridViewTextBoxColumn^ articletb1 = gcnew DataGridViewTextBoxColumn();
			articletb1->Name = "Ref Article";
			this->CatalogueListeArticle->Columns->Add(articletb1);

			DataGridViewTextBoxColumn^ articletb2 = gcnew DataGridViewTextBoxColumn();
			articletb2->Name = "Nom";
			this->CatalogueListeArticle->Columns->Add(articletb2);

			DataGridViewTextBoxColumn^ articletb3 = gcnew DataGridViewTextBoxColumn();
			articletb3->Name = "Nature";
			this->CatalogueListeArticle->Columns->Add(articletb3);

			DataGridViewTextBoxColumn^ articletb4 = gcnew DataGridViewTextBoxColumn();
			articletb4->Name = "Couleur";
			this->CatalogueListeArticle->Columns->Add(articletb4);

			DataGridViewTextBoxColumn^ articletb5 = gcnew DataGridViewTextBoxColumn();
			articletb5->Name = "Prix HT";
			this->CatalogueListeArticle->Columns->Add(articletb5);

			DataGridViewTextBoxColumn^ articletb6 = gcnew DataGridViewTextBoxColumn();
			articletb6->Name = "Stock";
			this->CatalogueListeArticle->Columns->Add(articletb6);

			DataGridViewTextBoxColumn^ articletb7 = gcnew DataGridViewTextBoxColumn();
			articletb7->Name = "TVA";
			this->CatalogueListeArticle->Columns->Add(articletb7);

			DataGridViewTextBoxColumn^ articletb8 = gcnew DataGridViewTextBoxColumn();
			articletb8->Name = "Id_Article";
			articletb8->Visible = false;
			this->CatalogueListeArticle->Columns->Add(articletb8);



			//Panier en cours 
			DataGridViewTextBoxColumn^ paniertb1 = gcnew DataGridViewTextBoxColumn();
			paniertb1->Name = "Ref Article";
			this->CataloguePanierVisual->Columns->Add(paniertb1);

			DataGridViewTextBoxColumn^ paniertb2 = gcnew DataGridViewTextBoxColumn();
			paniertb2->Name = "Nom";
			this->CataloguePanierVisual->Columns->Add(paniertb2);

			DataGridViewTextBoxColumn^ paniertb3 = gcnew DataGridViewTextBoxColumn();
			paniertb3->Name = "Nature";
			this->CataloguePanierVisual->Columns->Add(paniertb3);

			DataGridViewTextBoxColumn^ paniertb4 = gcnew DataGridViewTextBoxColumn();
			paniertb4->Name = "Couleur";
			this->CataloguePanierVisual->Columns->Add(paniertb4);

			DataGridViewTextBoxColumn^ paniertb5 = gcnew DataGridViewTextBoxColumn();
			paniertb5->Name = "Prix";
			this->CataloguePanierVisual->Columns->Add(paniertb5);

			DataGridViewTextBoxColumn^ paniertb6 = gcnew DataGridViewTextBoxColumn();
			paniertb6->Name = "Id_Article";
			paniertb6->Visible = false;
			this->CataloguePanierVisual->Columns->Add(paniertb6);

			DataGridViewTextBoxColumn^ paniertb7 = gcnew DataGridViewTextBoxColumn();
			paniertb7->Name = "TVA";
			paniertb7->Visible = false;
			this->CataloguePanierVisual->Columns->Add(paniertb7);

			nouveauPanier->setCommande(commande);
			this->ReloadArticle();
	
		}
		ServiceArticle^ sa = gcnew ServiceArticle();
		ServicePanier^ sp = gcnew ServicePanier();

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CommandeArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::DataGridView^ CatalogueListeArticle;
	protected:

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::DataGridView^ CataloguePanierVisual;

	private: System::Windows::Forms::Button^ bSupprimerArticle;
	private: System::Windows::Forms::Button^ bAjouterArticle;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ Show_TotalPrixTTC;

	private: System::Windows::Forms::Label^ Show_TotalTVA;

	private: System::Windows::Forms::Label^ label_PrixTVA;
	private: System::Windows::Forms::Label^ label_PrixHT;


	private: System::Windows::Forms::Label^ label_PrixTTC;
	private: System::Windows::Forms::Label^ Show_TotalPrixHT;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;


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
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CatalogueListeArticle = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CataloguePanierVisual = (gcnew System::Windows::Forms::DataGridView());
			this->bSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->bAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Show_TotalTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixHT = (gcnew System::Windows::Forms::Label());
			this->label_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->Show_TotalPrixHT = (gcnew System::Windows::Forms::Label());
			this->Show_TotalPrixTTC = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->quantite = (gcnew System::Windows::Forms::Label());
			this->quantiteArticle = (gcnew System::Windows::Forms::NumericUpDown());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->BeginInit();
			this->tableLayoutPanel6->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantiteArticle))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				73.36957F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				26.63043F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				326)));
			this->tableLayoutPanel4->Controls->Add(this->CatalogueListeArticle, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel2, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 46);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1233, 780);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// CatalogueListeArticle
			// 
			this->CatalogueListeArticle->AllowUserToAddRows = false;
			this->CatalogueListeArticle->AllowUserToDeleteRows = false;
			this->CatalogueListeArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueListeArticle->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueListeArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueListeArticle->Location = System::Drawing::Point(3, 3);
			this->CatalogueListeArticle->Name = L"CatalogueListeArticle";
			this->CatalogueListeArticle->RowHeadersWidth = 51;
			this->CatalogueListeArticle->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CatalogueListeArticle->Size = System::Drawing::Size(659, 774);
			this->CatalogueListeArticle->TabIndex = 2;
			this->CatalogueListeArticle->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeArticle::CatalogueListeArticle_CellContentClick);
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->CataloguePanierVisual, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->bSupprimerArticle, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->bAjouterArticle, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel5->Location = System::Drawing::Point(909, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 69.2053F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30.7947F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(321, 774);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// CataloguePanierVisual
			// 
			this->CataloguePanierVisual->AllowUserToAddRows = false;
			this->CataloguePanierVisual->AllowUserToDeleteRows = false;
			this->CataloguePanierVisual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanierVisual->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CataloguePanierVisual->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanierVisual->Location = System::Drawing::Point(3, 3);
			this->CataloguePanierVisual->Name = L"CataloguePanierVisual";
			this->CataloguePanierVisual->RowHeadersWidth = 51;
			this->CataloguePanierVisual->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CataloguePanierVisual->Size = System::Drawing::Size(315, 465);
			this->CataloguePanierVisual->TabIndex = 3;
			// 
			// bSupprimerArticle
			// 
			this->bSupprimerArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSupprimerArticle->Location = System::Drawing::Point(3, 684);
			this->bSupprimerArticle->Name = L"bSupprimerArticle";
			this->bSupprimerArticle->Size = System::Drawing::Size(315, 40);
			this->bSupprimerArticle->TabIndex = 4;
			this->bSupprimerArticle->Text = L"Supprimer Article";
			this->bSupprimerArticle->UseVisualStyleBackColor = true;
			this->bSupprimerArticle->Click += gcnew System::EventHandler(this, &CommandeArticle::bSupprimerArticle_Click);
			// 
			// bAjouterArticle
			// 
			this->bAjouterArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouterArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bAjouterArticle->Location = System::Drawing::Point(3, 730);
			this->bAjouterArticle->Name = L"bAjouterArticle";
			this->bAjouterArticle->Size = System::Drawing::Size(315, 41);
			this->bAjouterArticle->TabIndex = 5;
			this->bAjouterArticle->Text = L"Ajouter Article";
			this->bAjouterArticle->UseVisualStyleBackColor = true;
			this->bAjouterArticle->Click += gcnew System::EventHandler(this, &CommandeArticle::bAjouterArticle_Click);
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.61225F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.38776F)));
			this->tableLayoutPanel6->Controls->Add(this->Show_TotalTVA, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTVA, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixHT, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTTC, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->Show_TotalPrixHT, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->Show_TotalPrixTTC, 1, 2);
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 474);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(315, 204);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// Show_TotalTVA
			// 
			this->Show_TotalTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_TotalTVA->AutoSize = true;
			this->Show_TotalTVA->BackColor = System::Drawing::Color::White;
			this->Show_TotalTVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_TotalTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_TotalTVA->Location = System::Drawing::Point(99, 72);
			this->Show_TotalTVA->Name = L"Show_TotalTVA";
			this->Show_TotalTVA->Size = System::Drawing::Size(213, 22);
			this->Show_TotalTVA->TabIndex = 4;
			// 
			// label_PrixTVA
			// 
			this->label_PrixTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTVA->AutoSize = true;
			this->label_PrixTVA->Location = System::Drawing::Point(32, 72);
			this->label_PrixTVA->Name = L"label_PrixTVA";
			this->label_PrixTVA->Size = System::Drawing::Size(61, 13);
			this->label_PrixTVA->TabIndex = 2;
			this->label_PrixTVA->Text = L"Total TVA :";
			// 
			// label_PrixHT
			// 
			this->label_PrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixHT->AutoSize = true;
			this->label_PrixHT->Location = System::Drawing::Point(18, 0);
			this->label_PrixHT->Name = L"label_PrixHT";
			this->label_PrixHT->Size = System::Drawing::Size(75, 13);
			this->label_PrixHT->TabIndex = 0;
			this->label_PrixHT->Text = L"Total Prix HT :";
			// 
			// label_PrixTTC
			// 
			this->label_PrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTTC->AutoSize = true;
			this->label_PrixTTC->Location = System::Drawing::Point(12, 144);
			this->label_PrixTTC->Name = L"label_PrixTTC";
			this->label_PrixTTC->Size = System::Drawing::Size(81, 13);
			this->label_PrixTTC->TabIndex = 1;
			this->label_PrixTTC->Text = L"Total Prix TTC :";
			// 
			// Show_TotalPrixHT
			// 
			this->Show_TotalPrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_TotalPrixHT->AutoSize = true;
			this->Show_TotalPrixHT->BackColor = System::Drawing::Color::White;
			this->Show_TotalPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_TotalPrixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_TotalPrixHT->Location = System::Drawing::Point(99, 0);
			this->Show_TotalPrixHT->Name = L"Show_TotalPrixHT";
			this->Show_TotalPrixHT->Size = System::Drawing::Size(213, 22);
			this->Show_TotalPrixHT->TabIndex = 3;
			// 
			// Show_TotalPrixTTC
			// 
			this->Show_TotalPrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Show_TotalPrixTTC->AutoSize = true;
			this->Show_TotalPrixTTC->BackColor = System::Drawing::Color::White;
			this->Show_TotalPrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Show_TotalPrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Show_TotalPrixTTC->Location = System::Drawing::Point(99, 144);
			this->Show_TotalPrixTTC->Name = L"Show_TotalPrixTTC";
			this->Show_TotalPrixTTC->Size = System::Drawing::Size(213, 22);
			this->Show_TotalPrixTTC->TabIndex = 5;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->quantite, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->quantiteArticle, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(668, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(235, 100);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// quantite
			// 
			this->quantite->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->quantite->AutoSize = true;
			this->quantite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantite->Location = System::Drawing::Point(3, 0);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(229, 50);
			this->quantite->TabIndex = 0;
			this->quantite->Text = L"Quantite";
			this->quantite->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			// 
			// quantiteArticle
			// 
			this->quantiteArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->quantiteArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->quantiteArticle->Location = System::Drawing::Point(3, 53);
			this->quantiteArticle->Name = L"quantiteArticle";
			this->quantiteArticle->Size = System::Drawing::Size(120, 29);
			this->quantiteArticle->TabIndex = 1;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				66.18557F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.81443F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				307)));
			this->tableLayoutPanel3->Controls->Add(this->bAnnuler, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 2, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 878);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1233, 79);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(615, 3);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(307, 73);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &CommandeArticle::bAnnuler_Click);
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(928, 3);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(302, 73);
			this->bSuivant->TabIndex = 2;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &CommandeArticle::bSuivant_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 786)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// CommandeArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"CommandeArticle";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Panier";
			this->tableLayoutPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->EndInit();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quantiteArticle))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void ReloadArticle() {
		//liste des articles
		List<Article^>^ articles = sa->SelectAllArticle();
		this->CatalogueListeArticle->Rows->Clear();
		for each (Article ^ a in articles) {
			DataGridViewRow^ articler = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ articlec1 = gcnew DataGridViewTextBoxCell();
			articlec1->Value = a->getRefArticle();
			articler->Cells->Add(articlec1);

			DataGridViewTextBoxCell^ articlec2 = gcnew DataGridViewTextBoxCell();
			articlec2->Value = a->getNom();
			articler->Cells->Add(articlec2);

			DataGridViewTextBoxCell^ articlec3 = gcnew DataGridViewTextBoxCell();
			articlec3->Value = a->getNature();
			articler->Cells->Add(articlec3);

			DataGridViewTextBoxCell^ articlec4 = gcnew DataGridViewTextBoxCell();
			articlec4->Value = a->getCouleur();
			articler->Cells->Add(articlec4);

			DataGridViewTextBoxCell^ articlec5 = gcnew DataGridViewTextBoxCell();
			articlec5->Value = a->getPrixHT();
			articler->Cells->Add(articlec5);

			DataGridViewTextBoxCell^ articlec6 = gcnew DataGridViewTextBoxCell();
			articlec6->Value = a->getStock();
			articler->Cells->Add(articlec6);

			DataGridViewTextBoxCell^ articlec7 = gcnew DataGridViewTextBoxCell();
			articlec7->Value = a->getTauxTVA();
			articler->Cells->Add(articlec7);

			DataGridViewTextBoxCell^ articlec8 = gcnew DataGridViewTextBoxCell();
			articlec8->Value = a->getIdArticle();
			articler->Cells->Add(articlec8);

			articler->Tag = a;
			this->CatalogueListeArticle->Rows->Add(articler);
		}
	}

	/*private: void ReloadPanier() {
		List<Panier^>^ panier = sp->SelectAllArticle(nouveauPanier);
		this->CataloguePanierVisual->Rows->Clear();
		for each (Panier ^ p in panier) {
			DataGridViewRow^ panierR = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ panierc1 = gcnew DataGridViewTextBoxCell();
			panierc1->Value = p->getArticle()->getRefArticle();
			panierR->Cells->Add(panierc1);

			DataGridViewTextBoxCell^ panierc2 = gcnew DataGridViewTextBoxCell();
			panierc2->Value = p->getArticle()->getNom();
			panierR->Cells->Add(panierc2);

			DataGridViewTextBoxCell^ panierc3 = gcnew DataGridViewTextBoxCell();
			panierc3->Value = p->getArticle()->getNature();
			panierR->Cells->Add(panierc3);

			DataGridViewTextBoxCell^ panierc4 = gcnew DataGridViewTextBoxCell();
			panierc4->Value = p->getArticle()->getCouleur();
			panierR->Cells->Add(panierc4);

			DataGridViewTextBoxCell^ panierc5 = gcnew DataGridViewTextBoxCell();
			panierc5->Value = p->getPrixFinal();
			panierR->Cells->Add(panierc5);

			DataGridViewTextBoxCell^ panierc6 = gcnew DataGridViewTextBoxCell();
			panierc6->Value = p->getArticle()->getIdArticle();
			panierR->Cells->Add(panierc6);

			DataGridViewTextBoxCell^ panierc7 = gcnew DataGridViewTextBoxCell();
			panierc7->Value = p->getCommande()->getIdCommande();
			panierR->Cells->Add(panierc7);

			panierR->Tag = p;
			this->CatalogueListeArticle->Rows->Add(panierR);
		}
	}*/
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
		CommandeLivraison^ nouvellecommande = gcnew CommandeLivraison(nouveauPanier, client, commande);
		nouvellecommande->ShowDialog();
		this->Close();
	}
	private: System::Void CatalogueListeArticle_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void bAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CatalogueListeArticle->SelectedRows->Count == 1) {
			DataGridViewRow^ selectedRow = this->CatalogueListeArticle->SelectedRows[0];

			// Récupérer les informations de la ligne sélectionnée
			int refArticle = safe_cast<int>(selectedRow->Cells["Ref Article"]->Value);
			String^ nomArticle = safe_cast<String^>(selectedRow->Cells["Nom"]->Value);
			String^ natureArticle = safe_cast<String^>(selectedRow->Cells["Nature"]->Value);
			String^ couleurArticle = safe_cast<String^>(selectedRow->Cells["Couleur"]->Value);
			float prix = Convert::ToSingle(selectedRow->Cells["Prix HT"]->Value);
			float tauxTVA = Convert::ToSingle(selectedRow->Cells["TVA"]->Value);
			int stock = Convert::ToInt32(selectedRow->Cells["Stock"]->Value);
			int idArticle = safe_cast<int>(selectedRow->Cells["Id_Article"]->Value);

			// Récupérer la quantité depuis le NumericUpDown
			int quantite = Convert::ToInt32(this->quantiteArticle->Value);

			// Vérifier si la quantité est disponible en stock
			if (quantite > stock) {
				MessageBox::Show("La quantité sélectionnée est supérieure au stock disponible.", "Stock insuffisant", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			// Calculer le prix total
			float prixTotal = prix * quantite;

			// Ajouter l'article au panier
			nouveauPanier->getArticle()->setRefArticle(refArticle);
			nouveauPanier->getArticle()->setNom(nomArticle);
			nouveauPanier->getArticle()->setNature(natureArticle);
			nouveauPanier->getArticle()->setCouleur(couleurArticle);
			nouveauPanier->getArticle()->setIdArticle(idArticle);
			nouveauPanier->setQuantiteArticle(quantite);
			nouveauPanier->setPrixFinal(prixTotal);

			// Ajouter la ligne au DataGridView du panier
			DataGridViewRow^ panierRow = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ panierc1 = gcnew DataGridViewTextBoxCell();
			panierc1->Value = refArticle;
			panierRow->Cells->Add(panierc1);

			DataGridViewTextBoxCell^ panierc2 = gcnew DataGridViewTextBoxCell();
			panierc2->Value = nomArticle;
			panierRow->Cells->Add(panierc2);

			DataGridViewTextBoxCell^ panierc3 = gcnew DataGridViewTextBoxCell();
			panierc3->Value = natureArticle;
			panierRow->Cells->Add(panierc3);

			DataGridViewTextBoxCell^ panierc4 = gcnew DataGridViewTextBoxCell();
			panierc4->Value = couleurArticle;
			panierRow->Cells->Add(panierc4);

			DataGridViewTextBoxCell^ panierc5 = gcnew DataGridViewTextBoxCell();
			panierc5->Value = prixTotal;
			panierRow->Cells->Add(panierc5);

			DataGridViewTextBoxCell^ panierc6 = gcnew DataGridViewTextBoxCell();
			panierc6->Value = idArticle;
			panierRow->Cells->Add(panierc6);

			DataGridViewTextBoxCell^ panierc7 = gcnew DataGridViewTextBoxCell();
			panierc7->Value = tauxTVA;
			panierRow->Cells->Add(panierc7);

			this->CataloguePanierVisual->Rows->Add(panierRow);

			// Mettre à jour les montants totaux
			UpdateTotalAmounts(tauxTVA);
		}
	}

private: void UpdateTotalAmounts(float tauxTVA) {
	float totalTTC = 0;
	float totalHT = 0;
	float totalTVA = 0;

	// Parcourir toutes les lignes du panier
	for each (DataGridViewRow ^ row in this->CataloguePanierVisual->Rows) {
		float prixTotal = Convert::ToSingle(row->Cells["Prix"]->Value);

		// Calculer le total HT
		totalHT += prixTotal;

		// Calculer le total TTC
		totalTTC += prixTotal * (1 + tauxTVA);

		// Calculer le total TVA
		totalTVA += prixTotal * tauxTVA;
	}

	// Mettre à jour les labels
	this->Show_TotalPrixTTC->Text = totalTTC.ToString("C");
	this->Show_TotalPrixHT->Text = totalHT.ToString("C");
	this->Show_TotalTVA->Text = totalTVA.ToString("C");

	commande->setTotalHT(totalHT);
	commande->setTotalTTC(totalTTC);
	commande->setTotalTVA(totalTVA);
}

	private: System::Void bSupprimerArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CataloguePanierVisual->SelectedRows->Count == 1) {
			DataGridViewRow^ selectedRow = this->CataloguePanierVisual->SelectedRows[0];
			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer cet article du panier ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == System::Windows::Forms::DialogResult::Yes) {
				float tauxTVA = Convert::ToSingle(selectedRow->Cells["TVA"]->Value);

				this->CataloguePanierVisual->Rows->Remove(selectedRow);

				// Appeler UpdateTotalAmounts avec le tauxTVA approprié
				this->UpdateTotalAmounts(tauxTVA);
			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	};
}
