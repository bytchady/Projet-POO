#pragma once
#include "AjouterClient.h"

using namespace NS_Client;
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
		}

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
				100)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				170)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				170)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				170)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				410)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1170, 72);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionClient::tableLayoutPanel1_Paint);
			// 
			// bsupprimer
			// 
			this->bsupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bsupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsupprimer->Location = System::Drawing::Point(424, 4);
			this->bsupprimer->Margin = System::Windows::Forms::Padding(4);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(162, 64);
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
			this->bajouter->Location = System::Drawing::Point(594, 4);
			this->bajouter->Margin = System::Windows::Forms::Padding(4);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(162, 64);
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
			this->bmodifier->Location = System::Drawing::Point(254, 4);
			this->bmodifier->Margin = System::Windows::Forms::Padding(4);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(162, 64);
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
				1178)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				422)));
			this->tableLayoutPanel2->Controls->Add(this->CatalogueClient, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(13, 127);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 3;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 700)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1600, 1031);
			this->tableLayoutPanel2->TabIndex = 3;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionClient::tableLayoutPanel2_Paint);
			// 
			// CatalogueClient
			// 
			this->CatalogueClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueClient->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueClient->Location = System::Drawing::Point(4, 84);
			this->CatalogueClient->Margin = System::Windows::Forms::Padding(4);
			this->CatalogueClient->Name = L"CatalogueClient";
			this->CatalogueClient->RowHeadersWidth = 51;
			this->CatalogueClient->Size = System::Drawing::Size(1170, 692);
			this->CatalogueClient->TabIndex = 3;
			this->CatalogueClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionClient::dataGridView1_CellContentClick);
			// 
			// Titre
			// 
			this->Titre->AutoSize = true;
			this->Titre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titre->Location = System::Drawing::Point(363, 21);
			this->Titre->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Titre->Name = L"Titre";
			this->Titre->Size = System::Drawing::Size(536, 69);
			this->Titre->TabIndex = 4;
			this->Titre->Text = L"Gestion des clients";
			// 
			// GestionClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->Titre);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1018);
			this->Name = L"GestionClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Client";
			this->Load += gcnew System::EventHandler(this, &GestionClient::GestionClient_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueClient))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void GestionClient_Load(System::Object^ sender, System::EventArgs^ e) {
		ServiceClient^ serviceClient = gcnew ServiceClient();
		System::Data::DataSet^ dataSet = serviceClient->SelectAllServiceClient();
		CatalogueClient->DataSource = dataSet;
		CatalogueClient->DataMember = dataSet->Tables[0]->TableName;

	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueClient->SelectedRows->Count > 0) {
			// Obtenez l'index de la première ligne sélectionnée
			int rowIndex = CatalogueClient->SelectedRows[0]->Index;

			// Créez un nouvel objet Article avec les données de la ligne sélectionnée
			Client^ client = gcnew Client;
			Object^ numclientvalue = CatalogueClient->Rows[rowIndex]->Cells["Numero_Client"]->Value;
			if (numclientvalue != DBNull::Value) {
				String^ numClientString = Convert::ToString(numclientvalue);
				client->setNumeroClient(numClientString);
			}
			else {
				MessageBox::Show("Veuillez saisir une valeur pour le numéro client.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			Object^ nomclientvalue = CatalogueClient->Rows[rowIndex]->Cells["Nom_Client"]->Value;
			if (nomclientvalue != DBNull::Value) {
				String^ nomClientString = Convert::ToString(nomclientvalue);
				client->setNomClient(nomClientString);
			}
			else {
				MessageBox::Show("Veuillez saisir une valeur pour le nom du client.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			};
			Object^ prenomclientvalue = CatalogueClient->Rows[rowIndex]->Cells["Prenom_Client"]->Value;
			if (prenomclientvalue != DBNull::Value) {
				String^ prenomClientString = Convert::ToString(prenomclientvalue);
				client->setPrenomClient(prenomClientString);
			}
			else {
				MessageBox::Show("Veuillez saisir une valeur pour le prenom du client.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			};
			Object^ naissanceclientvalue = CatalogueClient->Rows[rowIndex]->Cells["Naissance_Client"]->Value;
			if (naissanceclientvalue != DBNull::Value) {
				DateTime naissanceClientDate = Convert::ToDateTime(naissanceclientvalue);
				String^ naissanceClientString = naissanceClientDate.ToString("yyyy-MM-dd");
				// Ajoutez des guillemets simples autour de la date dans la requête SQL
				client->setNaissanceClient("'" + naissanceClientString + "'");
			}
			else {
				MessageBox::Show("Veuillez saisir une valeur pour la date de naissance du client.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}
			;
			// Mettre à jour l'article dans la base de données
			ServiceClient^ serviceArticle = gcnew ServiceClient();
			serviceArticle->UpdateServiceClient(client);
			// Rafraîchir le DataGridView après la mise à jour
			System::Data::DataSet^ dataSet = serviceArticle->SelectAllServiceClient();
			CatalogueClient->DataSource = dataSet;
			CatalogueClient->DataMember = dataSet->Tables[0]->TableName;

			MessageBox::Show("Modification terminée avec succès", "Mise à jour ", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à modifier.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void bajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		AjouterClient^ ajouterClient = gcnew AjouterClient();
		ajouterClient->ShowDialog();

		ServiceClient^ serviceClient = gcnew ServiceClient();
		System::Data::DataSet^ dataSet = serviceClient->SelectAllServiceClient();
		CatalogueClient->DataSource = dataSet;
		CatalogueClient->DataMember = dataSet->Tables[0]->TableName;
	}
	private: System::Void bsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueClient->SelectedRows->Count > 0) {
			int rowIndex = CatalogueClient->SelectedRows[0]->Index;
			String^ refClient = Convert::ToString(CatalogueClient->Rows[rowIndex]->Cells["Numero_Client"]->Value);
			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer ce client ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				ServiceClient^ serviceClient = gcnew ServiceClient();
				Client^ clientToDelete = gcnew Client();
				clientToDelete->setNumeroClient(refClient);
				serviceClient->DeleteServiceClient(clientToDelete);

				System::Data::DataSet^ dataSet = serviceClient->SelectAllServiceClient();
				CatalogueClient->DataSource = dataSet;
				CatalogueClient->DataMember = dataSet->Tables[0]->TableName;

				MessageBox::Show("Client supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	};
}
