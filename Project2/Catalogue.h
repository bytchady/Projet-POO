#pragma once
#include "Article.h"
#include "AjouterArticle.h"

namespace ProjectPOO {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Catalogue : public System::Windows::Forms::Form

	{

	public:
		Catalogue(void)
		{
			InitializeComponent();
			DataGridViewTextBoxColumn^ dgvtbc = gcnew DataGridViewTextBoxColumn();
			dgvtbc->Name = "Reference de l'article";
			this->CatalogueListeClient->Columns->Add(dgvtbc);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Nom";
			this->CatalogueListeClient->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "Nature";
			this->CatalogueListeClient->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Couleur";
			this->CatalogueListeClient->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Stock";
			this->CatalogueListeClient->Columns->Add(dgvtbc5);

			DataGridViewTextBoxColumn^ dgvtbc6 = gcnew DataGridViewTextBoxColumn();
			dgvtbc6->Name = "Seuil de reapprovisionnement";
			this->CatalogueListeClient->Columns->Add(dgvtbc6);

			DataGridViewTextBoxColumn^ dgvtbc7 = gcnew DataGridViewTextBoxColumn();
			dgvtbc7->Name = "Prix HT";
			this->CatalogueListeClient->Columns->Add(dgvtbc7);

			DataGridViewTextBoxColumn^ dgvtbc8 = gcnew DataGridViewTextBoxColumn();
			dgvtbc8->Name = "Taux TVA";
			this->CatalogueListeClient->Columns->Add(dgvtbc8);

			DataGridViewTextBoxColumn^ dgvtbc9 = gcnew DataGridViewTextBoxColumn();
			dgvtbc9->Name = "Id_Article";
			dgvtbc9->Visible = false;
			this->CatalogueListeClient->Columns->Add(dgvtbc9);

		}
		ServiceArticle^ servicearticle = gcnew ServiceArticle();

