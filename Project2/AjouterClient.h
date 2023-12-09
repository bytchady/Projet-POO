#pragma once
#include "Client.h"
#include "ServiceClient.h"


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
		Client^ c;
		ServiceClient^ sc;
	public:
		AjouterClient(Client^ c)
		{
			InitializeComponent();
			this->c = c;
			this->textBox_NumClient->Text = c->getNumClient();
			this->textBox_NomClient->Text = c->getNomClient();
			this->textBox_PrenomClient->Text = c->getPrenomClient();
			if (c->getNaissanceClient() >= this->dtp_DateNaissance->MinDate &&
				c->getNaissanceClient() <= this->dtp_DateNaissance->MaxDate)
			{

				this->dtp_DateNaissance->Value = c->getNaissanceClient();

			}
			if (c->getIdClient() != 0) {
				this->bValider->Text = "Modifier";
			}

		}
		bool ok = false;

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


	private: System::Windows::Forms::DateTimePicker^ dtp_DateNaissance;










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
			this->textBox_NomClient = (gcnew System::Windows::Forms::TextBox());
			this->textBox_NumClient = (gcnew System::Windows::Forms::TextBox());
			this->dtp_DateNaissance = (gcnew System::Windows::Forms::DateTimePicker());
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
				116)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				306)));
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
			this->tableLayoutPanel1->Controls->Add(this->textBox_NomClient, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox_NumClient, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->dtp_DateNaissance, 2, 5);
			this->tableLayoutPanel1->Location = System::Drawing::Point(9, 4);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 10;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 53)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(928, 780);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(2, 2);
			this->bAnnuler->Margin = System::Windows::Forms::Padding(2);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(112, 49);
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
			this->bValider->Location = System::Drawing::Point(2, 214);
			this->bValider->Margin = System::Windows::Forms::Padding(2);
			this->bValider->Name = L"bValider";
			this->bValider->Size = System::Drawing::Size(112, 49);
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
			this->NumClient->Location = System::Drawing::Point(118, 106);
			this->NumClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NumClient->Name = L"NumClient";
			this->NumClient->Size = System::Drawing::Size(302, 53);
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
			this->NomClient->Location = System::Drawing::Point(118, 159);
			this->NomClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NomClient->Name = L"NomClient";
			this->NomClient->Size = System::Drawing::Size(302, 53);
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
			this->PrenomClient->Location = System::Drawing::Point(118, 212);
			this->PrenomClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PrenomClient->Name = L"PrenomClient";
			this->PrenomClient->Size = System::Drawing::Size(302, 53);
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
			this->NaissanceClient->Location = System::Drawing::Point(118, 265);
			this->NaissanceClient->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->NaissanceClient->Name = L"NaissanceClient";
			this->NaissanceClient->Size = System::Drawing::Size(302, 53);
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
			this->textBox_PrenomClient->Location = System::Drawing::Point(424, 214);
			this->textBox_PrenomClient->Margin = System::Windows::Forms::Padding(2);
			this->textBox_PrenomClient->Name = L"textBox_PrenomClient";
			this->textBox_PrenomClient->Size = System::Drawing::Size(455, 32);
			this->textBox_PrenomClient->TabIndex = 6;
			// 
			// textBox_NomClient
			// 
			this->textBox_NomClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomClient->Location = System::Drawing::Point(424, 161);
			this->textBox_NomClient->Margin = System::Windows::Forms::Padding(2);
			this->textBox_NomClient->Name = L"textBox_NomClient";
			this->textBox_NomClient->Size = System::Drawing::Size(455, 32);
			this->textBox_NomClient->TabIndex = 7;
			// 
			// textBox_NumClient
			// 
			this->textBox_NumClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NumClient->Location = System::Drawing::Point(424, 108);
			this->textBox_NumClient->Margin = System::Windows::Forms::Padding(2);
			this->textBox_NumClient->Name = L"textBox_NumClient";
			this->textBox_NumClient->Size = System::Drawing::Size(455, 32);
			this->textBox_NumClient->TabIndex = 8;
			// 
			// dtp_DateNaissance
			// 
			this->dtp_DateNaissance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dtp_DateNaissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtp_DateNaissance->Location = System::Drawing::Point(424, 267);
			this->dtp_DateNaissance->Margin = System::Windows::Forms::Padding(2);
			this->dtp_DateNaissance->Name = L"dtp_DateNaissance";
			this->dtp_DateNaissance->Size = System::Drawing::Size(455, 32);
			this->dtp_DateNaissance->TabIndex = 11;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(142, 206);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(6, 6);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(0, 0);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(0, 0);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// AjouterClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 862);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 844);
			this->Name = L"AjouterClient";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ajouter Client";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bValider_Click(System::Object^ sender, System::EventArgs^ e) {
		c->setNumClient(this->textBox_NumClient->Text);
		c->setNomClient(this->textBox_NomClient->Text);
		c->setPrenomClient(this->textBox_PrenomClient->Text);
		c->setNaissanceClient(this->dtp_DateNaissance->Value);

		if (String::IsNullOrWhiteSpace(this->textBox_NumClient->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_NomClient->Text) ||
			String::IsNullOrWhiteSpace(this->textBox_PrenomClient->Text) ||
			(this->dtp_DateNaissance->Value == DateTime::MinValue)) {
			MessageBox::Show("Veuillez remplir tous les champs.", "Champs obligatoires", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		ok = true;
		this->Close();
	}

private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
