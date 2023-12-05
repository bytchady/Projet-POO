#pragma once
#include "Client.h"
#include "ServiceClient.h"

using namespace NS_Client;
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterClient
	/// </summary>
	public ref class AjouterClient : public System::Windows::Forms::Form
	{
	public:
		AjouterClient(void)
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
		~AjouterClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::Button^ bValider;
	private: System::Windows::Forms::Label^ NumClient;
	private: System::Windows::Forms::Label^ NomClient;
	private: System::Windows::Forms::Label^ PrenomClient;
	private: System::Windows::Forms::Label^ NaissanceClient;
	private: System::Windows::Forms::TextBox^ textBox_NomClient;
	private: System::Windows::Forms::TextBox^ textBox_NumClient;
	private: System::Windows::Forms::TextBox^ textBox_PrenomClient;
	private: System::Windows::Forms::TextBox^ textBox_NaissanceClient;
	private: System::Windows::Forms::Label^ ResultatAjouterClient;









	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->bValider = (gcnew System::Windows::Forms::Button());
			this->NumClient = (gcnew System::Windows::Forms::Label());
			this->NomClient = (gcnew System::Windows::Forms::Label());
			this->PrenomClient = (gcnew System::Windows::Forms::Label());
			this->NaissanceClient = (gcnew System::Windows::Forms::Label());
			this->textBox_PrenomClient = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NaissanceClient = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NumClient = (gcnew System::Windows::Forms::TextBox());
			this->ResultatAjouterClient = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				155)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				408)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				90.81481F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				9.185185F)));
			this->tableLayoutPanel1->Controls->Add(this->bAnnuler, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bValider, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->NumClient, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->NomClient, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->PrenomClient, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->NaissanceClient, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox_PrenomClient, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox_NaissanceClient, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->textBox_NomClient, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox_NumClient, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->ResultatAjouterClient, 2, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 5);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1238, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(3, 3);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(149, 59);
			this->bAnnuler->TabIndex = 0;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterClient::bAnnuler_Click);
			// 
			// bValider
			// 
			this->bValider->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bValider->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bValider->Location = System::Drawing::Point(3, 263);
			this->bValider->Name = L"bValider";
			this->bValider->Size = System::Drawing::Size(149, 59);
			this->bValider->TabIndex = 1;
			this->bValider->Text = L"Valider";
			this->bValider->UseVisualStyleBackColor = true;
			this->bValider->Click += gcnew System::EventHandler(this, &AjouterClient::bValider_Click);
			// 
			// NumClient
			// 
			this->NumClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NumClient->AutoSize = true;
			this->NumClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumClient->Location = System::Drawing::Point(158, 130);
			this->NumClient->Name = L"NumClient";
			this->NumClient->Size = System::Drawing::Size(402, 65);
			this->NumClient->TabIndex = 2;
			this->NumClient->Text = L"Numero client";
			this->NumClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NomClient
			// 
			this->NomClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomClient->AutoSize = true;
			this->NomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomClient->Location = System::Drawing::Point(158, 195);
			this->NomClient->Name = L"NomClient";
			this->NomClient->Size = System::Drawing::Size(402, 65);
			this->NomClient->TabIndex = 3;
			this->NomClient->Text = L"Nom";
			this->NomClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PrenomClient
			// 
			this->PrenomClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->PrenomClient->AutoSize = true;
			this->PrenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PrenomClient->Location = System::Drawing::Point(158, 260);
			this->PrenomClient->Name = L"PrenomClient";
			this->PrenomClient->Size = System::Drawing::Size(402, 65);
			this->PrenomClient->TabIndex = 4;
			this->PrenomClient->Text = L"Prenom";
			this->PrenomClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NaissanceClient
			// 
			this->NaissanceClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NaissanceClient->AutoSize = true;
			this->NaissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NaissanceClient->Location = System::Drawing::Point(158, 325);
			this->NaissanceClient->Name = L"NaissanceClient";
			this->NaissanceClient->Size = System::Drawing::Size(402, 65);
			this->NaissanceClient->TabIndex = 5;
			this->NaissanceClient->Text = L"Date de naissance";
			this->NaissanceClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox_PrenomClient
			// 
			this->textBox_PrenomClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_PrenomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_PrenomClient->Location = System::Drawing::Point(566, 263);
			this->textBox_PrenomClient->Name = L"textBox_PrenomClient";
			this->textBox_PrenomClient->Size = System::Drawing::Size(606, 38);
			this->textBox_PrenomClient->TabIndex = 6;
			// 
			// textBox_NaissanceClient
			// 
			this->textBox_NaissanceClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NaissanceClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NaissanceClient->Location = System::Drawing::Point(566, 328);
			this->textBox_NaissanceClient->Name = L"textBox_NaissanceClient";
			this->textBox_NaissanceClient->Size = System::Drawing::Size(606, 38);
			this->textBox_NaissanceClient->TabIndex = 9;
			this->textBox_NaissanceClient->TextChanged += gcnew System::EventHandler(this, &AjouterClient::textBox_NaissanceClient_TextChanged);
			// 
			// textBox_NomClient
			// 
			this->textBox_NomClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomClient->Location = System::Drawing::Point(566, 198);
			this->textBox_NomClient->Name = L"textBox_NomClient";
			this->textBox_NomClient->Size = System::Drawing::Size(606, 38);
			this->textBox_NomClient->TabIndex = 7;
			this->textBox_NomClient->TextChanged += gcnew System::EventHandler(this, &AjouterClient::textBox_NomClient_TextChanged);
			// 
			// textBox_NumClient
			// 
			this->textBox_NumClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NumClient->Location = System::Drawing::Point(566, 133);
			this->textBox_NumClient->Name = L"textBox_NumClient";
			this->textBox_NumClient->Size = System::Drawing::Size(606, 38);
			this->textBox_NumClient->TabIndex = 8;
			// 
			// ResultatAjouterClient
			// 
			this->ResultatAjouterClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ResultatAjouterClient->AutoSize = true;
			this->ResultatAjouterClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ResultatAjouterClient->Location = System::Drawing::Point(566, 65);
			this->ResultatAjouterClient->Name = L"ResultatAjouterClient";
			this->ResultatAjouterClient->Size = System::Drawing::Size(606, 65);
			this->ResultatAjouterClient->TabIndex = 10;
			this->ResultatAjouterClient->Text = L"label1";
			this->ResultatAjouterClient->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ResultatAjouterClient->Click += gcnew System::EventHandler(this, &AjouterClient::ResulatAjouterClient_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(189, 253);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(8, 8);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(0, 0);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(0, 0);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// AjouterClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"AjouterClient";
			this->Text = L"Ajouter Client";
			this->Load += gcnew System::EventHandler(this, &AjouterClient::AjouterClient_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox_NomClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bValider_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->textBox_NumClient->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomClient->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_PrenomClient->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NaissanceClient->Text)){
			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		Client^ client = gcnew Client;
		client->setNumeroClient(Convert::ToString(this->textBox_NumClient->Text));
		client->setNomClient(Convert::ToString(this->textBox_NomClient->Text));
		client->setPrenomClient(Convert::ToString(this->textBox_PrenomClient->Text));
		client->setNaissanceClient(Convert::ToString(this->textBox_NaissanceClient->Text));

		//Verifer si le numero client existe deja dans la bdd
		ServiceClient^ serviceClient = gcnew ServiceClient();
		if (serviceClient->ClientExists(client->getNumeroClient())) {
			MessageBox::Show("Ce numéro existe déjà. Veuillez choisir un autre numéro client.", "Erreur de numéro client",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//Verifer l'ajout a ete effectuer
		if (serviceClient->InsertServiceClient(client)) {
			this->ResultatAjouterClient->Text = "Client ajouté avec succès";
		}
		else {
			this->ResultatAjouterClient->Text = "Erreur d'ajout du client";
		}
	}
private: System::Void AjouterClient_Load(System::Object^ sender, System::EventArgs^ e) {
	this->ResultatAjouterClient->Text = "";
}
private: System::Void textBox_NaissanceClient_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(this->textBox_NaissanceClient->Text)) {
		MessageBox::Show("Le Format de la date est yyyy/mm/dd", "Format de la cellule", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	};
}
private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void ResulatAjouterClient_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
