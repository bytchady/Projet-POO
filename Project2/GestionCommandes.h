#pragma once
#include "ModifierCommandes.h"
#include "AjouterCommandes.h"

namespace ProjectPOO{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de GestionCommandes
	/// </summary>
	public ref class GestionCommandes : public System::Windows::Forms::Form
	{
	public:
		GestionCommandes(void)
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
		~GestionCommandes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ bsupprimer;
	private: System::Windows::Forms::Button^ bmodifier;
	private: System::Windows::Forms::Button^ bretour;
	private: System::Windows::Forms::Button^ bajouter;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bDetails;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


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
			this->bsupprimer = (gcnew System::Windows::Forms::Button());
			this->bmodifier = (gcnew System::Windows::Forms::Button());
			this->bretour = (gcnew System::Windows::Forms::Button());
			this->bajouter = (gcnew System::Windows::Forms::Button());
			this->bDetails = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->AutoSize = true;
			this->tableLayoutPanel1->ColumnCount = 6;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.1413F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.8587F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				213)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				205)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				208)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				201)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bretour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->bDetails, 5, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1194, 80);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// bsupprimer
			// 
			this->bsupprimer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bsupprimer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bsupprimer->Location = System::Drawing::Point(582, 3);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(199, 74);
			this->bsupprimer->TabIndex = 4;
			this->bsupprimer->Text = L"Supprimer";
			this->bsupprimer->UseVisualStyleBackColor = true;
			// 
			// bmodifier
			// 
			this->bmodifier->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bmodifier->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bmodifier->Location = System::Drawing::Point(369, 3);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(207, 74);
			this->bmodifier->TabIndex = 3;
			this->bmodifier->Text = L"Modifier";
			this->bmodifier->UseVisualStyleBackColor = true;
			this->bmodifier->Click += gcnew System::EventHandler(this, &GestionCommandes::bmodifier_Click);
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
			this->bretour->Size = System::Drawing::Size(218, 74);
			this->bretour->TabIndex = 1;
			this->bretour->Text = L"Retour";
			this->bretour->UseVisualStyleBackColor = true;
			this->bretour->Click += gcnew System::EventHandler(this, &GestionCommandes::bretour_Click);
			// 
			// bajouter
			// 
			this->bajouter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bajouter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bajouter->Location = System::Drawing::Point(787, 3);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(202, 74);
			this->bajouter->TabIndex = 2;
			this->bajouter->Text = L"Ajouter";
			this->bajouter->UseVisualStyleBackColor = true;
			this->bajouter->Click += gcnew System::EventHandler(this, &GestionCommandes::bajouter_Click);
			// 
			// bDetails
			// 
			this->bDetails->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bDetails->Location = System::Drawing::Point(995, 3);
			this->bDetails->Name = L"bDetails";
			this->bDetails->Size = System::Drawing::Size(196, 74);
			this->bDetails->TabIndex = 5;
			this->bDetails->Text = L"Détails";
			this->bDetails->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(361, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(556, 55);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Gestion des commandes";
			this->label1->Click += gcnew System::EventHandler(this, &GestionCommandes::label1_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(33, 116);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 10.2381F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 89.7619F)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1200, 840);
			this->tableLayoutPanel2->TabIndex = 6;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 89);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1194, 748);
			this->dataGridView1->TabIndex = 4;
			// 
			// GestionCommandes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"GestionCommandes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"GestionCommandes";
			this->Load += gcnew System::EventHandler(this, &GestionCommandes::GestionCommandes_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GestionCommandes_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bretour_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void bmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
	ModifierCommandes^ com = gcnew ModifierCommandes();
	com->ShowDialog();
}
private: System::Void bajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	AjouterCommandes^ co = gcnew AjouterCommandes();
	co->ShowDialog();
}
};
}
