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
			DataGridViewTextBoxColumn^ dgvtbc = gcnew DataGridViewTextBoxColumn();
			dgvtbc->Name = "Reference de l'article";
			this->CatalogueArticle->Columns->Add(dgvtbc);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Nom";
			this->CatalogueArticle->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "Nature";
			this->CatalogueArticle->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Couleur";
			this->CatalogueArticle->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Stock";
			this->CatalogueArticle->Columns->Add(dgvtbc5);

			DataGridViewTextBoxColumn^ dgvtbc6 = gcnew DataGridViewTextBoxColumn();
			dgvtbc6->Name = "Seuil de reapprovisionnement";
			this->CatalogueArticle->Columns->Add(dgvtbc6);

			DataGridViewTextBoxColumn^ dgvtbc7 = gcnew DataGridViewTextBoxColumn();
			dgvtbc7->Name = "Prix HT";
			this->CatalogueArticle->Columns->Add(dgvtbc7);

			DataGridViewTextBoxColumn^ dgvtbc8 = gcnew DataGridViewTextBoxColumn();
			dgvtbc8->Name = "Taux TVA";
			this->CatalogueArticle->Columns->Add(dgvtbc8);

			DataGridViewTextBoxColumn^ dgvtbc9 = gcnew DataGridViewTextBoxColumn();
			dgvtbc9->Name = "Id_Article";
			dgvtbc9->Visible = false;
			this->CatalogueArticle->Columns->Add(dgvtbc9);

		}
		ServiceArticle^ servicearticle = gcnew ServiceArticle();

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
	private: System::Windows::Forms::TableLayoutPanel^ Catalogue_tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bSupprimer;
	private: System::Windows::Forms::Button^ bAjouter;
	private: System::Windows::Forms::Button^ bModifier;
	private: System::Windows::Forms::DataGridView^ CatalogueArticle;

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
			this->Catalogue_tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Catalogue_tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSupprimer = (gcnew System::Windows::Forms::Button());
			this->bAjouter = (gcnew System::Windows::Forms::Button());
			this->bModifier = (gcnew System::Windows::Forms::Button());
			this->CatalogueArticle = (gcnew System::Windows::Forms::DataGridView());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->Catalogue_tableLayoutPanel1->SuspendLayout();
			this->Catalogue_tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueArticle))->BeginInit();
			this->SuspendLayout();
			// 
			// Catalogue_tableLayoutPanel1
			// 
			this->Catalogue_tableLayoutPanel1->ColumnCount = 2;
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				1221)));
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->Catalogue_tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->Catalogue_tableLayoutPanel2, 0, 1);
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->CatalogueArticle, 0, 2);
			this->Catalogue_tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->Catalogue_tableLayoutPanel1->Location = System::Drawing::Point(12, 14);
			this->Catalogue_tableLayoutPanel1->Margin = System::Windows::Forms::Padding(15);
			this->Catalogue_tableLayoutPanel1->Name = L"Catalogue_tableLayoutPanel1";
			this->Catalogue_tableLayoutPanel1->RowCount = 4;
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				50)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				80)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				796)));
			this->Catalogue_tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute,
				41)));
			this->Catalogue_tableLayoutPanel1->Size = System::Drawing::Size(1901, 1033);
			this->Catalogue_tableLayoutPanel1->TabIndex = 9;
			this->Catalogue_tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Catalogue::Catalogue_tableLayoutPanel1_Paint);
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
			this->Catalogue_tableLayoutPanel2->Location = System::Drawing::Point(3, 52);
			this->Catalogue_tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Catalogue_tableLayoutPanel2->Name = L"Catalogue_tableLayoutPanel2";
			this->Catalogue_tableLayoutPanel2->RowCount = 1;
			this->Catalogue_tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->Catalogue_tableLayoutPanel2->Size = System::Drawing::Size(1093, 66);
			this->Catalogue_tableLayoutPanel2->TabIndex = 8;
			// 
			// bSupprimer
			// 
			this->bSupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSupprimer->Location = System::Drawing::Point(191, 10);
			this->bSupprimer->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->bSupprimer->Name = L"bSupprimer";
			this->bSupprimer->Size = System::Drawing::Size(158, 46);
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
			this->bAjouter->Location = System::Drawing::Point(371, 10);
			this->bAjouter->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->bAjouter->Name = L"bAjouter";
			this->bAjouter->Size = System::Drawing::Size(158, 46);
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
			this->bModifier->Location = System::Drawing::Point(11, 10);
			this->bModifier->Margin = System::Windows::Forms::Padding(11, 10, 11, 10);
			this->bModifier->Name = L"bModifier";
			this->bModifier->Size = System::Drawing::Size(158, 46);
			this->bModifier->TabIndex = 2;
			this->bModifier->Text = L"Modifier";
			this->bModifier->UseVisualStyleBackColor = true;
			this->bModifier->Click += gcnew System::EventHandler(this, &Catalogue::bModifier_Click);
			// 
			// CatalogueArticle
			// 
			this->CatalogueArticle->AllowUserToAddRows = false;
			this->CatalogueArticle->AllowUserToDeleteRows = false;
			this->CatalogueArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueArticle->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueArticle->BackgroundColor = System::Drawing::SystemColors::ControlLight;
			this->CatalogueArticle->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueArticle->Location = System::Drawing::Point(3, 132);
			this->CatalogueArticle->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CatalogueArticle->Name = L"CatalogueArticle";
			this->CatalogueArticle->RowHeadersWidth = 60;
			this->CatalogueArticle->RowTemplate->Height = 24;
			this->CatalogueArticle->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CatalogueArticle->Size = System::Drawing::Size(1215, 792);
			this->CatalogueArticle->TabIndex = 7;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bRetour->BackColor = System::Drawing::SystemColors::Control;
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(3, 3);
			this->bRetour->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(111, 44);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = false;
			this->bRetour->Click += gcnew System::EventHandler(this, &Catalogue::bRetour_Click);
			// 
			// Catalogue
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 977);
			this->Controls->Add(this->Catalogue_tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1701, 1024);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
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
		this->Reload();
	}
	private: void Reload() {
		List<Article^>^ articles = servicearticle->SelectAllArticle();
		//TODO : ToString les chiffres ?
		this->CatalogueArticle->Rows->Clear();
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
			this->CatalogueArticle->Rows->Add(dgvr);
		}
	}

	private: System::Void Catalogue_tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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
			//Diagnostics::Debug::WriteLine("@@@@@@@@@@@");
			this->Reload();
		}

		/*

			NS_Article::ServiceArticle^ serviceArticle = gcnew NS_Article::ServiceArticle();

			AjouterArticle^ article = gcnew AjouterArticle();

			article->ShowDialog();

			System::Data::DataSet^ dataSet = serviceArticle->SelectAllServiceArticle();

			CatalogueArticle->DataSource = dataSet;

			CatalogueArticle->DataMember = dataSet->Tables[0]->TableName;*/

	}

	private: System::Void bModifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CatalogueArticle->SelectedRows->Count != 1) {
			MessageBox::Show("Veuillez sélectionner une ligne à modifier.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);;
		}

		else {
			Article^ a = (Article^)this->CatalogueArticle->SelectedRows[0]->Tag;
			AjouterArticle^ modifierarticle = gcnew AjouterArticle(a);
			modifierarticle->ShowDialog();

			if (modifierarticle->ok) {
				servicearticle->UpdateArticle(a);
				//Diagnostics::Debug::WriteLine("##########");
				this->Reload();

			}

		}

	}

		   /*

		   // Créez un nouvel objet Article avec les données de la ligne sélectionnée

		   Article^ article = gcnew Article;

		   Object^ refArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Ref_Article"]->Value;

		   if (refArticleValue != DBNull::Value) {

			   article->setRefArticle(Convert::ToInt32(refArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour la référence de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   }

		   Object^ NatureArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Nature_Article"]->Value;

		   if (NatureArticleValue != DBNull::Value) {

			   article->setNature(Convert::ToString(NatureArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour la nature de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   };

		   Object^ NomArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Nom_Article"]->Value;

		   if (NomArticleValue != DBNull::Value) {

			   article->setNom(Convert::ToString(NomArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour la nom de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   };

		   article->setCouleur(Convert::ToString(CatalogueArticle->Rows[rowIndex]->Cells["Couleur_Article"]->Value));

		   Object^ StockArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Stock_Article"]->Value;

		   if (StockArticleValue != DBNull::Value) {

			   article->setStock(Convert::ToInt32(StockArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour l'etat du stock de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   };

		   Object^ ReapproArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Quantite_Reapprovisionnement"]->Value;

		   if (ReapproArticleValue != DBNull::Value) {

			   article->setQuantiteReapprovisionnement(Convert::ToInt32(ReapproArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour le seuil de reapprovisionnement de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   };

		   Object^ PrixHTArticleValue = CatalogueArticle->Rows[rowIndex]->Cells["Prix_HT"]->Value;

		   if (PrixHTArticleValue != DBNull::Value) {

			   article->setPrixHT(Convert::ToDouble(PrixHTArticleValue));

		   }

		   else {

			   MessageBox::Show("Veuillez saisir une valeur pour le prix HT de l'article.", "Données manquantes", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			   return;

		   };

		   // Mettre à jour l'article dans la base de données

		   NS_Article::ServiceArticle^ serviceArticle = gcnew NS_Article::ServiceArticle();

		   serviceArticle->UpdateServiceArticle(article);

		   // Rafraîchir le DataGridView après la mise à jour

		   System::Data::DataSet^ dataSet = serviceArticle->SelectAllServiceArticle();

		   CatalogueArticle->DataSource = dataSet;

		   CatalogueArticle->DataMember = dataSet->Tables[0]->TableName;

		   MessageBox::Show("Modification terminée avec succès", "Mise à jour ", MessageBoxButtons::OK, MessageBoxIcon::Information);

	   }

	   else {

		   MessageBox::Show("Veuillez sélectionner une ligne à modifier.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);

	   }

   }*/

	private: System::Void bSupprimer_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CatalogueArticle->SelectedRows->Count > 0) {
			int rowIndex = CatalogueArticle->SelectedRows[0]->Index;
			int idArticle = Convert::ToInt32(CatalogueArticle->Rows[rowIndex]->Cells["Id_Article"]->Value);
			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer cet article ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				Article^ articleToDelete = gcnew Article();
				articleToDelete->setIdArticle(idArticle);
				servicearticle->DeleteArticle(articleToDelete);
				this->Reload();
				MessageBox::Show("Article supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	};
}