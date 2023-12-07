#pragma once
#include "AjouterClient.h"
#include "Client.h"

namespace ProjectPOO {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using ProjectPOO::ModifierPersonnel;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class GestionClient : public System::Windows::Forms::Form
	{
	public:
		GestionClient(void)
		{
			InitializeComponent();
			this->Reload();
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Client;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NumClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NomClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrenomClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NaissanceClient;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PremierAchat;

	public:





		ServiceClient^ serviceclient = gcnew ServiceClient();
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bRetour;
	protected:


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bsupprimer;

	private: System::Windows::Forms::Button^ bmodifier;
	private: System::Windows::Forms::Button^ bajouter;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::DataGridView^ CatalogueClient;
	private: System::Windows::Forms::Label^ Titre;








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
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bsupprimer = (gcnew System::Windows::Forms::Button());
			this->bajouter = (gcnew System::Windows::Forms::Button());
			this->bmodifier = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CatalogueClient = (gcnew System::Windows::Forms::DataGridView());
			this->Titre = (gcnew System::Windows::Forms::Label());
			this->Id_Client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NumClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NomClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrenomClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->NaissanceClient = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PremierAchat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueClient))->BeginInit();
			this->SuspendLayout();
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(4, 4);
			this->bRetour->Margin = System::Windows::Forms::Padding(4);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(142, 64);
			this->bRetour->TabIndex = 1;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &GestionClient::bRetour_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				150)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				187)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				300)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				300)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				300)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				379)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1616, 72);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// bsupprimer
			// 
			this->bsupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bsupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsupprimer->Location = System::Drawing::Point(641, 4);
			this->bsupprimer->Margin = System::Windows::Forms::Padding(4);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(292, 64);
			this->bsupprimer->TabIndex = 4;
			this->bsupprimer->Text = L"Supprimer";
			this->bsupprimer->UseVisualStyleBackColor = true;
			this->bsupprimer->Click += gcnew System::EventHandler(this, &GestionClient::bsupprimer_Click);
			// 
			// bajouter
			// 
			this->bajouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bajouter->Location = System::Drawing::Point(941, 4);
			this->bajouter->Margin = System::Windows::Forms::Padding(4);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(292, 64);
			this->bajouter->TabIndex = 2;
			this->bajouter->Text = L"Ajouter";
			this->bajouter->UseVisualStyleBackColor = true;
			this->bajouter->Click += gcnew System::EventHandler(this, &GestionClient::bajouter_Click);
			// 
			// bmodifier
			// 
			this->bmodifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bmodifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmodifier->Location = System::Drawing::Point(341, 4);
			this->bmodifier->Margin = System::Windows::Forms::Padding(4);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(292, 64);
			this->bmodifier->TabIndex = 3;
			this->bmodifier->Text = L"Modifier";
			this->bmodifier->UseVisualStyleBackColor = true;
			this->bmodifier->Click += gcnew System::EventHandler(this, &GestionClient::bmodifier_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				1624)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				397)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->CatalogueClient, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(13, 127);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 700)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(2021, 1031);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// CatalogueClient
			// 
			this->CatalogueClient->AllowUserToAddRows = false;
			this->CatalogueClient->AllowUserToDeleteRows = false;
			this->CatalogueClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueClient->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueClient->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id_Client,
					this->NumClient, this->NomClient, this->PrenomClient, this->NaissanceClient, this->PremierAchat
			});
			this->CatalogueClient->Location = System::Drawing::Point(4, 84);
			this->CatalogueClient->Margin = System::Windows::Forms::Padding(4);
			this->CatalogueClient->Name = L"CatalogueClient";
			this->CatalogueClient->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			this->CatalogueClient->RowHeadersWidth = 51;
			this->CatalogueClient->Size = System::Drawing::Size(1616, 692);
			this->CatalogueClient->TabIndex = 3;
			// 
			// Titre
			// 
			this->Titre->AutoSize = true;
			this->Titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titre->Location = System::Drawing::Point(414, 9);
			this->Titre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Titre->Name = L"Titre";
			this->Titre->Size = System::Drawing::Size(536, 69);
			this->Titre->TabIndex = 4;
			this->Titre->Text = L"Gestion des clients";
			// 
			// Id_Client
			// 
			this->Id_Client->HeaderText = L"Id client";
			this->Id_Client->MinimumWidth = 6;
			this->Id_Client->Name = L"Id_Client";
			this->Id_Client->Visible = false;
			// 
			// NumClient
			// 
			this->NumClient->HeaderText = L"Numero Client";
			this->NumClient->MinimumWidth = 6;
			this->NumClient->Name = L"NumClient";
			// 
			// NomClient
			// 
			this->NomClient->HeaderText = L"Nom";
			this->NomClient->MinimumWidth = 6;
			this->NomClient->Name = L"NomClient";
			// 
			// PrenomClient
			// 
			this->PrenomClient->HeaderText = L"Prenom";
			this->PrenomClient->MinimumWidth = 6;
			this->PrenomClient->Name = L"PrenomClient";
			// 
			// NaissanceClient
			// 
			this->NaissanceClient->HeaderText = L"Date de Naissance";
			this->NaissanceClient->MinimumWidth = 6;
			this->NaissanceClient->Name = L"NaissanceClient";
			// 
			// PremierAchat
			// 
			this->PremierAchat->HeaderText = L"Date du premier achat";
			this->PremierAchat->MinimumWidth = 6;
			this->PremierAchat->Name = L"PremierAchat";
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 977);
			this->Controls->Add(this->Titre);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1024);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
			this->Name = L"GestionClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Client";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:void Reload() {
			List<Client^>^ Clients = serviceclient->SelectAllClient();

			this->CatalogueClient->Rows->Clear();
			for each (Client ^ c in Clients) {
				DataGridViewRow^ dgvr = gcnew DataGridViewRow();
				// Ajouter les colonnes correspondant à votre table Client
				DataGridViewTextBoxCell^ dgvc1 = gcnew DataGridViewTextBoxCell();
				dgvc1->Value = c->getIdClient();
				dgvr->Cells->Add(dgvc1);

				// Ajouter les colonnes correspondant à votre table Client
				DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
				dgvc2->Value = c->getNumClient();
				dgvr->Cells->Add(dgvc2);

				DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
				dgvc3->Value = c->getNomClient();
				dgvr->Cells->Add(dgvc3);

				DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
				dgvc4->Value = c->getPrenomClient();
				dgvr->Cells->Add(dgvc4);

				DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
				dgvc5->Value = c->getNaissanceClient().ToString("dd/MM/yyyy");
				dgvr->Cells->Add(dgvc5);

				/*DataGridViewTextBoxCell^ dgvc6 = gcnew DataGridViewTextBoxCell();
				dgvc6->Value = c->getPremierAchat().ToString("dd/MM/yyyy");
				dgvr->Cells->Add(dgvc6);*/

				dgvr->Tag = c;
				this->CatalogueClient->Rows->Add(dgvr);
			}
		}

	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CatalogueClient->SelectedRows->Count != 1)
			return;

		Client^ c = (Client^)this->CatalogueClient->SelectedRows[0]->Tag;

		AjouterClient^ modifierclient = gcnew AjouterClient(c);
		modifierclient->ShowDialog();
		if (modifierclient->ok) {
			serviceclient->UpdateClient(c);
			this->Reload();
		}
	}
	private: System::Void bajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Client^ c = gcnew Client();
		AjouterClient^ ajouterclient = gcnew AjouterClient(c);
		ajouterclient->ShowDialog();
		if (ajouterclient->ok) {
			serviceclient->InsertClient(c);
			this->Reload();
		}
	}
	private: System::Void bsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueClient->SelectedRows->Count > 0) {
			int rowIndex = CatalogueClient->SelectedRows[0]->Index;
			int idClient = Convert::ToInt32(CatalogueClient->Rows[rowIndex]->Cells["Id_Client"]->Value);

			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer ce client ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				Client^ clientToDelete = gcnew Client();
				clientToDelete->setIdClient(idClient);
				serviceclient->DeleteClient(clientToDelete);
				this->Reload();
				MessageBox::Show("Client supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	};
	};
}