	protected:
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
	private: System::Windows::Forms::TableLayoutPanel^ Catalogue_tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bSupprimer;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Button^ bModifier;
	private: System::Windows::Forms::DataGridView^ CatalogueListeClient;
	private:

		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->Catalogue_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Catalogue_tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSupprimer = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->bModifier = (gcnew System::Windows::Forms::Button());
			this->CatalogueListeClient = (gcnew System::Windows::Forms::DataGridView());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->Catalogue_tableLayoutPanel1->SuspendLayout();
			this->Catalogue_tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->BeginInit();
			this->SuspendLayout();
			// 
			// Catalogue_tableLayoutPanel1
			// 
			this->Catalogue_tableLayoutPanel1->ColumnCount = 1;
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				916)));
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				15)));
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->Catalogue_tableLayoutPanel2, 0, 0);
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->CatalogueListeClient, 0, 2);
			this->Catalogue_tableLayoutPanel1->Location = System::Drawing::Point(20, 21);
			this->Catalogue_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(11, 12, 11, 12);
			this->Catalogue_tableLayoutPanel1->Name = L"Catalogue_tableLayoutPanel1";
			this->Catalogue_tableLayoutPanel1->RowCount = 3;
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				89)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				44)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				8)));
			this->Catalogue_tableLayoutPanel1->Size = System::Drawing::Size(1224, 943);
			this->Catalogue_tableLayoutPanel1->TabIndex = 9;
			// 
			// Catalogue_tableLayoutPanel2
			// 
			this->Catalogue_tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Catalogue_tableLayoutPanel2->ColumnCount = 6;
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				184)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				86)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				222)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				227)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				210)));
			this->Catalogue_tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				8)));
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bAjouter, 4, 0);
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bSupprimer, 3, 0);
			this->Catalogue_tableLayoutPanel2->Controls->Add(this->bModifier, 2, 0);
			this->Catalogue_tableLayoutPanel2->Location = System::Drawing::Point(2, 2);
			this->Catalogue_tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Catalogue_tableLayoutPanel2->Name = L"Catalogue_tableLayoutPanel2";
			this->Catalogue_tableLayoutPanel2->RowCount = 1;
			this->Catalogue_tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Catalogue_tableLayoutPanel2->Size = System::Drawing::Size(1220, 85);
			this->Catalogue_tableLayoutPanel2->TabIndex = 8;
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(494, 2);
			this->bSupprimer->Margin = System::Windows::Forms::Padding(2);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(223, 81);
			this->bSupprimer->TabIndex = 2;
			this->bSupprimer->Text = L"Supprimer";
			this->bSupprimer->UseVisualStyleBackColor = true;
			this->bSupprimer->Click += gcnew System::EventHandler(this, &Catalogue::bSupprimer_Click);
			// 
			// bAjouter
			// 
			this->bAjouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAjouter->Location = System::Drawing::Point(721, 2);
			this->bAjouter->Margin = System::Windows::Forms::Padding(2);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(206, 81);
			this->bAjouter->TabIndex = 3;
			this->bAjouter->Text = L"Ajouter";
			this->bAjouter->UseVisualStyleBackColor = true;
			this->bAjouter->Click += gcnew System::EventHandler(this, &Catalogue::bAjouter_Click);
			// 
			// bModifier
			// 
			this->bModifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bModifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bModifier->Location = System::Drawing::Point(272, 2);
			this->bModifier->Margin = System::Windows::Forms::Padding(2);
			this->bModifier->Name = L"bModifier";
			this->bModifier->Size = System::Drawing::Size(218, 81);
			this->bModifier->TabIndex = 1;
			this->bModifier->Text = L"Modifier";
			this->bModifier->UseVisualStyleBackColor = true;
			this->bModifier->Click += gcnew System::EventHandler(this, &Catalogue::bModifier_Click);
			// 
			// CatalogueListeClient
			// 
			this->CatalogueListeClient->AllowUserToAddRows = false;
			this->CatalogueListeClient->AllowUserToDeleteRows = false;
			this->CatalogueListeClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueListeClient->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueListeClient->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->CatalogueListeClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueListeClient->Location = System::Drawing::Point(2, 135);
			this->CatalogueListeClient->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->CatalogueListeClient->Name = L"CatalogueListeClient";
			this->CatalogueListeClient->RowHeadersWidth = 60;
			this->CatalogueListeClient->RowTemplate->Height = 24;
			this->CatalogueListeClient->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CatalogueListeClient->Size = System::Drawing::Size(1220, 806);
			this->CatalogueListeClient->TabIndex = 4;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->BackColor = System::Drawing::Color::White;
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(2, 2);
			this->bRetour->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(180, 81);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = false;
			this->bRetour->Click += gcnew System::EventHandler(this, &Catalogue::bRetour_Click);
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->Catalogue_tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"Catalogue";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Catalogue";
			this->Load += gcnew System::EventHandler(this, &Catalogue::Catalogue_Load);
			this->Catalogue_tableLayoutPanel1->ResumeLayout(false);
			this->Catalogue_tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
	private: System::Void Catalogue_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Reload();
	}
	private: void Reload() {
		List<Article^>^ articles = servicearticle->SelectAllArticle();
		//TODO : ToString les chiffres ?
		this->CatalogueListeClient->Rows->Clear();
		for each (Article ^ a in articles) {
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();
			DataGridViewTextBoxCell^ dgvc1 = gcnew DataGridViewTextBoxCell();
			dgvc1->Value = Convert::ToString(a->getRefArticle());
			dgvr->Cells->Add(dgvc1);

			DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
			dgvc2->Value = a->getNom();
			dgvr->Cells->Add(dgvc2);

			DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
			dgvc3->Value = a->getNature();
			dgvr->Cells->Add(dgvc3);

			DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
			dgvc4->Value = Convert::ToString(a->getCouleur());
			dgvr->Cells->Add(dgvc4);

			DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
			dgvc5->Value = a->getStock();
			dgvr->Cells->Add(dgvc5);

			DataGridViewTextBoxCell^ dgvc6 = gcnew DataGridViewTextBoxCell();
			dgvc6->Value = a->getQuantiteReapprovisionnement();
			dgvr->Cells->Add(dgvc6);

			DataGridViewTextBoxCell^ dgvc7 = gcnew DataGridViewTextBoxCell();
			dgvc7->Value = a->getPrixHT();
			dgvr->Cells->Add(dgvc7);

			DataGridViewTextBoxCell^ dgvc8 = gcnew DataGridViewTextBoxCell();
			dgvc8->Value = a->getTauxTVA();
			dgvr->Cells->Add(dgvc8);

			DataGridViewTextBoxCell^ dgvc9 = gcnew DataGridViewTextBoxCell();
			dgvc9->Value = a->getIdArticle();
			dgvr->Cells->Add(dgvc9);

			dgvr->Tag = a;
			this->CatalogueListeClient->Rows->Add(dgvr);
		}
	}

	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void bAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Article^ a = gcnew Article();
		AjouterArticle^ ajouterarticle = gcnew AjouterArticle(a);
		ajouterarticle->ShowDialog();
		if (ajouterarticle->ok) {
			servicearticle->InsertArticle(a);
			this->Reload();
		}
	}

	private: System::Void bModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CatalogueListeClient->SelectedRows->Count != 1) {
			MessageBox::Show("Veuillez sélectionner une ligne à modifier.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);;
		}

		else {
			Article^ a = (Article^)this->CatalogueListeClient->SelectedRows[0]->Tag;
			AjouterArticle^ modifierarticle = gcnew AjouterArticle(a);
			modifierarticle->ShowDialog();

			if (modifierarticle->ok) {
				servicearticle->UpdateArticle(a);
				this->Reload();
			}
		}
	}

	private: System::Void bSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueListeClient->SelectedRows->Count != 1) {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

		else {
			int rowIndex = CatalogueListeClient->SelectedRows[0]->Index;
			int idArticle = Convert::ToInt32(CatalogueListeClient->Rows[rowIndex]->Cells["Id_Article"]->Value);
			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer cet article ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				Article^ articleToDelete = gcnew Article();
				articleToDelete->setIdArticle(idArticle);
				servicearticle->DeleteArticle(articleToDelete);
				this->Reload();
				MessageBox::Show("Article supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	};
}