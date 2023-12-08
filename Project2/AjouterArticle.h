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
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bAnnulerAjoutArticle;
	private: System::Windows::Forms::Button^ ValiderArticle;
	private: System::Windows::Forms::TextBox^ textBox_PrixHTArticle;
	private: System::Windows::Forms::TextBox^ textBox_ReaproArticle;
	private: System::Windows::Forms::Label^ PrixHTArticle;
	private: System::Windows::Forms::Label^ ReaproArticle;
	private: System::Windows::Forms::TextBox^ textBox_StockArticle;
	private: System::Windows::Forms::Label^ StockArticle;
	private: System::Windows::Forms::TextBox^ textBox_TvaArticle;
	private: System::Windows::Forms::Label^ TvaArticle;
	private: System::Windows::Forms::TextBox^ textBox_NatureArticle;
	private: System::Windows::Forms::TextBox^ textBox_NomArticle;
	private: System::Windows::Forms::Label^ ReferenceArticle;
	private: System::Windows::Forms::TextBox^ textBox_RefArticle;
	private: System::Windows::Forms::TextBox^ textBox_CouleurArticle;
	private: System::Windows::Forms::Label^ CouleurArticle;
	private: System::Windows::Forms::Label^ NomArticle;
	private: System::Windows::Forms::Label^ NatureArticle;
	private: System::Windows::Forms::TableLayoutPanel^ AjouterArticle_tableLayoutPanel1;

	protected:
		Article^ a;
		~AjouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->bAnnulerAjoutArticle = (gcnew System::Windows::Forms::Button());
			   this->ValiderArticle = (gcnew System::Windows::Forms::Button());
			   this->textBox_PrixHTArticle = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_ReaproArticle = (gcnew System::Windows::Forms::TextBox());
			   this->PrixHTArticle = (gcnew System::Windows::Forms::Label());
			   this->ReaproArticle = (gcnew System::Windows::Forms::Label());
			   this->textBox_StockArticle = (gcnew System::Windows::Forms::TextBox());
			   this->StockArticle = (gcnew System::Windows::Forms::Label());
			   this->textBox_TvaArticle = (gcnew System::Windows::Forms::TextBox());
			   this->TvaArticle = (gcnew System::Windows::Forms::Label());
			   this->textBox_NatureArticle = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_NomArticle = (gcnew System::Windows::Forms::TextBox());
			   this->ReferenceArticle = (gcnew System::Windows::Forms::Label());
			   this->textBox_RefArticle = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_CouleurArticle = (gcnew System::Windows::Forms::TextBox());
			   this->CouleurArticle = (gcnew System::Windows::Forms::Label());
			   this->NomArticle = (gcnew System::Windows::Forms::Label());
			   this->NatureArticle = (gcnew System::Windows::Forms::Label());
			   this->AjouterArticle_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->tableLayoutPanel2->SuspendLayout();
			   this->AjouterArticle_tableLayoutPanel1->SuspendLayout();
			   this->SuspendLayout();
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
			   this->tableLayoutPanel2->Location = System::Drawing::Point(401, 760);
			   this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			   this->tableLayoutPanel2->RowCount = 1;
			   this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			   this->tableLayoutPanel2->Size = System::Drawing::Size(521, 76);
			   this->tableLayoutPanel2->TabIndex = 24;
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
			   this->bAnnulerAjoutArticle->Location = System::Drawing::Point(262, 2);
			   this->bAnnulerAjoutArticle->Margin = System::Windows::Forms::Padding(2);
			   this->bAnnulerAjoutArticle->Name = L"bAnnulerAjoutArticle";
			   this->bAnnulerAjoutArticle->Size = System::Drawing::Size(257, 72);
			   this->bAnnulerAjoutArticle->TabIndex = 10;
			   this->bAnnulerAjoutArticle->Text = L"Annuler";
			   this->bAnnulerAjoutArticle->UseVisualStyleBackColor = false;
			   this->bAnnulerAjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::bAnnulerAjoutArticle_Click);
			   // 
			   // ValiderArticle
			   // 
			   this->ValiderArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->ValiderArticle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			   this->ValiderArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ValiderArticle->Location = System::Drawing::Point(2, 2);
			   this->ValiderArticle->Margin = System::Windows::Forms::Padding(2);
			   this->ValiderArticle->Name = L"ValiderArticle";
			   this->ValiderArticle->Size = System::Drawing::Size(256, 72);
			   this->ValiderArticle->TabIndex = 9;
			   this->ValiderArticle->Text = L"Valider";
			   this->ValiderArticle->UseVisualStyleBackColor = false;
			   this->ValiderArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::ValiderArticle_Click);
			   // 
			   // textBox_PrixHTArticle
			   // 
			   this->textBox_PrixHTArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_PrixHTArticle->Location = System::Drawing::Point(400, 649);
			   this->textBox_PrixHTArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_PrixHTArticle->Name = L"textBox_PrixHTArticle";
			   this->textBox_PrixHTArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_PrixHTArticle->TabIndex = 8;
			   // 
			   // textBox_ReaproArticle
			   // 
			   this->textBox_ReaproArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_ReaproArticle->Location = System::Drawing::Point(400, 496);
			   this->textBox_ReaproArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_ReaproArticle->Name = L"textBox_ReaproArticle";
			   this->textBox_ReaproArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_ReaproArticle->TabIndex = 6;
			   // 
			   // PrixHTArticle
			   // 
			   this->PrixHTArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->PrixHTArticle->AutoSize = true;
			   this->PrixHTArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->PrixHTArticle->Location = System::Drawing::Point(312, 653);
			   this->PrixHTArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->PrixHTArticle->Name = L"PrixHTArticle";
			   this->PrixHTArticle->Size = System::Drawing::Size(84, 26);
			   this->PrixHTArticle->TabIndex = 13;
			   this->PrixHTArticle->Text = L"Prix HT";
			   this->PrixHTArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // ReaproArticle
			   // 
			   this->ReaproArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->ReaproArticle->AutoSize = true;
			   this->ReaproArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->ReaproArticle->Location = System::Drawing::Point(181, 487);
			   this->ReaproArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->ReaproArticle->Name = L"ReaproArticle";
			   this->ReaproArticle->Size = System::Drawing::Size(215, 52);
			   this->ReaproArticle->TabIndex = 16;
			   this->ReaproArticle->Text = L" Seuil de reapprovisionnement";
			   this->ReaproArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_StockArticle
			   // 
			   this->textBox_StockArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_StockArticle->Location = System::Drawing::Point(400, 419);
			   this->textBox_StockArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_StockArticle->Name = L"textBox_StockArticle";
			   this->textBox_StockArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_StockArticle->TabIndex = 5;
			   // 
			   // StockArticle
			   // 
			   this->StockArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->StockArticle->AutoSize = true;
			   this->StockArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->StockArticle->Location = System::Drawing::Point(215, 423);
			   this->StockArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->StockArticle->Name = L"StockArticle";
			   this->StockArticle->Size = System::Drawing::Size(181, 26);
			   this->StockArticle->TabIndex = 15;
			   this->StockArticle->Text = L"Quantite en stock";
			   this->StockArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_TvaArticle
			   // 
			   this->textBox_TvaArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_TvaArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_TvaArticle->Location = System::Drawing::Point(400, 574);
			   this->textBox_TvaArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_TvaArticle->Name = L"textBox_TvaArticle";
			   this->textBox_TvaArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_TvaArticle->TabIndex = 7;
			   // 
			   // TvaArticle
			   // 
			   this->TvaArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->TvaArticle->AutoSize = true;
			   this->TvaArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->TvaArticle->Location = System::Drawing::Point(342, 579);
			   this->TvaArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->TvaArticle->Name = L"TvaArticle";
			   this->TvaArticle->Size = System::Drawing::Size(54, 26);
			   this->TvaArticle->TabIndex = 22;
			   this->TvaArticle->Text = L"TVA";
			   this->TvaArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_NatureArticle
			   // 
			   this->textBox_NatureArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_NatureArticle->Location = System::Drawing::Point(400, 259);
			   this->textBox_NatureArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_NatureArticle->Name = L"textBox_NatureArticle";
			   this->textBox_NatureArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_NatureArticle->TabIndex = 3;
			   // 
			   // textBox_NomArticle
			   // 
			   this->textBox_NomArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_NomArticle->Location = System::Drawing::Point(400, 179);
			   this->textBox_NomArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_NomArticle->Name = L"textBox_NomArticle";
			   this->textBox_NomArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_NomArticle->TabIndex = 2;
			   // 
			   // ReferenceArticle
			   // 
			   this->ReferenceArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->ReferenceArticle->AutoSize = true;
			   this->ReferenceArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->ReferenceArticle->Location = System::Drawing::Point(284, 106);
			   this->ReferenceArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->ReferenceArticle->Name = L"ReferenceArticle";
			   this->ReferenceArticle->Size = System::Drawing::Size(112, 26);
			   this->ReferenceArticle->TabIndex = 19;
			   this->ReferenceArticle->Text = L"Reference";
			   this->ReferenceArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // textBox_RefArticle
			   // 
			   this->textBox_RefArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_RefArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox_RefArticle->Location = System::Drawing::Point(400, 101);
			   this->textBox_RefArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_RefArticle->Name = L"textBox_RefArticle";
			   this->textBox_RefArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_RefArticle->TabIndex = 1;
			   // 
			   // textBox_CouleurArticle
			   // 
			   this->textBox_CouleurArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox_CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				   System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			   this->textBox_CouleurArticle->Location = System::Drawing::Point(400, 341);
			   this->textBox_CouleurArticle->Margin = System::Windows::Forms::Padding(2);
			   this->textBox_CouleurArticle->Name = L"textBox_CouleurArticle";
			   this->textBox_CouleurArticle->Size = System::Drawing::Size(523, 35);
			   this->textBox_CouleurArticle->TabIndex = 4;

			   // 
			   // CouleurArticle
			   // 
			   this->CouleurArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->CouleurArticle->AutoSize = true;
			   this->CouleurArticle->BackColor = System::Drawing::SystemColors::Control;
			   this->CouleurArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->CouleurArticle->Location = System::Drawing::Point(308, 345);
			   this->CouleurArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->CouleurArticle->Name = L"CouleurArticle";
			   this->CouleurArticle->Size = System::Drawing::Size(88, 26);
			   this->CouleurArticle->TabIndex = 7;
			   this->CouleurArticle->Text = L"Couleur";
			   this->CouleurArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			   // 
			   // NomArticle
			   // 
			   this->NomArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->NomArticle->AutoSize = true;
			   this->NomArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NomArticle->Location = System::Drawing::Point(331, 184);
			   this->NomArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->NomArticle->Name = L"NomArticle";
			   this->NomArticle->Size = System::Drawing::Size(65, 26);
			   this->NomArticle->TabIndex = 5;
			   this->NomArticle->Text = L"Nom ";
			   this->NomArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // NatureArticle
			   // 
			   this->NatureArticle->Anchor = System::Windows::Forms::AnchorStyles::Right;
			   this->NatureArticle->AutoSize = true;
			   this->NatureArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->NatureArticle->Location = System::Drawing::Point(319, 264);
			   this->NatureArticle->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			   this->NatureArticle->Name = L"NatureArticle";
			   this->NatureArticle->Size = System::Drawing::Size(77, 26);
			   this->NatureArticle->TabIndex = 6;
			   this->NatureArticle->Text = L"Nature";
			   this->NatureArticle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;

			   // 
			   // AjouterArticle_tableLayoutPanel1
			   // 
			   this->AjouterArticle_tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->AjouterArticle_tableLayoutPanel1->AutoScroll = true;
			   this->AjouterArticle_tableLayoutPanel1->ColumnCount = 4;
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   116)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   282)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   527)));
			   this->AjouterArticle_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				   483)));
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NatureArticle, 1, 4);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->NomArticle, 1, 3);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->CouleurArticle, 1, 5);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_CouleurArticle, 2, 5);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->textBox_RefArticle, 2, 2);
			   this->AjouterArticle_tableLayoutPanel1->Controls->Add(this->ReferenceArticle, 1, 2);
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
			   this->AjouterArticle_tableLayoutPanel1->Location = System::Drawing::Point(11, 11);
			   this->AjouterArticle_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			   this->AjouterArticle_tableLayoutPanel1->Name = L"AjouterArticle_tableLayoutPanel1";
			   this->AjouterArticle_tableLayoutPanel1->RowCount = 13;
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   53)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   26)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   80)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   76)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   84)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   79)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   77)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   77)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   80)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   69)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   56)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   82)));
			   this->AjouterArticle_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				   8)));
			   this->AjouterArticle_tableLayoutPanel1->Size = System::Drawing::Size(1242, 963);
			   this->AjouterArticle_tableLayoutPanel1->TabIndex = 2;
			   // 
			   // AjouterArticle
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1264, 985);
			   this->Controls->Add(this->AjouterArticle_tableLayoutPanel1);
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->MaximumSize = System::Drawing::Size(1280, 1024);
			   this->MinimumSize = System::Drawing::Size(1280, 1024);
			   this->Name = L"AjouterArticle";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"AjouterArticle";
			   this->tableLayoutPanel2->ResumeLayout(false);
			   this->AjouterArticle_tableLayoutPanel1->ResumeLayout(false);
			   this->AjouterArticle_tableLayoutPanel1->PerformLayout();
			   this->ResumeLayout(false);

		   }
#pragma endregion
	private: System::Void bAnnulerAjoutArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
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
		if (textBox_TvaArticle->Text->Contains(".") ||
			textBox_PrixHTArticle->Text->Contains(".")) {
			MessageBox::Show("Les points ne sont autorisés dans aucun champ.", "Erreur de saisie", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			a->setRefArticle(int::Parse(this->textBox_RefArticle->Text));
			a->setNom(this->textBox_NomArticle->Text);
			a->setNature(this->textBox_NatureArticle->Text);
			a->setCouleur(this->textBox_CouleurArticle->Text);
			a->setPrixHT(float::Parse(this->textBox_PrixHTArticle->Text));
			a->setStock(int::Parse(this->textBox_StockArticle->Text));
			a->setQuantiteReapprovisionnement(int::Parse(this->textBox_ReaproArticle->Text));
			a->setTauxTVA(float::Parse(this->textBox_TvaArticle->Text));

			ok = true;
			this->Close();
		}
	}
	};
}