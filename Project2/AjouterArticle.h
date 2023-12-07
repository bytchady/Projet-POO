#pragma once
#include "BDD.h"
#include "ServiceArticle.h"
#include "Article.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AjouterArticle : public System::Windows::Forms::Form
	{
	public:
		AjouterArticle(Article^ a)
		{
			InitializeComponent();
			this->a = a;
			this->textBox_RefArticle->Text = a->getRefArticle() + "";
			this->textBox_NomArticle->Text = a->getNom();
			this->textBox_NatureArticle->Text = a->getNature();
			this->textBox_CouleurArticle->Text = a->getCouleur();
			this->textBox_PrixHTArticle->Text = a->getPrixHT() + "";
			this->textBox_StockArticle->Text = a->getStock() + "";
			this->textBox_ReaproArticle->Text = a->getQuantiteReapprovisionnement() + "";
			this->textBox_TvaArticle->Text = a->getTauxTVA() + "";


			if (a->getIdArticle() != 0) {
				this->ValiderArticle->Text = "Modifier";
			}
		}
		bool ok = false;

	private: System::Windows::Forms::Label^ TvaArticle;
	public:
	private: System::Windows::Forms::TextBox^ textBox_TvaArticle;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

	protected:
		Article^ a;
		~AjouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ ReferenceArticle;
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
	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
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
			   this->TvaArticle = (gcnew System::Windows::Forms::Label());
			   this->textBox_TvaArticle = (gcnew System::Windows::Forms::TextBox());
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->AjouterArticle_tableLayoutPanel1->SuspendLayout();
			   this->tableLayoutPanel2->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // ReferenceArticle
			   // 
			   this->ReferenceArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->ReferenceArticle->AutoSize = true;
			   this->ReferenceArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->ReferenceArticle->Location = System::Drawing::Point(383, 146);
			   this->ReferenceArticle->Name = L"ReferenceArticle";
			   this->ReferenceArticle->Size = System::Drawing::Size(145, 32);
			   this->ReferenceArticle->TabIndex = 19;
			   this->ReferenceArticle->Text = L"Reference";
			   this->ReferenceArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_RefArticle
			   // 
			   this->textBox_RefArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_RefArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_RefArticle->Location = System::Drawing::Point(534, 142);
			   this->textBox_RefArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_RefArticle->Name = L"textBox_RefArticle";
			   this->textBox_RefArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_RefArticle->TabIndex = 18;
			   this->textBox_RefArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_RefArticle_TextChanged);
			   // 
			   // textBox_ReaproArticle
			   // 
			   this->textBox_ReaproArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_ReaproArticle->Location = System::Drawing::Point(534, 467);
			   this->textBox_ReaproArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_ReaproArticle->Name = L"textBox_ReaproArticle";
			   this->textBox_ReaproArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_ReaproArticle->TabIndex = 10;
			   this->textBox_ReaproArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_ReaproArticle_TextChanged);
			   // 
			   // ReaproArticle
			   // 
			   this->ReaproArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->ReaproArticle->AutoSize = true;
			   this->ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ReaproArticle->Location = System::Drawing::Point(247, 455);
			   this->ReaproArticle->Name = L"ReaproArticle";
			   this->ReaproArticle->Size = System::Drawing::Size(281, 64);
			   this->ReaproArticle->TabIndex = 16;
			   this->ReaproArticle->Text = L" Seuil de reapprovisionnement";
			   this->ReaproArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_StockArticle
			   // 
			   this->textBox_StockArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_StockArticle->Location = System::Drawing::Point(534, 402);
			   this->textBox_StockArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_StockArticle->Name = L"textBox_StockArticle";
			   this->textBox_StockArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_StockArticle->TabIndex = 12;
			   this->textBox_StockArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_StockArticle_TextChanged);
			   // 
			   // StockArticle
			   // 
			   this->StockArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->StockArticle->AutoSize = true;
			   this->StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->StockArticle->Location = System::Drawing::Point(293, 406);
			   this->StockArticle->Name = L"StockArticle";
			   this->StockArticle->Size = System::Drawing::Size(235, 32);
			   this->StockArticle->TabIndex = 15;
			   this->StockArticle->Text = L"Quantite en stock";
			   this->StockArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // ValiderArticle
			   // 
			   this->ValiderArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ValiderArticle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ValiderArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ValiderArticle->Location = System::Drawing::Point(3, 2);
			   this->ValiderArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->ValiderArticle->Name = L"ValiderArticle";
			   this->ValiderArticle->Size = System::Drawing::Size(341, 53);
			   this->ValiderArticle->TabIndex = 17;
			   this->ValiderArticle->Text = L"Valider";
			   this->ValiderArticle->UseVisualStyleBackColor = false;
			   this->ValiderArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::ValiderArticle_Click);
			   // 
			   // PrixHTArticle
			   // 
			   this->PrixHTArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->PrixHTArticle->AutoSize = true;
			   this->PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PrixHTArticle->Location = System::Drawing::Point(421, 601);
			   this->PrixHTArticle->Name = L"PrixHTArticle";
			   this->PrixHTArticle->Size = System::Drawing::Size(107, 32);
			   this->PrixHTArticle->TabIndex = 13;
			   this->PrixHTArticle->Text = L"Prix HT";
			   this->PrixHTArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_PrixHTArticle
			   // 
			   this->textBox_PrixHTArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_PrixHTArticle->Location = System::Drawing::Point(534, 597);
			   this->textBox_PrixHTArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_PrixHTArticle->Name = L"textBox_PrixHTArticle";
			   this->textBox_PrixHTArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_PrixHTArticle->TabIndex = 9;
			   this->textBox_PrixHTArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_PrixHTArticle_TextChanged);
			   // 
			   // textBox_NomArticle
			   // 
			   this->textBox_NomArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_NomArticle->Location = System::Drawing::Point(534, 207);
			   this->textBox_NomArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_NomArticle->Name = L"textBox_NomArticle";
			   this->textBox_NomArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_NomArticle->TabIndex = 3;
			   this->textBox_NomArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_NomArticle_TextChanged);
			   // 
			   // textBox_CouleurArticle
			   // 
			   this->textBox_CouleurArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_CouleurArticle->Location = System::Drawing::Point(534, 337);
			   this->textBox_CouleurArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_CouleurArticle->Name = L"textBox_CouleurArticle";
			   this->textBox_CouleurArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_CouleurArticle->TabIndex = 8;
			   this->textBox_CouleurArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_CouleurArticle_TextChanged);
			   // 
			   // textBox_NatureArticle
			   // 
			   this->textBox_NatureArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_NatureArticle->Location = System::Drawing::Point(534, 272);
			   this->textBox_NatureArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_NatureArticle->Name = L"textBox_NatureArticle";
			   this->textBox_NatureArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_NatureArticle->TabIndex = 4;
			   this->textBox_NatureArticle->TextChanged += gcnew System::EventHandler(this, &AjouterArticle::textBox_NatureArticle_TextChanged);
			   // 
			   // CouleurArticle
			   // 
			   this->CouleurArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->CouleurArticle->AutoSize = true;
			   this->CouleurArticle->BackColor = System::Drawing::SystemColors::Control;
			   this->CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CouleurArticle->Location = System::Drawing::Point(414, 341);
			   this->CouleurArticle->Name = L"CouleurArticle";
			   this->CouleurArticle->Size = System::Drawing::Size(114, 32);
			   this->CouleurArticle->TabIndex = 7;
			   this->CouleurArticle->Text = L"Couleur";
			   this->CouleurArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->CouleurArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::CouleurArticle_Click);
			   // 
			   // NomArticle
			   // 
			   this->NomArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->NomArticle->AutoSize = true;
			   this->NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomArticle->Location = System::Drawing::Point(448, 211);
			   this->NomArticle->Name = L"NomArticle";
			   this->NomArticle->Size = System::Drawing::Size(80, 32);
			   this->NomArticle->TabIndex = 5;
			   this->NomArticle->Text = L"Nom ";
			   this->NomArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->NomArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::NomArticle_Click);
			   // 
			   // NatureArticle
			   // 
			   this->NatureArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->NatureArticle->AutoSize = true;
			   this->NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NatureArticle->Location = System::Drawing::Point(429, 276);
			   this->NatureArticle->Name = L"NatureArticle";
			   this->NatureArticle->Size = System::Drawing::Size(99, 32);
			   this->NatureArticle->TabIndex = 6;
			   this->NatureArticle->Text = L"Nature";
			   this->NatureArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->NatureArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::NatureArticle_Click);
			   // 
			   // bAnnulerAjoutArticle
			   // 
			   this->bAnnulerAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->bAnnulerAjoutArticle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->bAnnulerAjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, System::Drawing::FontStyle::Bold,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->bAnnulerAjoutArticle->ForeColor = System::Drawing::SystemColors::ControlText;
			   this->bAnnulerAjoutArticle->Location = System::Drawing::Point(350, 2);
			   this->bAnnulerAjoutArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->bAnnulerAjoutArticle->Name = L"bAnnulerAjoutArticle";
			   this->bAnnulerAjoutArticle->Size = System::Drawing::Size(342, 53);
			   this->bAnnulerAjoutArticle->TabIndex = 0;
			   this->bAnnulerAjoutArticle->Text = L"Annuler";
			   this->bAnnulerAjoutArticle->UseVisualStyleBackColor = false;
			   this->bAnnulerAjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::bAnnulerAjoutArticle_Click);
			   // 
			   // AjouterArticle_tableLayoutPanel1
			   // 
			   this->AjouterArticle_tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->AjouterArticle_tableLayoutPanel1->AutoScroll = true;
			   this->AjouterArticle_tableLayoutPanel1->ColumnCount = 4;
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   155)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   376)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   703)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   644)));
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NatureArticle, 1, 4);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NomArticle, 1, 3);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->CouleurArticle, 1, 5);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_CouleurArticle, 2, 5);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_RefArticle, 2, 2);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ReferenceArticle, 1, 2);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ResultatAjoutArticle, 2, 0);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_NomArticle, 2, 3);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_NatureArticle, 2, 4);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->TvaArticle, 1, 8);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_TvaArticle, 2, 8);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->StockArticle, 1, 6);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_StockArticle, 2, 6);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ReaproArticle, 1, 7);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->PrixHTArticle, 1, 9);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_ReaproArticle, 2, 7);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_PrixHTArticle, 2, 9);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 2, 11);
			   this->AjouterArticle_tableLayoutPanel1->Location = System::Drawing::Point(15, 14);
			   this->AjouterArticle_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->AjouterArticle_tableLayoutPanel1->Name = L"AjouterArticle_tableLayoutPanel1";
			   this->AjouterArticle_tableLayoutPanel1->RowCount = 13;
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   65)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   20)));
			   this->AjouterArticle_tableLayoutPanel1->Size = System::Drawing::Size(1557, 1107);
			   this->AjouterArticle_tableLayoutPanel1->TabIndex = 2;
			   // 
			   // ResultatAjoutArticle
			   // 
			   this->ResultatAjoutArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ResultatAjoutArticle->AutoSize = true;
			   this->ResultatAjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->ResultatAjoutArticle->Location = System::Drawing::Point(534, 0);
			   this->ResultatAjoutArticle->Name = L"ResultatAjoutArticle";
			   this->ResultatAjoutArticle->Size = System::Drawing::Size(697, 65);
			   this->ResultatAjoutArticle->TabIndex = 20;
			   this->ResultatAjoutArticle->Text = L"label2";
			   this->ResultatAjoutArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // TvaArticle
			   // 
			   this->TvaArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->TvaArticle->AutoSize = true;
			   this->TvaArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TvaArticle->Location = System::Drawing::Point(459, 536);
			   this->TvaArticle->Name = L"TvaArticle";
			   this->TvaArticle->Size = System::Drawing::Size(69, 32);
			   this->TvaArticle->TabIndex = 22;
			   this->TvaArticle->Text = L"TVA";
			   this->TvaArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_TvaArticle
			   // 
			   this->textBox_TvaArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_TvaArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_TvaArticle->Location = System::Drawing::Point(534, 532);
			   this->textBox_TvaArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->textBox_TvaArticle->Name = L"textBox_TvaArticle";
			   this->textBox_TvaArticle->Size = System::Drawing::Size(697, 41);
			   this->textBox_TvaArticle->TabIndex = 21;
			   // 
			   // tableLayoutPanel2
			   // 
			   this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->tableLayoutPanel2->ColumnCount = 2;
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   50)));
			   this->tableLayoutPanel2->Controls->Add(this->bAnnulerAjoutArticle, 1, 0);
			   this->tableLayoutPanel2->Controls->Add(this->ValiderArticle, 0, 0);
			   this->tableLayoutPanel2->Location = System::Drawing::Point(535, 719);
			   this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(695, 57);
			   this->tableLayoutPanel2->TabIndex = 24;
			   // 
			   // AjouterArticle
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1683, 977);
			   this->Controls->Add(this->AjouterArticle_tableLayoutPanel1);
			   this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			   this->MaximumSize = System::Drawing::Size(1701, 1024);
			   this->MinimumSize = System::Drawing::Size(1701, 1018);
			   this->Name = L"AjouterArticle";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"AjouterArticle";
			   this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			   this->Load += gcnew System::EventHandler(this, &AjouterArticle::AjouterArticle_Load);
			   this->AjouterArticle_tableLayoutPanel1->ResumeLayout(false);
			   this->AjouterArticle_tableLayoutPanel1->PerformLayout();
			   this->tableLayoutPanel2->ResumeLayout(false);
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
			String::IsNullOrWhiteSpace(this->textBox_ReaproArticle->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_TvaArticle->Text)) {

			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		//Article^ article = gcnew Article;
		a->setRefArticle(int::Parse(this->textBox_RefArticle->Text));
		a->setNom(this->textBox_NomArticle->Text);
		a->setNature(this->textBox_NatureArticle->Text);
		a->setCouleur(this->textBox_CouleurArticle->Text);
		a->setPrixHT(float::Parse(this->textBox_PrixHTArticle->Text));
		a->setStock(int::Parse(this->textBox_StockArticle->Text));
		a->setQuantiteReapprovisionnement(int::Parse(this->textBox_ReaproArticle->Text));
		a->setTauxTVA(float::Parse(this->textBox_TvaArticle->Text));

		//ServiceArticle^ serviceArticle = gcnew ServiceArticle();

		/*
		// Vérifier si la référence de l'article existe déjà
		if (serviceArticle->ArticleExists(a->getRefArticle())) {
			// Afficher un message à l'utilisateur pour changer la référence
			MessageBox::Show("La référence de l'article existe déjà. Veuillez choisir une autre référence.", "Erreur de référence",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return; // Arrêter le traitement car la référence existe déjà
		}*/

		// Ajouter l'article si la référence n'existe pas déjà

		/*
		if (serviceArticle->InsertServiceArticle(a)) {
			this->ResultatAjoutArticle->Text = "Article ajouté avec succès";
		}
		else {
			this->ResultatAjoutArticle->Text = "Erreur d'ajout d'article";
		}*/
		ok = true;
		this->Close();

	}
	private: System::Void CouleurArticle_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}