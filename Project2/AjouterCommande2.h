#pragma once
#include "AjouterCommande3.h"
#include "ServiceArticle.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterCommande2
	/// </summary>
	public ref class AjouterCommande2 : public System::Windows::Forms::Form
	{
	public:
		AjouterCommande2(void)
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
		~AjouterCommande2()
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
	private: System::Windows::Forms::Label^ lTotalPrixTTC;
	private: System::Windows::Forms::Label^ lTotalTVA;
	private: System::Windows::Forms::Label^ label_PrixTVA;
	private: System::Windows::Forms::Label^ label_PrixHT;


	private: System::Windows::Forms::Label^ label_PrixTTC;

	private: System::Windows::Forms::Label^ lTotalPrixHT;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	protected:























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
			this->lTotalPrixTTC = (gcnew System::Windows::Forms::Label());
			this->lTotalTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixTVA = (gcnew System::Windows::Forms::Label());
			this->label_PrixHT = (gcnew System::Windows::Forms::Label());
			this->label_PrixTTC = (gcnew System::Windows::Forms::Label());
			this->lTotalPrixHT = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->BeginInit();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->BeginInit();
			this->tableLayoutPanel6->SuspendLayout();
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
				96.33225F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				3.667745F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				412)));
			this->tableLayoutPanel4->Controls->Add(this->CatalogueListeArticle, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(4, 57);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1644, 959);
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
			this->CatalogueListeArticle->Location = System::Drawing::Point(4, 4);
			this->CatalogueListeArticle->Margin = System::Windows::Forms::Padding(4);
			this->CatalogueListeArticle->Name = L"CatalogueListeArticle";
			this->CatalogueListeArticle->RowHeadersWidth = 51;
			this->CatalogueListeArticle->Size = System::Drawing::Size(1178, 951);
			this->CatalogueListeArticle->TabIndex = 2;
			this->CatalogueListeArticle->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AjouterCommande2::CatalogueListeArticle_CellContentClick);
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
			this->tableLayoutPanel5->Location = System::Drawing::Point(1235, 4);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 69.2053F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30.7947F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(405, 951);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// CataloguePanierVisual
			// 
			this->CataloguePanierVisual->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CataloguePanierVisual->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CataloguePanierVisual->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePanierVisual->Location = System::Drawing::Point(4, 4);
			this->CataloguePanierVisual->Margin = System::Windows::Forms::Padding(4);
			this->CataloguePanierVisual->Name = L"CataloguePanierVisual";
			this->CataloguePanierVisual->RowHeadersWidth = 51;
			this->CataloguePanierVisual->Size = System::Drawing::Size(397, 571);
			this->CataloguePanierVisual->TabIndex = 3;
			// 
			// bSupprimerArticle
			// 
			this->bSupprimerArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSupprimerArticle->Location = System::Drawing::Point(4, 840);
			this->bSupprimerArticle->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimerArticle->Name = L"bSupprimerArticle";
			this->bSupprimerArticle->Size = System::Drawing::Size(397, 49);
			this->bSupprimerArticle->TabIndex = 4;
			this->bSupprimerArticle->Text = L"Supprimer Article";
			this->bSupprimerArticle->UseVisualStyleBackColor = true;
			// 
			// bAjouterArticle
			// 
			this->bAjouterArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouterArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bAjouterArticle->Location = System::Drawing::Point(4, 897);
			this->bAjouterArticle->Margin = System::Windows::Forms::Padding(4);
			this->bAjouterArticle->Name = L"bAjouterArticle";
			this->bAjouterArticle->Size = System::Drawing::Size(397, 50);
			this->bAjouterArticle->TabIndex = 5;
			this->bAjouterArticle->Text = L"Ajouter Article";
			this->bAjouterArticle->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel6->Controls->Add(this->lTotalTVA, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTVA, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixHT, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label_PrixTTC, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixHT, 1, 0);
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixTTC, 1, 2);
			this->tableLayoutPanel6->Location = System::Drawing::Point(4, 583);
			this->tableLayoutPanel6->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 73)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(397, 249);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// lTotalPrixTTC
			// 
			this->lTotalPrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixTTC->AutoSize = true;
			this->lTotalPrixTTC->BackColor = System::Drawing::Color::White;
			this->lTotalPrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixTTC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalPrixTTC->Location = System::Drawing::Point(125, 176);
			this->lTotalPrixTTC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lTotalPrixTTC->Name = L"lTotalPrixTTC";
			this->lTotalPrixTTC->Size = System::Drawing::Size(268, 27);
			this->lTotalPrixTTC->TabIndex = 5;
			// 
			// lTotalTVA
			// 
			this->lTotalTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalTVA->AutoSize = true;
			this->lTotalTVA->BackColor = System::Drawing::Color::White;
			this->lTotalTVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalTVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalTVA->Location = System::Drawing::Point(125, 88);
			this->lTotalTVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lTotalTVA->Name = L"lTotalTVA";
			this->lTotalTVA->Size = System::Drawing::Size(268, 27);
			this->lTotalTVA->TabIndex = 4;
			// 
			// label_PrixTVA
			// 
			this->label_PrixTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTVA->AutoSize = true;
			this->label_PrixTVA->Location = System::Drawing::Point(43, 88);
			this->label_PrixTVA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_PrixTVA->Name = L"label_PrixTVA";
			this->label_PrixTVA->Size = System::Drawing::Size(74, 16);
			this->label_PrixTVA->TabIndex = 2;
			this->label_PrixTVA->Text = L"Total TVA :";
			// 
			// label_PrixHT
			// 
			this->label_PrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixHT->AutoSize = true;
			this->label_PrixHT->Location = System::Drawing::Point(26, 0);
			this->label_PrixHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_PrixHT->Name = L"label_PrixHT";
			this->label_PrixHT->Size = System::Drawing::Size(91, 16);
			this->label_PrixHT->TabIndex = 0;
			this->label_PrixHT->Text = L"Total Prix HT :";
			// 
			// label_PrixTTC
			// 
			this->label_PrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label_PrixTTC->AutoSize = true;
			this->label_PrixTTC->Location = System::Drawing::Point(18, 176);
			this->label_PrixTTC->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_PrixTTC->Name = L"label_PrixTTC";
			this->label_PrixTTC->Size = System::Drawing::Size(99, 16);
			this->label_PrixTTC->TabIndex = 1;
			this->label_PrixTTC->Text = L"Total Prix TTC :";
			// 
			// lTotalPrixHT
			// 
			this->lTotalPrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixHT->AutoSize = true;
			this->lTotalPrixHT->BackColor = System::Drawing::Color::White;
			this->lTotalPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixHT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lTotalPrixHT->Location = System::Drawing::Point(125, 0);
			this->lTotalPrixHT->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lTotalPrixHT->Name = L"lTotalPrixHT";
			this->lTotalPrixHT->Size = System::Drawing::Size(268, 27);
			this->lTotalPrixHT->TabIndex = 3;
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
				387)));
			this->tableLayoutPanel3->Controls->Add(this->bAnnuler, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(4, 1081);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1644, 97);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(1260, 4);
			this->bAnnuler->Margin = System::Windows::Forms::Padding(4);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(380, 89);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterCommande2::bAnnuler_Click);
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(835, 4);
			this->bSuivant->Margin = System::Windows::Forms::Padding(4);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(417, 89);
			this->bSuivant->TabIndex = 2;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &AjouterCommande2::bSuivant_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(17, 16);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 28)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 967)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 105)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1652, 1182);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// AjouterCommande2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 1055);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1249);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
			this->Name = L"AjouterCommande2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Commande";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AjouterCommande2::AjouterCommande2_Load);
			this->tableLayoutPanel4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeArticle))->EndInit();
			this->tableLayoutPanel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePanierVisual))->EndInit();
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
		AjouterCommande3^ ac3 = gcnew AjouterCommande3();
		ac3->ShowDialog();
	}
	private: System::Void CatalogueListeArticle_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void AjouterCommande2_Load(System::Object^ sender, System::EventArgs^ e) {
	};
	};
}