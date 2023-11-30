#pragma once
#include "AjouterArcticle.h"

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
	private: System::Windows::Forms::Button^ Btn_RetourCatalogue;
	protected:

	private: System::Windows::Forms::DataGridView^ CatalogueArticle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ref_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nature_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Couleur_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Approviosionnement_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PrixHT_Article;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TVA_Article;
	private: System::Windows::Forms::Button^ Btn_AddCatalogue;
	private: System::Windows::Forms::Button^ Btn_UpdateCatalogue;
	private: System::Windows::Forms::Button^ Btn_SuppCatalogue;


	protected:

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
			this->Btn_RetourCatalogue = (gcnew System::Windows::Forms::Button());
			this->CatalogueArticle = (gcnew System::Windows::Forms::DataGridView());
			this->Ref_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nature_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nom_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Couleur_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Stock_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Approviosionnement_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PrixHT_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TVA_Article = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Btn_AddCatalogue = (gcnew System::Windows::Forms::Button());
			this->Btn_UpdateCatalogue = (gcnew System::Windows::Forms::Button());
			this->Btn_SuppCatalogue = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// Btn_RetourCatalogue
			// 
			this->Btn_RetourCatalogue->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_RetourCatalogue->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_RetourCatalogue->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Btn_RetourCatalogue->Location = System::Drawing::Point(12, 12);
			this->Btn_RetourCatalogue->Name = L"Btn_RetourCatalogue";
			this->Btn_RetourCatalogue->Size = System::Drawing::Size(100, 50);
			this->Btn_RetourCatalogue->TabIndex = 1;
			this->Btn_RetourCatalogue->Text = L"Retour";
			this->Btn_RetourCatalogue->UseVisualStyleBackColor = false;
			this->Btn_RetourCatalogue->Click += gcnew System::EventHandler(this, &Catalogue::Btn_RetourCatalogue_Click);
			// 
			// CatalogueArticle
			// 
			this->CatalogueArticle->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->CatalogueArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueArticle->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Ref_Article,
					this->Nature_Article, this->Nom_Article, this->Couleur_Article, this->Stock_Article, this->Approviosionnement_Article, this->PrixHT_Article,
					this->TVA_Article
			});
			this->CatalogueArticle->Location = System::Drawing::Point(12, 99);
			this->CatalogueArticle->Name = L"CatalogueArticle";
			this->CatalogueArticle->RowHeadersWidth = 51;
			this->CatalogueArticle->RowTemplate->Height = 24;
			this->CatalogueArticle->Size = System::Drawing::Size(1453, 725);
			this->CatalogueArticle->TabIndex = 5;
			// 
			// Ref_Article
			// 
			this->Ref_Article->HeaderText = L"Reference";
			this->Ref_Article->MinimumWidth = 6;
			this->Ref_Article->Name = L"Ref_Article";
			this->Ref_Article->Width = 125;
			// 
			// Nature_Article
			// 
			this->Nature_Article->HeaderText = L"Nature";
			this->Nature_Article->MinimumWidth = 6;
			this->Nature_Article->Name = L"Nature_Article";
			this->Nature_Article->Width = 125;
			// 
			// Nom_Article
			// 
			this->Nom_Article->HeaderText = L"Nom";
			this->Nom_Article->MinimumWidth = 6;
			this->Nom_Article->Name = L"Nom_Article";
			this->Nom_Article->Width = 125;
			// 
			// Couleur_Article
			// 
			this->Couleur_Article->HeaderText = L"Couleur";
			this->Couleur_Article->MinimumWidth = 6;
			this->Couleur_Article->Name = L"Couleur_Article";
			this->Couleur_Article->Width = 125;
			// 
			// Stock_Article
			// 
			this->Stock_Article->HeaderText = L"Quantite en stock";
			this->Stock_Article->MinimumWidth = 6;
			this->Stock_Article->Name = L"Stock_Article";
			this->Stock_Article->Width = 125;
			// 
			// Approviosionnement_Article
			// 
			this->Approviosionnement_Article->HeaderText = L"Seuil Approvisionnement";
			this->Approviosionnement_Article->MinimumWidth = 6;
			this->Approviosionnement_Article->Name = L"Approviosionnement_Article";
			this->Approviosionnement_Article->Width = 125;
			// 
			// PrixHT_Article
			// 
			this->PrixHT_Article->HeaderText = L"Prix HT";
			this->PrixHT_Article->MinimumWidth = 6;
			this->PrixHT_Article->Name = L"PrixHT_Article";
			this->PrixHT_Article->Width = 125;
			// 
			// TVA_Article
			// 
			this->TVA_Article->HeaderText = L"Taux TVA";
			this->TVA_Article->MinimumWidth = 6;
			this->TVA_Article->Name = L"TVA_Article";
			this->TVA_Article->Width = 125;
			// 
			// Btn_AddCatalogue
			// 
			this->Btn_AddCatalogue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_AddCatalogue->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Btn_AddCatalogue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_AddCatalogue->Location = System::Drawing::Point(1760, 100);
			this->Btn_AddCatalogue->Name = L"Btn_AddCatalogue";
			this->Btn_AddCatalogue->Size = System::Drawing::Size(130, 50);
			this->Btn_AddCatalogue->TabIndex = 6;
			this->Btn_AddCatalogue->Text = L"Ajouter";
			this->Btn_AddCatalogue->UseVisualStyleBackColor = true;
			this->Btn_AddCatalogue->Click += gcnew System::EventHandler(this, &Catalogue::Btn_AddCatalogue_Click);
			// 
			// Btn_UpdateCatalogue
			// 
			this->Btn_UpdateCatalogue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_UpdateCatalogue->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Btn_UpdateCatalogue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Btn_UpdateCatalogue->Location = System::Drawing::Point(1760, 200);
			this->Btn_UpdateCatalogue->Name = L"Btn_UpdateCatalogue";
			this->Btn_UpdateCatalogue->Size = System::Drawing::Size(130, 50);
			this->Btn_UpdateCatalogue->TabIndex = 7;
			this->Btn_UpdateCatalogue->Text = L"Modifier";
			this->Btn_UpdateCatalogue->UseVisualStyleBackColor = true;
			this->Btn_UpdateCatalogue->Click += gcnew System::EventHandler(this, &Catalogue::Btn_UpdateCatalogue_Click);
			// 
			// Btn_SuppCatalogue
			// 
			this->Btn_SuppCatalogue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Btn_SuppCatalogue->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Btn_SuppCatalogue->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_SuppCatalogue->Location = System::Drawing::Point(1760, 300);
			this->Btn_SuppCatalogue->Name = L"Btn_SuppCatalogue";
			this->Btn_SuppCatalogue->Size = System::Drawing::Size(130, 50);
			this->Btn_SuppCatalogue->TabIndex = 8;
			this->Btn_SuppCatalogue->Text = L"Supprimer";
			this->Btn_SuppCatalogue->UseVisualStyleBackColor = true;
			this->Btn_SuppCatalogue->Click += gcnew System::EventHandler(this, &Catalogue::Btn_SuppCatalogue_Click);
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->Btn_SuppCatalogue);
			this->Controls->Add(this->Btn_UpdateCatalogue);
			this->Controls->Add(this->Btn_AddCatalogue);
			this->Controls->Add(this->CatalogueArticle);
			this->Controls->Add(this->Btn_RetourCatalogue);
			this->Name = L"Catalogue";
			this->Text = L"Catalogue";
			this->Load += gcnew System::EventHandler(this, &Catalogue::Catalogue_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueArticle))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Btn_RetourCatalogue_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Btn_AddCatalogue_Click(System::Object^ sender, System::EventArgs^ e) {
	AjouterArticle^ A = gcnew AjouterArticle();
	A->ShowDialog();
}
private: System::Void Btn_UpdateCatalogue_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_SuppCatalogue_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
