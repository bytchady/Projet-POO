#pragma once
#include "ServiceClient.h"
#include "ServiceCommande.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de AjouterCommande1
	/// </summary>
	public ref class CommandeClient : public System::Windows::Forms::Form
	{
	public:
		CommandeClient(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			DataGridViewTextBoxColumn^ dgvtbc1 = gcnew DataGridViewTextBoxColumn();
			dgvtbc1->Name = "Numero Client";
			this->CatalogueListeClient->Columns->Add(dgvtbc1);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Nom";
			this->CatalogueListeClient->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "prenom";
			this->CatalogueListeClient->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Adresses de livraisons";
			this->CatalogueListeClient->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Adresses de facturations";
			this->CatalogueListeClient->Columns->Add(dgvtbc5);

			DataGridViewTextBoxColumn^ dgvtbc6 = gcnew DataGridViewTextBoxColumn();
			dgvtbc6->Name = "Id_Client";
			dgvtbc6->Visible = false;
			this->CatalogueListeClient->Columns->Add(dgvtbc6);

			this->Reload();
		}
		ServiceCommande^ scmd = gcnew ServiceCommande();
		ServiceClient^ scl = gcnew ServiceClient();
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~CommandeClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bRetour;
	private: System::Windows::Forms::Button^ bCommander;

	private: System::Windows::Forms::DataGridView^ CatalogueListeClient;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->bCommander = (gcnew System::Windows::Forms::Button());
			this->CatalogueListeClient = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->CatalogueListeClient, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 615)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 116)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 1152);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.09877F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.90123F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				227)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				240)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				446)));
			this->tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->bCommander, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1233, 75);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(3, 3);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(176, 69);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &CommandeClient::bRetour_Click);
			// 
			// bCommander
			// 
			this->bCommander->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bCommander->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCommander->Location = System::Drawing::Point(549, 3);
			this->bCommander->Name = L"bCommander";
			this->bCommander->Size = System::Drawing::Size(234, 69);
			this->bCommander->TabIndex = 1;
			this->bCommander->Text = L"Commander";
			this->bCommander->UseVisualStyleBackColor = true;
			this->bCommander->Click += gcnew System::EventHandler(this, &CommandeClient::bCommander_Click);
			// 
			// CatalogueListeClient
			// 
			this->CatalogueListeClient->AllowUserToAddRows = false;
			this->CatalogueListeClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueListeClient->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueListeClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueListeClient->Location = System::Drawing::Point(3, 165);
			this->CatalogueListeClient->Name = L"CatalogueListeClient";
			this->CatalogueListeClient->RowHeadersWidth = 51;
			this->CatalogueListeClient->Size = System::Drawing::Size(1233, 609);
			this->CatalogueListeClient->TabIndex = 2;
			this->CatalogueListeClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CommandeClient::dataGridView1_CellContentClick);
			// 
			// CommandeClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"CommandeClient";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Commande";
			this->Load += gcnew System::EventHandler(this, &CommandeClient::AjouterCommande1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:void Reload() {
		List<Client^>^ Clients = scl->SelectAllClient();

		this->CatalogueListeClient->Rows->Clear();
		for each (Client ^ c in Clients) {
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			DataGridViewTextBoxCell^ dgvc1 = gcnew DataGridViewTextBoxCell();
			dgvc1->Value = c->getNumClient();
			dgvr->Cells->Add(dgvc1);

			// Ajouter les colonnes correspondant � votre table Client
			DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
			dgvc2->Value = c->getNomClient();
			dgvr->Cells->Add(dgvc2);

			DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
			dgvc3->Value = c->getPrenomClient();
			dgvr->Cells->Add(dgvc3);

			/*DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
			dgvc4->Value = c->getPrenomClient();
			dgvr->Cells->Add(dgvc4);

			DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
			dgvc5->Value = c->getNaissanceClient().ToString("dd/MM/yyyy");
			dgvr->Cells->Add(dgvc5);*/

			DataGridViewTextBoxCell^ dgvc6 = gcnew DataGridViewTextBoxCell();
			dgvc6->Value = c->getIdClient();
			dgvr->Cells->Add(dgvc6);

			dgvr->Tag = c;
			this->CatalogueListeClient->Rows->Add(dgvr);
		}
	}
	private: System::Void bCommander_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (this->CatalogueListeClient->SelectedRows->Count != 1)
			return;

		Client^ c = (Client^)this->CatalogueListeClient->SelectedRows[0]->Tag;

		AjouterClient^ modifierclient = gcnew AjouterClient(c);
		modifierclient->ShowDialog();
		if (modifierclient->ok) {
			scl->UpdateClient(c);
			this->Reload();
		}*/
	}
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bAjouterClient_Click(System::Object^ sender, System::EventArgs^ e) {
		/*AjouterClient^ ac = gcnew AjouterClient();
		ac->ShowDialog();*/
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void AjouterCommande1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
