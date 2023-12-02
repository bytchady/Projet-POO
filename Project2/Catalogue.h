#pragma once
#include "AjouterArticle.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de Catalogue
	/// </summary>
	public ref class Catalogue : public System::Windows::Forms::Form
	{
	public:
		Catalogue(void)
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
		~Catalogue()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::TableLayoutPanel^ Catalogue_tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bRetour;

	private: System::Windows::Forms::DataGridView^ CatalogueArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ref_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nature_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Couleur_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Approvisionnement_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrixHT_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA_Article;
	private: System::Windows::Forms::TableLayoutPanel^ Catalogue_tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Button^ bModifier;
	private: System::Windows::Forms::Button^ bSupprimer;
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
			this->Catalogue_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->Catalogue_tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSupprimer = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->bModifier = (gcnew System::Windows::Forms::Button());
			this->CatalogueArticle = (gcnew System::Windows::Forms::DataGridView());
			this->Ref_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nature_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Couleur_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Approvisionnement_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrixHT_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Catalogue_tableLayoutPanel1->SuspendLayout();
			this->Catalogue_tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// Catalogue_tableLayoutPanel1
			// 
			this->Catalogue_tableLayoutPanel1->ColumnCount = 3;
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				117)));
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				1100)));
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				228)));
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->Catalogue_tableLayoutPanel2, 1, 1);
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->CatalogueArticle, 1, 2);
			this->Catalogue_tableLayoutPanel1->Location = System::Drawing::Point(12, 13);
			this->Catalogue_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(15);
			this->Catalogue_tableLayoutPanel1->Name = L"Catalogue_tableLayoutPanel1";
			this->Catalogue_tableLayoutPanel1->RowCount = 4;
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				803)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->Catalogue_tableLayoutPanel1->Size = System::Drawing::Size(1902, 1033);
			this->Catalogue_tableLayoutPanel1->TabIndex = 9;
			this->Catalogue_tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Catalogue::Catalogue_tableLayoutPanel1_Paint);
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->BackColor = System::Drawing::SystemColors::Control;
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(3, 3);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(111, 44);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = false;
			this->bRetour->Click += gcnew System::EventHandler(this, &Catalogue::bRetour_Click);
			// 
			// Catalogue_tableLayoutPanel2
			// 
			this->Catalogue_tableLayoutPanel2->ColumnCount = 4;
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				180)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				180)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				180)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				569)));
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bSupprimer, 1, 0);
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bAjouter, 2, 0);
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bModifier, 0, 0);
			this->Catalogue_tableLayoutPanel2->Location = System::Drawing::Point(120, 53);
			this->Catalogue_tableLayoutPanel2->Name = L"Catalogue_tableLayoutPanel2";
			this->Catalogue_tableLayoutPanel2->RowCount = 1;
			this->Catalogue_tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Catalogue_tableLayoutPanel2->Size = System::Drawing::Size(1094, 67);
			this->Catalogue_tableLayoutPanel2->TabIndex = 8;
			this->Catalogue_tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Catalogue::Catalogue_tableLayoutPanel2_Paint);
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(190, 10);
			this->bSupprimer->Margin = System::Windows::Forms::Padding(10);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(160, 47);
			this->bSupprimer->TabIndex = 3;
			this->bSupprimer->Text = L"Supprimer";
			this->bSupprimer->UseVisualStyleBackColor = true;
			this->bSupprimer->Click += gcnew System::EventHandler(this, &Catalogue::bSupprimer_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(370, 10);
			this->bAjouter->Margin = System::Windows::Forms::Padding(10);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(160, 47);
			this->bAjouter->TabIndex = 1;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &Catalogue::bAjouter_Click);
			// 
			// bModifier
			// 
			this->bModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifier->Location = System::Drawing::Point(10, 10);
			this->bModifier->Margin = System::Windows::Forms::Padding(10);
			this->bModifier->Name = L"bModifier";
			this->bModifier->Size = System::Drawing::Size(160, 47);
			this->bModifier->TabIndex = 2;
			this->bModifier->Text = L"Modifier";
			this->bModifier->UseVisualStyleBackColor = true;
			this->bModifier->Click += gcnew System::EventHandler(this, &Catalogue::bModifier_Click);
			// 
			// CatalogueArticle
			// 
			this->CatalogueArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueArticle->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueArticle->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->CatalogueArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueArticle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Ref_Article,
					this->Nature_Article, this->Nom_Article, this->Couleur_Article, this->Stock_Article, this->Approvisionnement_Article, this->PrixHT_Article,
					this->TVA_Article
			});
			this->CatalogueArticle->Location = System::Drawing::Point(120, 133);
			this->CatalogueArticle->Name = L"CatalogueArticle";
			this->CatalogueArticle->RowHeadersWidth = 60;
			this->CatalogueArticle->RowTemplate->Height = 24;
			this->CatalogueArticle->Size = System::Drawing::Size(1094, 797);
			this->CatalogueArticle->TabIndex = 7;
			this->CatalogueArticle->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Catalogue::CatalogueArticle_CellContentClick);
			// 
			// Ref_Article
			// 
			this->Ref_Article->HeaderText = L"Reference";
			this->Ref_Article->MinimumWidth = 6;
			this->Ref_Article->Name = L"Ref_Article";
			// 
			// Nature_Article
			// 
			this->Nature_Article->HeaderText = L"Nature";
			this->Nature_Article->MinimumWidth = 6;
			this->Nature_Article->Name = L"Nature_Article";
			// 
			// Nom_Article
			// 
			this->Nom_Article->HeaderText = L"Nom";
			this->Nom_Article->MinimumWidth = 6;
			this->Nom_Article->Name = L"Nom_Article";
			// 
			// Couleur_Article
			// 
			this->Couleur_Article->HeaderText = L"Couleur";
			this->Couleur_Article->MinimumWidth = 6;
			this->Couleur_Article->Name = L"Couleur_Article";
			// 
			// Stock_Article
			// 
			this->Stock_Article->HeaderText = L"Quantite en stock";
			this->Stock_Article->MinimumWidth = 6;
			this->Stock_Article->Name = L"Stock_Article";
			// 
			// Approvisionnement_Article
			// 
			this->Approvisionnement_Article->HeaderText = L"Seuil Approvisionnement";
			this->Approvisionnement_Article->MinimumWidth = 6;
			this->Approvisionnement_Article->Name = L"Approvisionnement_Article";
			// 
			// PrixHT_Article
			// 
			this->PrixHT_Article->HeaderText = L"Prix HT";
			this->PrixHT_Article->MinimumWidth = 6;
			this->PrixHT_Article->Name = L"PrixHT_Article";
			// 
			// TVA_Article
			// 
			this->TVA_Article->HeaderText = L"Taux TVA";
			this->TVA_Article->MinimumWidth = 6;
			this->TVA_Article->Name = L"TVA_Article";
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 977);
			this->Controls->Add(this->Catalogue_tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1018);
			this->Name = L"Catalogue";
			this->Text = L"Catalogue";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Catalogue::Catalogue_Load);
			this->Catalogue_tableLayoutPanel1->ResumeLayout(false);
			this->Catalogue_tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueArticle))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Catalogue_tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void bAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
	AjouterArticle^ A = gcnew AjouterArticle();
	A->ShowDialog();
}
private: System::Void bModifier_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CatalogueArticle_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Catalogue_tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
