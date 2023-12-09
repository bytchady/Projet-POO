#pragma once
#include "Personnel.h"
#include "AjouterPersonnel.h"
#include "Adresse.h"


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
	public ref class GestionPersonnel : public System::Windows::Forms::Form
	{
	public:
		GestionPersonnel(void)
		{
			InitializeComponent();
			//Personnel^ p = gcnew Personnel();
			//p->setDate_Embauche(DateTime(2023, 12, 12));
			//dateTimePicker1->Value = p->getDate_Embauche();

			DataGridViewTextBoxColumn^ dgvtbc = gcnew DataGridViewTextBoxColumn();
			dgvtbc->Name = "ID";
			this->CataloguePersonnel->Columns->Add(dgvtbc);

			DataGridViewTextBoxColumn^ dgvtbc2 = gcnew DataGridViewTextBoxColumn();
			dgvtbc2->Name = "Nom";
			this->CataloguePersonnel->Columns->Add(dgvtbc2);

			DataGridViewTextBoxColumn^ dgvtbc3 = gcnew DataGridViewTextBoxColumn();
			dgvtbc3->Name = "Prénom";
			this->CataloguePersonnel->Columns->Add(dgvtbc3);

			DataGridViewTextBoxColumn^ dgvtbc4 = gcnew DataGridViewTextBoxColumn();
			dgvtbc4->Name = "Numéro de la rue";
			this->CataloguePersonnel->Columns->Add(dgvtbc4);

			DataGridViewTextBoxColumn^ dgvtbc5 = gcnew DataGridViewTextBoxColumn();
			dgvtbc5->Name = "Nom de la rue";
			this->CataloguePersonnel->Columns->Add(dgvtbc5);

			DataGridViewTextBoxColumn^ dgvtbc6 = gcnew DataGridViewTextBoxColumn();
			dgvtbc6->Name = "Complement d'adresse";
			this->CataloguePersonnel->Columns->Add(dgvtbc6);

			DataGridViewTextBoxColumn^ dgvtbc7 = gcnew DataGridViewTextBoxColumn();
			dgvtbc7->Name = "Code postal";
			this->CataloguePersonnel->Columns->Add(dgvtbc7);

			DataGridViewTextBoxColumn^ dgvtbc8 = gcnew DataGridViewTextBoxColumn();
			dgvtbc8->Name = "Ville";
			this->CataloguePersonnel->Columns->Add(dgvtbc8);

			DataGridViewTextBoxColumn^ dgvtbc9 = gcnew DataGridViewTextBoxColumn();
			dgvtbc9->Name = "Date de naissance";
			this->CataloguePersonnel->Columns->Add(dgvtbc9);

			DataGridViewTextBoxColumn^ dgvtbc10 = gcnew DataGridViewTextBoxColumn();
			dgvtbc10->Name = "Date d'embauche";
			this->CataloguePersonnel->Columns->Add(dgvtbc10);

			DataGridViewTextBoxColumn^ dgvtbc11 = gcnew DataGridViewTextBoxColumn();
			dgvtbc11->Name = "ID supérieur";
			this->CataloguePersonnel->Columns->Add(dgvtbc11);


		}

		ServicePersonnel^ servicepersonnel = gcnew ServicePersonnel();

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~GestionPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}

	private:

	private: System::Windows::Forms::Button^ bretour;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bsupprimer;

	private: System::Windows::Forms::Button^ bmodifier;
	private: System::Windows::Forms::Button^ bajouter;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::DataGridView^ CataloguePersonnel;


	private: System::Windows::Forms::Label^ label1;




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
			this->bretour = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bsupprimer = (gcnew System::Windows::Forms::Button());
			this->bmodifier = (gcnew System::Windows::Forms::Button());
			this->bajouter = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CataloguePersonnel = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePersonnel))->BeginInit();
			this->SuspendLayout();
			// 
			// bretour
			// 
			this->bretour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bretour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bretour->Location = System::Drawing::Point(3, 3);
			this->bretour->Name = L"bretour";
			this->bretour->Size = System::Drawing::Size(212, 70);
			this->bretour->TabIndex = 1;
			this->bretour->Text = L"Retour";
			this->bretour->UseVisualStyleBackColor = true;
			this->bretour->Click += gcnew System::EventHandler(this, &GestionPersonnel::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.11715F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.88285F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				246)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				247)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				246)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bretour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1194, 76);
			this->tableLayoutPanel1->TabIndex = 2;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionPersonnel::tableLayoutPanel1_Paint);
			// 
			// bsupprimer
			// 
			this->bsupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bsupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsupprimer->Location = System::Drawing::Point(703, 3);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(241, 70);
			this->bsupprimer->TabIndex = 4;
			this->bsupprimer->Text = L"Supprimer";
			this->bsupprimer->UseVisualStyleBackColor = true;
			this->bsupprimer->Click += gcnew System::EventHandler(this, &GestionPersonnel::bsupprimer_Click);
			// 
			// bmodifier
			// 
			this->bmodifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bmodifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmodifier->Location = System::Drawing::Point(457, 3);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(240, 70);
			this->bmodifier->TabIndex = 3;
			this->bmodifier->Text = L"Modifier";
			this->bmodifier->UseVisualStyleBackColor = true;
			this->bmodifier->Click += gcnew System::EventHandler(this, &GestionPersonnel::bmodifier_Click);
			// 
			// bajouter
			// 
			this->bajouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bajouter->Location = System::Drawing::Point(950, 3);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(241, 70);
			this->bajouter->TabIndex = 2;
			this->bajouter->Text = L"Ajouter";
			this->bajouter->UseVisualStyleBackColor = true;
			this->bajouter->Click += gcnew System::EventHandler(this, &GestionPersonnel::bajouter_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->CataloguePersonnel, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(25, 113);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 757)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1200, 968);
			this->tableLayoutPanel2->TabIndex = 3;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionPersonnel::tableLayoutPanel2_Paint);
			// 
			// CataloguePersonnel
			// 
			this->CataloguePersonnel->AllowUserToAddRows = false;
			this->CataloguePersonnel->AllowUserToDeleteRows = false;
			this->CataloguePersonnel->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CataloguePersonnel->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CataloguePersonnel->Location = System::Drawing::Point(3, 214);
			this->CataloguePersonnel->Name = L"CataloguePersonnel";
			this->CataloguePersonnel->ReadOnly = true;
			this->CataloguePersonnel->RowHeadersWidth = 51;
			this->CataloguePersonnel->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->CataloguePersonnel->Size = System::Drawing::Size(1194, 751);
			this->CataloguePersonnel->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(352, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(481, 55);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestion du personnel";
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"GestionPersonnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Personnel";
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CataloguePersonnel))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Reload();
	}


	private: void Reload() {

		// Charger les données de servicepersonnel
		List<Personnel^>^ personnels = servicepersonnel->SelectAllPersonnel();

		this->CataloguePersonnel->Rows->Clear();
		for each (Personnel ^ p in personnels) {
			DataGridViewRow^ dgvr = gcnew DataGridViewRow();

			DataGridViewTextBoxCell^ dgvc = gcnew DataGridViewTextBoxCell();
			dgvc->Value = Convert::ToString(p->getIdPersonnel());
			dgvr->Cells->Add(dgvc);

			DataGridViewTextBoxCell^ dgvc2 = gcnew DataGridViewTextBoxCell();
			dgvc2->Value = p->getNomPersonnel();
			dgvr->Cells->Add(dgvc2);

			Adresse^ a = p->getAdresse();

			DataGridViewTextBoxCell^ dgvc3 = gcnew DataGridViewTextBoxCell();
			dgvc3->Value = p->getPrenomPersonnel();
			dgvr->Cells->Add(dgvc3);

			DataGridViewTextBoxCell^ dgvc4 = gcnew DataGridViewTextBoxCell();
			dgvc4->Value = Convert::ToString(a->getNumRue());
			dgvr->Cells->Add(dgvc4);

			DataGridViewTextBoxCell^ dgvc5 = gcnew DataGridViewTextBoxCell();
			dgvc5->Value = a->getNomRue();
			dgvr->Cells->Add(dgvc5);

			DataGridViewTextBoxCell^ dgvc6 = gcnew DataGridViewTextBoxCell();
			dgvc6->Value = a->getComplementAdr();
			dgvr->Cells->Add(dgvc6);

			DataGridViewTextBoxCell^ dgvc7 = gcnew DataGridViewTextBoxCell();
			dgvc7->Value = a->getCodePostal();
			dgvr->Cells->Add(dgvc7);

			DataGridViewTextBoxCell^ dgvc8 = gcnew DataGridViewTextBoxCell();
			dgvc8->Value = a->getNomVille();
			dgvr->Cells->Add(dgvc8);

			DataGridViewTextBoxCell^ dgvc9 = gcnew DataGridViewTextBoxCell();
			dgvc9->Value = p->getDateNaissance().ToString("dd/MM/yyyy");
			dgvr->Cells->Add(dgvc9);

			DataGridViewTextBoxCell^ dgvc10 = gcnew DataGridViewTextBoxCell();
			dgvc10->Value = p->getDateEmbauche().ToString("dd/MM/yyyy");
			dgvr->Cells->Add(dgvc10);

			DataGridViewTextBoxCell^ dgvc11 = gcnew DataGridViewTextBoxCell();
			dgvc11->Value = Convert::ToString(p->getIdSuperieur());
			dgvr->Cells->Add(dgvc11);

			dgvr->Tag = p;
			this->CataloguePersonnel->Rows->Add(dgvr);
		}

		// Charger les données de serviceadresse et fusionner en utilisant la colonne "ID"
		/*System::Data::DataSet^ adresseDataSet = serviceadresse->SelectAllServiceAdresse();
		personnelDataSet->Tables[0]->Merge(adresseDataSet->Tables[0]);*/

		// Liaison des données
		//CataloguePersonnel->DataSource = personnelDataSet;
		//CataloguePersonnel->DataMember = personnelDataSet->Tables[0]->TableName;
	}

	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->CataloguePersonnel->SelectedRows->Count != 1)
			return;

		Personnel^ p = (Personnel^)this->CataloguePersonnel->SelectedRows[0]->Tag;

		AjouterPersonnel^ modifierpersonnel = gcnew AjouterPersonnel(p);
		modifierpersonnel->ShowDialog();
		if (modifierpersonnel->ok) {
			servicepersonnel->UpdatePersonnel(p);
			this->Reload();
		}
	}
	private: System::Void bajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ p = gcnew Personnel();
		AjouterPersonnel^ ajouterpersonnel = gcnew AjouterPersonnel(p);
		ajouterpersonnel->ShowDialog();
		if (ajouterpersonnel->ok) {
			servicepersonnel->InsertPersonnel(p);
			this->Reload();
		}
	}
	private: System::Void bsupprimer_Click(System::Object^ sender, System::EventArgs^ e) {

		if (CataloguePersonnel->SelectedRows->Count > 0) {
			int rowIndex = CataloguePersonnel->SelectedRows[0]->Index;
			int refPersonnel = Convert::ToInt32(CataloguePersonnel->Rows[rowIndex]->Cells["ID"]->Value);
			System::Windows::Forms::DialogResult result = MessageBox::Show("Êtes-vous sûr de vouloir supprimer ce Personnel ?", "Confirmation de suppression", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (result == System::Windows::Forms::DialogResult::Yes) {

				Personnel^ PersonnelToDelete = gcnew Personnel();
				PersonnelToDelete->setIdPersonnel(refPersonnel);
				servicepersonnel->DeletePersonnel(PersonnelToDelete);

				this->Reload();
				MessageBox::Show("Personnel supprimé avec succès.", "Suppression", MessageBoxButtons::OK, MessageBoxIcon::Information);

			}
		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Aucune ligne sélectionnée", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void bActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Reload();

	}

	};
}
