#pragma once
#include "CommandeRecap.h"
#include "Adresse.h"
#include "ServiceTypeAdresse.h"
#include "ServiceAdresse.h"



namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeFActuration
	/// </summary>
	public ref class CommandeFacturation : public System::Windows::Forms::Form {
		Client^ c;
		Adresse^ ad;
		ServiceAdresse^ sa = gcnew ServiceAdresse();
		
	private: System::Windows::Forms::Button^ bSupprimer;
		   TypeAdresse^ ta = gcnew TypeAdresse();
		   Commande^ cmd = gcnew Commande();
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Button^ bAjouter;
	private:
		int idClient;
		int idAdresseLivraison;
	public:
		CommandeFacturation(int idClient,int idAdresseLivraison) {
			InitializeComponent();
			DataGridViewTextBoxColumn^ dgvtbc1 = gcnew DataGridViewTextBoxColumn();
			dgvtbc1->Name = "ID_Client";
			dgvtbc1->Visible = false;
			this->CatalogueFacturation->Columns->Add(dgvtbc1);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Id_Adresse";
			dgvtbc2->Visible = false;
			this->CatalogueFacturation->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "Type_Adresse";
			dgvtbc3->Visible = false;
			this->CatalogueFacturation->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Numéro de la rue";
			this->CatalogueFacturation->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Nom de la rue";
			this->CatalogueFacturation->Columns->Add(dgvtbc5);

			DataGridViewTextBoxColumn^ dgvtbc6 = gcnew DataGridViewTextBoxColumn();
			dgvtbc6->Name = "Complement d'adresse";
			this->CatalogueFacturation->Columns->Add(dgvtbc6);

			DataGridViewTextBoxColumn^ dgvtbc7 = gcnew DataGridViewTextBoxColumn();
			dgvtbc7->Name = "Code postal";
			this->CatalogueFacturation->Columns->Add(dgvtbc7);

			DataGridViewTextBoxColumn^ dgvtbc8 = gcnew DataGridViewTextBoxColumn();
			dgvtbc8->Name = "Ville";
			this->CatalogueFacturation->Columns->Add(dgvtbc8);
			this->idClient = idClient;
			this->idAdresseLivraison = idAdresseLivraison;

			ta->getClient()->setIdClient(idClient);
			cmd->getLivraison()->setIdAdresse(idAdresseLivraison);
			if (ta != nullptr) {
				this->textBox_NumRue->Text = ta->getAdresse()->getNumRue();
				this->textBox_NomRue->Text = ta->getAdresse()->getNomRue();
				this->textBox_NomVille->Text = ta->getAdresse()->getNomVille();
				this->textBox_CodePostal->Text = ta->getAdresse()->getCodePostal();
				this->textBox_ComplementAdresse->Text = ta->getAdresse()->getComplementAdr();
			}

			this->Reload();
		}

		ServiceTypeAdresse^ sta = gcnew ServiceTypeAdresse();

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~CommandeFacturation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	protected:
	private: System::Windows::Forms::Label^ NumRue;
	private: System::Windows::Forms::Label^ NomRue;
	private: System::Windows::Forms::Label^ NomVille;
	private: System::Windows::Forms::Label^ CodePostal;
	private: System::Windows::Forms::Label^ ComplementAdresse;
	private: System::Windows::Forms::TextBox^ textBox_NumRue;
	private: System::Windows::Forms::TextBox^ textBox_NomRue;
	private: System::Windows::Forms::TextBox^ textBox_NomVille;
	private: System::Windows::Forms::TextBox^ textBox_CodePostal;
	private: System::Windows::Forms::TextBox^ textBox_ComplementAdresse;
	private: System::Windows::Forms::DataGridView^ CatalogueFacturation;
	private: System::Windows::Forms::Button^ bRetour;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::Label^ AdrExistant;

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
			this->CodePostal = (gcnew System::Windows::Forms::Label());
			this->ComplementAdresse = (gcnew System::Windows::Forms::Label());
			this->textBox_NomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ComplementAdresse = (gcnew System::Windows::Forms::TextBox());
			this->NumRue = (gcnew System::Windows::Forms::Label());
			this->textBox_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->NomVille = (gcnew System::Windows::Forms::Label());
			this->NomRue = (gcnew System::Windows::Forms::Label());
			this->textBox_NomVille = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CodePostal = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->CatalogueFacturation = (gcnew System::Windows::Forms::DataGridView());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->AdrExistant = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->bSupprimer = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueFacturation))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->CodePostal, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->ComplementAdresse, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomRue, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox_ComplementAdresse, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->NumRue, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NumRue, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->NomVille, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->NomRue, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomVille, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox_CodePostal, 0, 8);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel4, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel5, 0, 11);
			this->tableLayoutPanel2->Location = System::Drawing::Point(185, 71);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 12;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(769, 828);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// CodePostal
			// 
			this->CodePostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CodePostal->AutoSize = true;
			this->CodePostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CodePostal->Location = System::Drawing::Point(3, 420);
			this->CodePostal->Name = L"CodePostal";
			this->CodePostal->Size = System::Drawing::Size(763, 60);
			this->CodePostal->TabIndex = 3;
			this->CodePostal->Text = L"Code Postal";
			this->CodePostal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ComplementAdresse
			// 
			this->ComplementAdresse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ComplementAdresse->AutoSize = true;
			this->ComplementAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ComplementAdresse->Location = System::Drawing::Point(3, 540);
			this->ComplementAdresse->Name = L"ComplementAdresse";
			this->ComplementAdresse->Size = System::Drawing::Size(763, 60);
			this->ComplementAdresse->TabIndex = 4;
			this->ComplementAdresse->Text = L"Complement d\'Adresse";
			this->ComplementAdresse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NomRue
			// 
			this->textBox_NomRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_NomRue->Location = System::Drawing::Point(3, 242);
			this->textBox_NomRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NomRue->Name = L"textBox_NomRue";
			this->textBox_NomRue->Size = System::Drawing::Size(763, 31);
			this->textBox_NomRue->TabIndex = 6;
			// 
			// textBox_ComplementAdresse
			// 
			this->textBox_ComplementAdresse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ComplementAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_ComplementAdresse->Location = System::Drawing::Point(3, 602);
			this->textBox_ComplementAdresse->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_ComplementAdresse->Name = L"textBox_ComplementAdresse";
			this->textBox_ComplementAdresse->Size = System::Drawing::Size(763, 31);
			this->textBox_ComplementAdresse->TabIndex = 9;
			// 
			// NumRue
			// 
			this->NumRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NumRue->AutoSize = true;
			this->NumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumRue->Location = System::Drawing::Point(3, 60);
			this->NumRue->Name = L"NumRue";
			this->NumRue->Size = System::Drawing::Size(763, 60);
			this->NumRue->TabIndex = 1;
			this->NumRue->Text = L"Numero Rue";
			this->NumRue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NumRue
			// 
			this->textBox_NumRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_NumRue->Location = System::Drawing::Point(3, 122);
			this->textBox_NumRue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NumRue->Name = L"textBox_NumRue";
			this->textBox_NumRue->Size = System::Drawing::Size(763, 31);
			this->textBox_NumRue->TabIndex = 5;
			// 
			// NomVille
			// 
			this->NomVille->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomVille->AutoSize = true;
			this->NomVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomVille->Location = System::Drawing::Point(3, 300);
			this->NomVille->Name = L"NomVille";
			this->NomVille->Size = System::Drawing::Size(763, 60);
			this->NomVille->TabIndex = 2;
			this->NomVille->Text = L"Nom Ville";
			this->NomVille->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NomRue
			// 
			this->NomRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomRue->AutoSize = true;
			this->NomRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomRue->Location = System::Drawing::Point(3, 180);
			this->NomRue->Name = L"NomRue";
			this->NomRue->Size = System::Drawing::Size(763, 60);
			this->NomRue->TabIndex = 0;
			this->NomRue->Text = L"Nom Rue";
			this->NomRue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NomVille
			// 
			this->textBox_NomVille->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomVille->Location = System::Drawing::Point(3, 362);
			this->textBox_NomVille->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_NomVille->Name = L"textBox_NomVille";
			this->textBox_NomVille->Size = System::Drawing::Size(763, 31);
			this->textBox_NomVille->TabIndex = 7;
			// 
			// textBox_CodePostal
			// 
			this->textBox_CodePostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_CodePostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_CodePostal->Location = System::Drawing::Point(3, 482);
			this->textBox_CodePostal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox_CodePostal->Name = L"textBox_CodePostal";
			this->textBox_CodePostal->Size = System::Drawing::Size(763, 31);
			this->textBox_CodePostal->TabIndex = 8;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 2;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel4->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel4->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 2;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(267, 52);
			this->tableLayoutPanel4->TabIndex = 10;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 2;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				388)));
			this->tableLayoutPanel5->Controls->Add(this->bAjouter, 0, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(4, 664);
			this->tableLayoutPanel5->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(761, 160);
			this->tableLayoutPanel5->TabIndex = 11;
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(4, 4);
			this->bAjouter->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(365, 152);
			this->bAjouter->TabIndex = 0;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &CommandeFacturation::bAjouter_Click);
			// 
			// CatalogueFacturation
			// 
			this->CatalogueFacturation->AllowUserToAddRows = false;
			this->CatalogueFacturation->AllowUserToDeleteRows = false;
			this->CatalogueFacturation->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueFacturation->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueFacturation->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueFacturation->Location = System::Drawing::Point(960, 71);
			this->CatalogueFacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CatalogueFacturation->Name = L"CatalogueFacturation";
			this->CatalogueFacturation->RowTemplate->Height = 24;
			this->CatalogueFacturation->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CatalogueFacturation->Size = System::Drawing::Size(705, 828);
			this->CatalogueFacturation->TabIndex = 1;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(3, 2);
			this->bRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(176, 65);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &CommandeFacturation::bRetour_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.06841F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80.93159F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				710)));
			this->tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->CatalogueFacturation, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->AdrExistant, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 2, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 6);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.670182F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 92.32982F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1668, 1042);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// AdrExistant
			// 
			this->AdrExistant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AdrExistant->AutoSize = true;
			this->AdrExistant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdrExistant->Location = System::Drawing::Point(960, 0);
			this->AdrExistant->Name = L"AdrExistant";
			this->AdrExistant->Size = System::Drawing::Size(705, 69);
			this->AdrExistant->TabIndex = 4;
			this->AdrExistant->Text = L"Adresses de Facturation";
			this->AdrExistant->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 1, 0);
			this->tableLayoutPanel3->Controls->Add(this->bSupprimer, 0, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(960, 903);
			this->tableLayoutPanel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(705, 86);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(355, 2);
			this->bSuivant->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(347, 82);
			this->bSuivant->TabIndex = 0;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &CommandeFacturation::bSuivant_Click);
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(4, 4);
			this->bSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(344, 78);
			this->bSupprimer->TabIndex = 1;
			this->bSupprimer->Text = L"Supprimer";
			this->bSupprimer->UseVisualStyleBackColor = true;
			this->bSupprimer->Click += gcnew System::EventHandler(this, &CommandeFacturation::bSupprimer_Click);
			// 
			// CommandeFacturation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 1061);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1251);
			this->MinimumSize = System::Drawing::Size(1701, 1030);
			this->Name = L"CommandeFacturation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adresse de Facturation";
			this->Load += gcnew System::EventHandler(this, &CommandeFacturation::CommandeFacturation_Load);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueFacturation))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CatalogueFacturation->SelectedRows->Count == 1) {
			TypeAdresse^ adressefacturation = (TypeAdresse^)this->CatalogueFacturation->SelectedRows[0]->Tag;
			CommandeRecap^ nouvellecommande = gcnew CommandeRecap(idClient, idAdresseLivraison, adressefacturation->getAdresse()->getIdAdresse());
			nouvellecommande->ShowDialog();
		}
	}

	private: void Reload() {
		// Maintenant, appelez la fonction avec l'objet créé
		List<TypeAdresse^>^ facturation = sta->SelectAllFacturationAdresse(ta);

		this->CatalogueFacturation->Rows->Clear();
		for each (TypeAdresse ^ ta in facturation) {
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ dgvc1 = gcnew DataGridViewTextBoxCell();
			dgvc1->Value = Convert::ToString(ta->getClient()->getIdClient());
			dgvr->Cells->Add(dgvc1);

			DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
			dgvc2->Value = Convert::ToString(ta->getAdresse()->getIdAdresse());
			dgvr->Cells->Add(dgvc2);

			DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
			dgvc3->Value = ta->getTypeAdresse();
			dgvr->Cells->Add(dgvc3);

			DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
			dgvc4->Value = ta->getAdresse()->getNumRue();
			dgvr->Cells->Add(dgvc4);

			DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
			dgvc5->Value = ta->getAdresse()->getNomRue();
			dgvr->Cells->Add(dgvc5);

			DataGridViewTextBoxCell^ dgvc6 = gcnew DataGridViewTextBoxCell();
			dgvc6->Value = ta->getAdresse()->getComplementAdr();
			dgvr->Cells->Add(dgvc6);

			DataGridViewTextBoxCell^ dgvc7 = gcnew DataGridViewTextBoxCell();
			dgvc7->Value = ta->getAdresse()->getCodePostal();
			dgvr->Cells->Add(dgvc7);

			DataGridViewTextBoxCell^ dgvc8 = gcnew DataGridViewTextBoxCell();
			dgvc8->Value = ta->getAdresse()->getNomVille();
			dgvr->Cells->Add(dgvc8);

			dgvr->Tag = ta;
			this->CatalogueFacturation->Rows->Add(dgvr);
		}
	};
	private: System::Void CommandeFacturation_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Reload();
	}
	private: System::Void bSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueFacturation->SelectedRows->Count > 0) {
			int rowIndex = CatalogueFacturation->SelectedRows[0]->Index;
			int idadresse = Convert::ToInt32(CatalogueFacturation->Rows[rowIndex]->Cells["Id_Adresse"]->Value);

			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer cet adresse ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				Adresse^ adressetodelete = gcnew Adresse();
				adressetodelete->setIdAdresse(idadresse);
				sa->DeleteAdresse(adressetodelete);
				this->Reload();
				MessageBox::Show("Adresse supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void bAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Adresse^ nouvelleadresse = gcnew Adresse();
		TypeAdresse^ nouvelleadrFacturation = gcnew TypeAdresse();
		nouvelleadresse->setNumRue(this->textBox_NumRue->Text);
		nouvelleadresse->setNomRue(this->textBox_NomRue->Text);
		nouvelleadresse->setNomVille(this->textBox_NomVille->Text);
		nouvelleadresse->setCodePostal(this->textBox_CodePostal->Text);
		nouvelleadresse->setComplementAdr(this->textBox_ComplementAdresse->Text);
		sa->InsertAdresse(nouvelleadresse);

		String^ typeadresse = "Facturation";
		nouvelleadrFacturation->setTypeAdresse(typeadresse);
		nouvelleadrFacturation->setAdresse(nouvelleadresse);
		nouvelleadrFacturation->getAdresse()->getIdAdresse();
		nouvelleadrFacturation->getClient()->setIdClient(this->idClient);

		if (String::IsNullOrWhiteSpace(this->textBox_NumRue->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomRue->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomVille->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_CodePostal->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_ComplementAdresse->Text)) {
			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (nouvelleadrFacturation) {
			sta->InsertTypeAdresse(nouvelleadrFacturation);
			this->Reload();
		}
	}
	};
}
