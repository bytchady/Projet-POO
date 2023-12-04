#pragma once
#include "Personnel.h"
#include "ServicePersonnel.h"

using namespace NS_Personnel;

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterPersonnel
	/// </summary>
	public ref class AjouterPersonnel : public System::Windows::Forms::Form
	{
	public:
		AjouterPersonnel(void)
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
		~AjouterPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
















	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Label^ NomPersonnel;
	private: System::Windows::Forms::Label^ PrenomPersonnel;





	private: System::Windows::Forms::TextBox^ textBox_PrenomPersonnel;
	private: System::Windows::Forms::Label^ NumRuePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_NumRuePersonnel;




	private: System::Windows::Forms::Label^ ZipCodePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_ZipCodePersonnel;


	private: System::Windows::Forms::Label^ VillePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_VillePersonnel;


	private: System::Windows::Forms::Label^ EmbauchePersonnel;
	private: System::Windows::Forms::TextBox^ textBox_EmbauchePersonnel;
	private: System::Windows::Forms::Label^ IdSuperieur;
	private: System::Windows::Forms::TextBox^ textBox_IdSuperieur;




	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::TextBox^ textBox_NomPersonnel;

	private: System::Windows::Forms::Label^ label8;
	protected:









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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PrenomPersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_PrenomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->NumRuePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_NumRuePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->ZipCodePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_ZipCodePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->VillePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_VillePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->EmbauchePersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_EmbauchePersonnel = (gcnew System::Windows::Forms::TextBox());
			this->IdSuperieur = (gcnew System::Windows::Forms::Label());
			this->textBox_IdSuperieur = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->textBox_NomPersonnel = (gcnew System::Windows::Forms::TextBox());
			this->NomPersonnel = (gcnew System::Windows::Forms::Label());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.61495F)));
			this->tableLayoutPanel2->Controls->Add(this->PrenomPersonnel, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox_PrenomPersonnel, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->NumRuePersonnel, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NumRuePersonnel, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->ZipCodePersonnel, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox_ZipCodePersonnel, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->VillePersonnel, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox_VillePersonnel, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->EmbauchePersonnel, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->textBox_EmbauchePersonnel, 0, 11);
			this->tableLayoutPanel2->Controls->Add(this->IdSuperieur, 0, 12);
			this->tableLayoutPanel2->Controls->Add(this->textBox_IdSuperieur, 0, 13);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 14);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomPersonnel, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->NomPersonnel, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(288, 111);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 15;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 64.16185F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35.83815F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 62)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 76)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 12)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 41)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 42)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 61)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 74)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 89)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(709, 831);
			this->tableLayoutPanel2->TabIndex = 2;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &AjouterPersonnel::tableLayoutPanel2_Paint);
			// 
			// PrenomPersonnel
			// 
			this->PrenomPersonnel->AutoSize = true;
			this->PrenomPersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PrenomPersonnel->Location = System::Drawing::Point(2, 91);
			this->PrenomPersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PrenomPersonnel->Name = L"PrenomPersonnel";
			this->PrenomPersonnel->Size = System::Drawing::Size(705, 31);
			this->PrenomPersonnel->TabIndex = 3;
			this->PrenomPersonnel->Text = L"Prenom";
			// 
			// textBox_PrenomPersonnel
			// 
			this->textBox_PrenomPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_PrenomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_PrenomPersonnel->Location = System::Drawing::Point(2, 124);
			this->textBox_PrenomPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_PrenomPersonnel->Name = L"textBox_PrenomPersonnel";
			this->textBox_PrenomPersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_PrenomPersonnel->TabIndex = 11;
			// 
			// NumRuePersonnel
			// 
			this->NumRuePersonnel->AutoSize = true;
			this->NumRuePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NumRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->NumRuePersonnel->Location = System::Drawing::Point(2, 233);
			this->NumRuePersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NumRuePersonnel->Name = L"NumRuePersonnel";
			this->NumRuePersonnel->Size = System::Drawing::Size(705, 31);
			this->NumRuePersonnel->TabIndex = 4;
			this->NumRuePersonnel->Text = L"Numero de la rue ";
			this->NumRuePersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label3_Click);
			// 
			// textBox_NumRuePersonnel
			// 
			this->textBox_NumRuePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumRuePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NumRuePersonnel->Location = System::Drawing::Point(2, 266);
			this->textBox_NumRuePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_NumRuePersonnel->Name = L"textBox_NumRuePersonnel";
			this->textBox_NumRuePersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_NumRuePersonnel->TabIndex = 12;
			// 
			// ZipCodePersonnel
			// 
			this->ZipCodePersonnel->AutoSize = true;
			this->ZipCodePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->ZipCodePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ZipCodePersonnel->Location = System::Drawing::Point(2, 314);
			this->ZipCodePersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->ZipCodePersonnel->Name = L"ZipCodePersonnel";
			this->ZipCodePersonnel->Size = System::Drawing::Size(705, 31);
			this->ZipCodePersonnel->TabIndex = 5;
			this->ZipCodePersonnel->Text = L"Code postal";
			this->ZipCodePersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label4_Click);
			// 
			// textBox_ZipCodePersonnel
			// 
			this->textBox_ZipCodePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ZipCodePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_ZipCodePersonnel->Location = System::Drawing::Point(2, 347);
			this->textBox_ZipCodePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_ZipCodePersonnel->Name = L"textBox_ZipCodePersonnel";
			this->textBox_ZipCodePersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_ZipCodePersonnel->TabIndex = 13;
			this->textBox_ZipCodePersonnel->TextChanged += gcnew System::EventHandler(this, &AjouterPersonnel::textBox4_TextChanged);
			// 
			// VillePersonnel
			// 
			this->VillePersonnel->AutoSize = true;
			this->VillePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->VillePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->VillePersonnel->Location = System::Drawing::Point(2, 414);
			this->VillePersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->VillePersonnel->Name = L"VillePersonnel";
			this->VillePersonnel->Size = System::Drawing::Size(705, 31);
			this->VillePersonnel->TabIndex = 6;
			this->VillePersonnel->Text = L"Ville";
			// 
			// textBox_VillePersonnel
			// 
			this->textBox_VillePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_VillePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_VillePersonnel->Location = System::Drawing::Point(2, 447);
			this->textBox_VillePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_VillePersonnel->Name = L"textBox_VillePersonnel";
			this->textBox_VillePersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_VillePersonnel->TabIndex = 14;
			// 
			// EmbauchePersonnel
			// 
			this->EmbauchePersonnel->AutoSize = true;
			this->EmbauchePersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->EmbauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->EmbauchePersonnel->Location = System::Drawing::Point(2, 517);
			this->EmbauchePersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->EmbauchePersonnel->Name = L"EmbauchePersonnel";
			this->EmbauchePersonnel->Size = System::Drawing::Size(705, 31);
			this->EmbauchePersonnel->TabIndex = 7;
			this->EmbauchePersonnel->Text = L"Date d\'embauche";
			// 
			// textBox_EmbauchePersonnel
			// 
			this->textBox_EmbauchePersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_EmbauchePersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_EmbauchePersonnel->Location = System::Drawing::Point(2, 550);
			this->textBox_EmbauchePersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_EmbauchePersonnel->Name = L"textBox_EmbauchePersonnel";
			this->textBox_EmbauchePersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_EmbauchePersonnel->TabIndex = 15;
			// 
			// IdSuperieur
			// 
			this->IdSuperieur->AutoSize = true;
			this->IdSuperieur->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->IdSuperieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IdSuperieur->Location = System::Drawing::Point(2, 636);
			this->IdSuperieur->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->IdSuperieur->Name = L"IdSuperieur";
			this->IdSuperieur->Size = System::Drawing::Size(705, 31);
			this->IdSuperieur->TabIndex = 8;
			this->IdSuperieur->Text = L"ID du supérieur";
			// 
			// textBox_IdSuperieur
			// 
			this->textBox_IdSuperieur->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_IdSuperieur->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_IdSuperieur->Location = System::Drawing::Point(2, 669);
			this->textBox_IdSuperieur->Margin = System::Windows::Forms::Padding(2);
			this->textBox_IdSuperieur->Name = L"textBox_IdSuperieur";
			this->textBox_IdSuperieur->Size = System::Drawing::Size(705, 38);
			this->textBox_IdSuperieur->TabIndex = 16;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->bAnnuler, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->bAjouter, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 744);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(703, 84);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(354, 3);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(346, 78);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterPersonnel::bAnnuler_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(3, 3);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(345, 78);
			this->bAjouter->TabIndex = 0;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &AjouterPersonnel::bValider_Click);
			// 
			// textBox_NomPersonnel
			// 
			this->textBox_NomPersonnel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox_NomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomPersonnel->Location = System::Drawing::Point(2, 41);
			this->textBox_NomPersonnel->Margin = System::Windows::Forms::Padding(2);
			this->textBox_NomPersonnel->Name = L"textBox_NomPersonnel";
			this->textBox_NomPersonnel->Size = System::Drawing::Size(705, 38);
			this->textBox_NomPersonnel->TabIndex = 10;
			this->textBox_NomPersonnel->TextChanged += gcnew System::EventHandler(this, &AjouterPersonnel::textBox_NomPersonnel_TextChanged);
			// 
			// NomPersonnel
			// 
			this->NomPersonnel->AutoSize = true;
			this->NomPersonnel->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->NomPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomPersonnel->Location = System::Drawing::Point(2, 8);
			this->NomPersonnel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomPersonnel->Name = L"NomPersonnel";
			this->NomPersonnel->Size = System::Drawing::Size(705, 31);
			this->NomPersonnel->TabIndex = 2;
			this->NomPersonnel->Text = L"Nom";
			this->NomPersonnel->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label1_Click);
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Dock = System::Windows::Forms::DockStyle::Right;
			this->vScrollBar1->Location = System::Drawing::Point(1242, 0);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(22, 985);
			this->vScrollBar1->TabIndex = 3;
			this->vScrollBar1->Value = 50;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &AjouterPersonnel::vScrollBar1_Scroll);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(399, 26);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(468, 55);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Ajouter un personnel";
			this->label8->Click += gcnew System::EventHandler(this, &AjouterPersonnel::label8_Click);
			// 
			// AjouterPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"AjouterPersonnel";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ajouter un personnel";
			this->Load += gcnew System::EventHandler(this, &AjouterPersonnel::AjouterPersonnel_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AjouterPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bValider_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel;
		personnel->setNom_Personnel(this->textBox_NomPersonnel->Text);
		personnel->setPrenom_Personnel(this->textBox_PrenomPersonnel->Text);
		Adresse->setNum_Rue(this->textBox_NumRuePersonnel->Text);
		Adresse->setNom_Rue(this->textBox_NomRuePersonnel->Text);
		Adresse->setCode_Postal(this->textBox_ZipCodePersonnel->Text);
		personnel->setCouleur(this->textBox_CouleurArticle->Text);
		personnel->setDate_Embauche(datetime(::Parse(this->textBox_PrixHTArticle->Text)));
		personnel->setStock(int::Parse(this->textBox_StockArticle->Text));
		personnelk->setQuantiteReapprovisionnement(int::Parse(this->textBox_ReaproArticle->Text));
	}
private: System::Void textBox_NomPersonnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}