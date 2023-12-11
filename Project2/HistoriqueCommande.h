#pragma once
#include "CommandeClient.h"
#include "SupprimerCommandePopUp.h"
#include "DetailCommande.h"
#include "Commande.h"
#include "ServiceCommande.h"


namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommande
	/// </summary>
	public ref class HistoriqueCommande : public System::Windows::Forms::Form
	{
	private:
		ServiceCommande^ scm = gcnew ServiceCommande();
	public:
		HistoriqueCommande(void)
		{
			InitializeComponent();
			DataGridViewTextBoxColumn^ dgvtbc1 = gcnew DataGridViewTextBoxColumn();
			dgvtbc1->Name = "Id_Commande";
			this->CatalogueCommande->Columns->Add(dgvtbc1);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Ref Commande";
			this->CatalogueCommande->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "Total TTC";
			this->CatalogueCommande->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Date Emission";
			this->CatalogueCommande->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Date Livraison";
			this->CatalogueCommande->Columns->Add(dgvtbc5);

			this->Reload();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~HistoriqueCommande()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bDetail;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Button^ bModifier;
	private: System::Windows::Forms::Button^ bRetour;




	private: System::Windows::Forms::Button^ bSupprimer;
	private: System::Windows::Forms::DataGridView^ CatalogueCommande;



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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->bSupprimer = (gcnew System::Windows::Forms::Button());
			this->bDetail = (gcnew System::Windows::Forms::Button());
			this->bModifier = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->CatalogueCommande = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueCommande))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->CatalogueCommande, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 11);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 52)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 679)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 81)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1240, 963);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 6;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				68.37209F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.62791F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				260)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				265)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				258)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				254)));
			this->tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->bSupprimer, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->bDetail, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->bModifier, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->bAjouter, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1234, 75);
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
			this->bRetour->Size = System::Drawing::Size(128, 69);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &HistoriqueCommande::bRetour_Click);
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(982, 3);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(249, 69);
			this->bSupprimer->TabIndex = 4;
			this->bSupprimer->Text = L"Supprimer";
			this->bSupprimer->UseVisualStyleBackColor = true;
			this->bSupprimer->Click += gcnew System::EventHandler(this, &HistoriqueCommande::bSupprimer_Click);
			// 
			// bDetail
			// 
			this->bDetail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDetail->Location = System::Drawing::Point(199, 3);
			this->bDetail->Name = L"bDetail";
			this->bDetail->Size = System::Drawing::Size(254, 69);
			this->bDetail->TabIndex = 3;
			this->bDetail->Text = L"Détail";
			this->bDetail->UseVisualStyleBackColor = true;
			this->bDetail->Click += gcnew System::EventHandler(this, &HistoriqueCommande::bDetail_Click);
			// 
			// bModifier
			// 
			this->bModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifier->Location = System::Drawing::Point(724, 3);
			this->bModifier->Name = L"bModifier";
			this->bModifier->Size = System::Drawing::Size(252, 69);
			this->bModifier->TabIndex = 1;
			this->bModifier->Text = L"Modifier";
			this->bModifier->UseVisualStyleBackColor = true;
			this->bModifier->Click += gcnew System::EventHandler(this, &HistoriqueCommande::bModifier_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(459, 3);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(259, 69);
			this->bAjouter->TabIndex = 2;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &HistoriqueCommande::bAjouter_Click);
			// 
			// CatalogueCommande
			// 
			this->CatalogueCommande->AllowUserToAddRows = false;
			this->CatalogueCommande->AllowUserToDeleteRows = false;
			this->CatalogueCommande->AllowUserToOrderColumns = true;
			this->CatalogueCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueCommande->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueCommande->Location = System::Drawing::Point(3, 136);
			this->CatalogueCommande->Name = L"CatalogueCommande";
			this->CatalogueCommande->RowHeadersWidth = 51;
			this->CatalogueCommande->RowTemplate->Height = 24;
			this->CatalogueCommande->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CatalogueCommande->Size = System::Drawing::Size(1234, 673);
			this->CatalogueCommande->TabIndex = 1;
			// 
			// HistoriqueCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"HistoriqueCommande";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Liste des commandes";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueCommande))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private:void Reload() {
	List<Commande^>^ Commandes = scm->SelectAllCommande();

	this->CatalogueCommande->Rows->Clear();
	for each (Commande ^ cmd in Commandes) {
		DataGridViewRow^ dgvr = gcnew DataGridViewRow();
		DataGridViewTextBoxCell^ dgvc1 = gcnew DataGridViewTextBoxCell();
		dgvc1->Value = cmd->getIdCommande();
		dgvr->Cells->Add(dgvc1);

		// Ajouter les colonnes correspondant à votre table Client
		DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
		dgvc2->Value = cmd->getRefCommande();
		dgvr->Cells->Add(dgvc2);

		DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
		dgvc3->Value = cmd->getTotalTTC();
		dgvr->Cells->Add(dgvc3);

		DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
		dgvc4->Value = cmd->getDateEmission();
		dgvr->Cells->Add(dgvc4);

		DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
		dgvc5->Value = cmd->getDateLivraison();
		dgvr->Cells->Add(dgvc5);

		dgvr->Tag = cmd;
		this->CatalogueCommande->Rows->Add(dgvr);
	}
}
private: System::Void bDetail_Click(System::Object^ sender, System::EventArgs^ e) {
	DetailCommande^ dc = gcnew DetailCommande();
	dc->ShowDialog();
	}
private: System::Void bAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
	CommandeClient^ cc = gcnew CommandeClient();
	cc->ShowDialog();
	this->Reload();
}
private: System::Void bModifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
	SupprimerCommandePopUp^ sc = gcnew SupprimerCommandePopUp();
	sc->ShowDialog();
}
private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
