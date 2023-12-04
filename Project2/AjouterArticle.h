#pragma once
#include "BDD.h"
#include "ServiceArticle.h"
#include "Article.h"

using namespace NS_Article;

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterArticle
	/// </summary>
	public ref class AjouterArticle : public System::Windows::Forms::Form
	{
	public:
		AjouterArticle(void)
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
		~AjouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ReferenceArticle;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::TextBox^ textBox_RefArticle;
	private: System::Windows::Forms::TextBox^ textBox_ReaproArticle;
	private: System::Windows::Forms::Label^ ReaproArticle;
	private: System::Windows::Forms::TextBox^ textBox_StockArticle;
	private: System::Windows::Forms::Label^ StockArticle;
	private: System::Windows::Forms::Button^ ValiderArticle;
	private: System::Windows::Forms::Label^ PrixHTArticle;
	private: System::Windows::Forms::TextBox^ textBox_PrixHTArticle;
	private: System::Windows::Forms::TextBox^ textBox_NomArticle;
	private: System::Windows::Forms::TextBox^ textBox_CouleurArticle;
	private: System::Windows::Forms::TextBox^ textBox_NatureArticle;
	private: System::Windows::Forms::Label^ CouleurArticle;
	private: System::Windows::Forms::Label^ NomArticle;
	private: System::Windows::Forms::Label^ NatureArticle;
	private: System::Windows::Forms::Button^ bAnnulerAjoutArticle;
	private: System::Windows::Forms::TableLayoutPanel^ AjouterArticle_tableLayoutPanel1;
	private: System::Windows::Forms::Label^ ResultatAjoutArticle;
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
			this->ReferenceArticle = (gcnew System::Windows::Forms::Label());
			this->textBox_RefArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ReaproArticle = (gcnew System::Windows::Forms::TextBox());
			this->ReaproArticle = (gcnew System::Windows::Forms::Label());
			this->textBox_StockArticle = (gcnew System::Windows::Forms::TextBox());
			this->StockArticle = (gcnew System::Windows::Forms::Label());
			this->ValiderArticle = (gcnew System::Windows::Forms::Button());
			this->PrixHTArticle = (gcnew System::Windows::Forms::Label());
			this->textBox_PrixHTArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NomArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CouleurArticle = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->CouleurArticle = (gcnew System::Windows::Forms::Label());
			this->NomArticle = (gcnew System::Windows::Forms::Label());
			this->NatureArticle = (gcnew System::Windows::Forms::Label());
			this->bAnnulerAjoutArticle = (gcnew System::Windows::Forms::Button());
			this->AjouterArticle_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->ResultatAjoutArticle = (gcnew System::Windows::Forms::Label());
			this->AjouterArticle_tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			this->ReferenceArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReferenceArticle->AutoSize = true;
			this->ReferenceArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReferenceArticle->Location = System::Drawing::Point(158, 137);
			this->ReferenceArticle->Name = L"ReferenceArticle";
			this->ReferenceArticle->Size = System::Drawing::Size(402, 70);
			this->ReferenceArticle->TabIndex = 19;
			this->ReferenceArticle->Text = L"Reference";
			this->ReferenceArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->textBox_RefArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_RefArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_RefArticle->Location = System::Drawing::Point(566, 140);
			this->textBox_RefArticle->Name = L"textBox_RefArticle";
			this->textBox_RefArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_RefArticle->TabIndex = 18;
			this->textBox_RefArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_RefArticle_TextChanged);
			this->textBox_ReaproArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_ReaproArticle->Location = System::Drawing::Point(566, 560);
			this->textBox_ReaproArticle->Name = L"textBox_ReaproArticle";
			this->textBox_ReaproArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_ReaproArticle->TabIndex = 10;
			this->textBox_ReaproArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_ReaproArticle_TextChanged);
			this->ReaproArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ReaproArticle->AutoSize = true;
			this->ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReaproArticle->Location = System::Drawing::Point(158, 557);
			this->ReaproArticle->Name = L"ReaproArticle";
			this->ReaproArticle->Size = System::Drawing::Size(402, 70);
			this->ReaproArticle->TabIndex = 16;
			this->ReaproArticle->Text = L" Seuil de reapprovisionnement";
			this->ReaproArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->textBox_StockArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_StockArticle->Location = System::Drawing::Point(566, 490);
			this->textBox_StockArticle->Name = L"textBox_StockArticle";
			this->textBox_StockArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_StockArticle->TabIndex = 12;
			this->textBox_StockArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_StockArticle_TextChanged);
			this->StockArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->StockArticle->AutoSize = true;
			this->StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StockArticle->Location = System::Drawing::Point(158, 487);
			this->StockArticle->Name = L"StockArticle";
			this->StockArticle->Size = System::Drawing::Size(402, 70);
			this->StockArticle->TabIndex = 15;
			this->StockArticle->Text = L"Quantite en stock";
			this->StockArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ValiderArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ValiderArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ValiderArticle->Location = System::Drawing::Point(3, 350);
			this->ValiderArticle->Name = L"ValiderArticle";
			this->ValiderArticle->Size = System::Drawing::Size(149, 64);
			this->ValiderArticle->TabIndex = 17;
			this->ValiderArticle->Text = L"Valider";
			this->ValiderArticle->UseVisualStyleBackColor = true;
			this->ValiderArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::ValiderArticle_Click);
			this->PrixHTArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PrixHTArticle->AutoSize = true;
			this->PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrixHTArticle->Location = System::Drawing::Point(158, 417);
			this->PrixHTArticle->Name = L"PrixHTArticle";
			this->PrixHTArticle->Size = System::Drawing::Size(402, 70);
			this->PrixHTArticle->TabIndex = 13;
			this->PrixHTArticle->Text = L"Prix HT";
			this->PrixHTArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->textBox_PrixHTArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_PrixHTArticle->Location = System::Drawing::Point(566, 420);
			this->textBox_PrixHTArticle->Name = L"textBox_PrixHTArticle";
			this->textBox_PrixHTArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_PrixHTArticle->TabIndex = 9;
			this->textBox_PrixHTArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_PrixHTArticle_TextChanged);
			this->textBox_NomArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_NomArticle->Location = System::Drawing::Point(566, 210);
			this->textBox_NomArticle->Name = L"textBox_NomArticle";
			this->textBox_NomArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_NomArticle->TabIndex = 3;
			this->textBox_NomArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_NomArticle_TextChanged);
			this->textBox_CouleurArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_CouleurArticle->Location = System::Drawing::Point(566, 350);
			this->textBox_CouleurArticle->Name = L"textBox_CouleurArticle";
			this->textBox_CouleurArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_CouleurArticle->TabIndex = 8;
			this->textBox_CouleurArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_CouleurArticle_TextChanged);
			this->textBox_NatureArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NatureArticle->Location = System::Drawing::Point(566, 280);
			this->textBox_NatureArticle->Name = L"textBox_NatureArticle";
			this->textBox_NatureArticle->Size = System::Drawing::Size(607, 41);
			this->textBox_NatureArticle->TabIndex = 4;
			this->textBox_NatureArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_NatureArticle_TextChanged);
			this->CouleurArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CouleurArticle->AutoSize = true;
			this->CouleurArticle->BackColor = System::Drawing::SystemColors::Control;
			this->CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CouleurArticle->Location = System::Drawing::Point(158, 347);
			this->CouleurArticle->Name = L"CouleurArticle";
			this->CouleurArticle->Size = System::Drawing::Size(402, 70);
			this->CouleurArticle->TabIndex = 7;
			this->CouleurArticle->Text = L"Couleur";
			this->CouleurArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->CouleurArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::CouleurArticle_Click);
			this->NomArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomArticle->AutoSize = true;
			this->NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomArticle->Location = System::Drawing::Point(158, 207);
			this->NomArticle->Name = L"NomArticle";
			this->NomArticle->Size = System::Drawing::Size(402, 70);
			this->NomArticle->TabIndex = 5;
			this->NomArticle->Text = L"Nom ";
			this->NomArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NomArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::NomArticle_Click);
			this->NatureArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NatureArticle->AutoSize = true;
			this->NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NatureArticle->Location = System::Drawing::Point(158, 277);
			this->NatureArticle->Name = L"NatureArticle";
			this->NatureArticle->Size = System::Drawing::Size(402, 70);
			this->NatureArticle->TabIndex = 6;
			this->NatureArticle->Text = L"Nature";
			this->NatureArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NatureArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::NatureArticle_Click);
			this->bAnnulerAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnulerAjoutArticle->BackColor = System::Drawing::SystemColors::Control;
			this->bAnnulerAjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bAnnulerAjoutArticle->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bAnnulerAjoutArticle->Location = System::Drawing::Point(3, 3);
			this->bAnnulerAjoutArticle->Name = L"bAnnulerAjoutArticle";
			this->bAnnulerAjoutArticle->Size = System::Drawing::Size(149, 61);
			this->bAnnulerAjoutArticle->TabIndex = 0;
			this->bAnnulerAjoutArticle->Text = L"Annuler";
			this->bAnnulerAjoutArticle->UseVisualStyleBackColor = false;
			this->bAnnulerAjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::bAnnulerAjoutArticle_Click);
			this->AjouterArticle_tableLayoutPanel1->ColumnCount = 4;
			this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				155)));
			this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				408)));
			this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				613)));
			this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				701)));
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->bAnnulerAjoutArticle, 0, 0);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NatureArticle, 1, 4);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NomArticle, 1, 3);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->CouleurArticle, 1, 5);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_CouleurArticle, 2, 5);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_PrixHTArticle, 2, 6);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->PrixHTArticle, 1, 6);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ValiderArticle, 0, 5);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->StockArticle, 1, 7);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_StockArticle, 2, 7);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ReaproArticle, 1, 8);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_ReaproArticle, 2, 8);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_RefArticle, 2, 2);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ReferenceArticle, 1, 2);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ResultatAjoutArticle, 2, 0);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_NomArticle, 2, 3);
			this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_NatureArticle, 2, 4);
			this->AjouterArticle_tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->AjouterArticle_tableLayoutPanel1->Name = L"AjouterArticle_tableLayoutPanel1";
			this->AjouterArticle_tableLayoutPanel1->RowCount = 10;
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				67)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				70)));
			this->AjouterArticle_tableLayoutPanel1->Size = System::Drawing::Size(1877, 1008);
			this->AjouterArticle_tableLayoutPanel1->TabIndex = 2;
			this->AjouterArticle_tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AjouterArticle::AjouterArticle_tableLayoutPanel1_Paint);
			this->ResultatAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResultatAjoutArticle->AutoSize = true;
			this->ResultatAjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ResultatAjoutArticle->Location = System::Drawing::Point(566, 0);
			this->ResultatAjoutArticle->Name = L"ResultatAjoutArticle";
			this->ResultatAjoutArticle->Size = System::Drawing::Size(607, 67);
			this->ResultatAjoutArticle->TabIndex = 20;
			this->ResultatAjoutArticle->Text = L"label2";
			this->ResultatAjoutArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ResultatAjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::ResultatAjoutArticle_Click);
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->AjouterArticle_tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1018);
			this->Name = L"AjouterArticle";
			this->Text = L"AjouterArticle";
			this->Load += gcnew System::EventHandler(this, &AjouterArticle::AjouterArticle_Load);
			this->AjouterArticle_tableLayoutPanel1->ResumeLayout(false);
			this->AjouterArticle_tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AjouterArticle_Load(System::Object^ sender, System::EventArgs^ e) {
		this->ResultatAjoutArticle->Text = "";
	}
	private: System::Void bAnnulerAjoutArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void textBox_RefArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NomArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NatureArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_PrixHTArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_CouleurArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_NatureArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_NomArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_StockArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox_ReaproArticle_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RefArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ValiderArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->textBox_RefArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NatureArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_CouleurArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_PrixHTArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_StockArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_ReaproArticle->Text)) {

			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires",MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; 
		}
		Article^ article = gcnew Article;
		article->setRefArticle(int::Parse(this->textBox_RefArticle->Text));
		article->setNom(this->textBox_NomArticle->Text);
		article->setNature(this->textBox_NatureArticle->Text);
		article->setCouleur(this->textBox_CouleurArticle->Text);
		article->setPrixHT(float::Parse(this->textBox_PrixHTArticle->Text));
		article->setStock(int::Parse(this->textBox_StockArticle->Text));
		article->setQuantiteReapprovisionnement(int::Parse(this->textBox_ReaproArticle->Text));

		ServiceArticle^ serviceArticle = gcnew ServiceArticle();

		// Vérifier si la référence de l'article existe déjà
		if (serviceArticle->ArticleExists(article->getRefArticle())) {
			// Afficher un message à l'utilisateur pour changer la référence
			MessageBox::Show("La référence de l'article existe déjà. Veuillez choisir une autre référence.", "Erreur de référence",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Arrêter le traitement car la référence existe déjà
		}

		// Ajouter l'article si la référence n'existe pas déjà
		if (serviceArticle->InsertServiceArticle(article)) {
			this->ResultatAjoutArticle->Text = "Article ajouté avec succès";
		}
		else {
			this->ResultatAjoutArticle->Text = "Erreur d'ajout d'article";
		}
	}
	private: System::Void CouleurArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AjouterArticle_tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void ResultatAjoutArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}