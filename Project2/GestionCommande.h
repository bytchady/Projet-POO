#pragma once
#include "AjouterCommande1.h"
#include "SupprimerCommandePopUp.h"
#include "DetailCommande.h"
#include "Commande.h"
#include "ServiceCommande.h"
using namespace NS_Commande;

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
	public ref class GestionCommande : public System::Windows::Forms::Form
	{
	public:
		GestionCommande(void)
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
		~GestionCommande()
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
			this->tableLayoutPanel1->Location = System::Drawing::Point(16, 13);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 64)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 836)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1653, 1185);
			this->tableLayoutPanel1->TabIndex = 0;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionCommande::tableLayoutPanel1_Paint);
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
				347)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				353)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				344)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				335)));
			this->tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->bSupprimer, 5, 0);
			this->tableLayoutPanel2->Controls->Add(this->bDetail, 2, 0);
			this->tableLayoutPanel2->Controls->Add(this->bModifier, 4, 0);
			this->tableLayoutPanel2->Controls->Add(this->bAjouter, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1645, 92);
			this->tableLayoutPanel2->TabIndex = 0;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionCommande::tableLayoutPanel2_Paint);
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
			this->bRetour->Size = System::Drawing::Size(173, 84);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &GestionCommande::bRetour_Click);
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(1313, 4);
			this->bSupprimer->Margin = System::Windows::Forms::Padding(4);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(328, 84);
			this->bSupprimer->TabIndex = 4;
			this->bSupprimer->Text = L"Supprimer";
			this->bSupprimer->UseVisualStyleBackColor = true;
			this->bSupprimer->Click += gcnew System::EventHandler(this, &GestionCommande::bSupprimer_Click);
			// 
			// bDetail
			// 
			this->bDetail->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bDetail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDetail->Location = System::Drawing::Point(269, 4);
			this->bDetail->Margin = System::Windows::Forms::Padding(4);
			this->bDetail->Name = L"bDetail";
			this->bDetail->Size = System::Drawing::Size(339, 84);
			this->bDetail->TabIndex = 3;
			this->bDetail->Text = L"Détail";
			this->bDetail->UseVisualStyleBackColor = true;
			this->bDetail->Click += gcnew System::EventHandler(this, &GestionCommande::bDetail_Click);
			// 
			// bModifier
			// 
			this->bModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifier->Location = System::Drawing::Point(969, 4);
			this->bModifier->Margin = System::Windows::Forms::Padding(4);
			this->bModifier->Name = L"bModifier";
			this->bModifier->Size = System::Drawing::Size(336, 84);
			this->bModifier->TabIndex = 1;
			this->bModifier->Text = L"Modifier";
			this->bModifier->UseVisualStyleBackColor = true;
			this->bModifier->Click += gcnew System::EventHandler(this, &GestionCommande::bModifier_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(616, 4);
			this->bAjouter->Margin = System::Windows::Forms::Padding(4);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(345, 84);
			this->bAjouter->TabIndex = 2;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &GestionCommande::bAjouter_Click);
			// 
			// CatalogueCommande
			// 
			this->CatalogueCommande->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueCommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueCommande->Location = System::Drawing::Point(4, 168);
			this->CatalogueCommande->Margin = System::Windows::Forms::Padding(4);
			this->CatalogueCommande->Name = L"CatalogueCommande";
			this->CatalogueCommande->RowHeadersWidth = 51;
			this->CatalogueCommande->RowTemplate->Height = 24;
			this->CatalogueCommande->Size = System::Drawing::Size(1645, 828);
			this->CatalogueCommande->TabIndex = 1;
			this->CatalogueCommande->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionCommande::dataGridView1_CellContentClick);
			// 
			// GestionCommande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 1055);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1249);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
			this->Name = L"GestionCommande";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Liste des commandes";
			this->Load += gcnew System::EventHandler(this, &GestionCommande::GestionCommande_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueCommande))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bDetail_Click(System::Object^ sender, System::EventArgs^ e) {
		DetailCommande^ dc = gcnew DetailCommande();
		dc->ShowDialog();
	}
private: System::Void bAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
	AjouterCommande1^ A1 = gcnew AjouterCommande1();
	A1->ShowDialog();
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
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void GestionCommande_Load(System::Object^ sender, System::EventArgs^ e) {
	ServiceCommande^ serviceCommande = gcnew ServiceCommande();
	/*System::Data::DataSet^ dataSet = serviceArticle->SelectAllServiceCommande();
	CatalogueCommande->DataSource = dataSet;
	CatalogueCommande->DataMember = dataSet->Tables[0]->TableName;*/
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
