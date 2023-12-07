#pragma once
#include "Personnel.h"
#include "ModifierPersonnel.h"
#include "AjouterPersonnel.h"


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
			Personnel^ p = gcnew Personnel();
			p->setDate_Embauche(DateTime(2023, 12, 12));
			//dateTimePicker1->Value = p->getDate_Embauche();
		}

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

	private: System::Windows::Forms::Button^ bretour;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ bsupprimer;

	private: System::Windows::Forms::Button^ bmodifier;
	private: System::Windows::Forms::Button^ bajouter;


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// bretour
			// 
			this->bretour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bretour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bretour->Location = System::Drawing::Point(4, 4);
			this->bretour->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bretour->Name = L"bretour";
			this->bretour->Size = System::Drawing::Size(282, 86);
			this->bretour->TabIndex = 1;
			this->bretour->Text = L"Retour";
			this->bretour->UseVisualStyleBackColor = true;
			this->bretour->Click += gcnew System::EventHandler(this, &GestionPersonnel::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.97872F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.02128F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				367)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				361)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				363)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bretour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1592, 94);
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
			this->bsupprimer->Location = System::Drawing::Point(871, 4);
			this->bsupprimer->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(353, 86);
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
			this->bmodifier->Location = System::Drawing::Point(504, 4);
			this->bmodifier->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(359, 86);
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
			this->bajouter->Location = System::Drawing::Point(1232, 4);
			this->bajouter->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(356, 86);
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
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->dataGridView1, 0, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(33, 139);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 932)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1600, 1034);
			this->tableLayoutPanel2->TabIndex = 3;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionPersonnel::tableLayoutPanel2_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(4, 106);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1592, 924);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnel::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(469, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(597, 69);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Gestion du personnel";
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 1055);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximumSize = System::Drawing::Size(1701, 1249);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
			this->Name = L"GestionPersonnel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Gestion Personnel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void GestionPersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void bmodifier_Click(System::Object^ sender, System::EventArgs^ e) {
		ModifierPersonnel^ modifierpersonnel = gcnew ModifierPersonnel();
		modifierpersonnel->ShowDialog();
	}
	private: System::Void bajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		AjouterPersonnel^ ajouterpersonnel = gcnew AjouterPersonnel();
		ajouterpersonnel->ShowDialog();
	}
};
}
