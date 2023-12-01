#pragma once
#include "Personnel.h"
#include "ModifierPersonnel.h"

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
			this->bretour->Location = System::Drawing::Point(3, 3);
			this->bretour->Name = L"bretour";
			this->bretour->Size = System::Drawing::Size(280, 81);
			this->bretour->TabIndex = 1;
			this->bretour->Text = L"Retour";
			this->bretour->UseVisualStyleBackColor = true;
			this->bretour->Click += gcnew System::EventHandler(this, &GestionPersonnel::button1_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				51.43885F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				48.56115F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				287)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				292)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				290)));
			this->tableLayoutPanel1->Controls->Add(this->bsupprimer, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->bmodifier, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->bretour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->bajouter, 4, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1425, 87);
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
			this->bsupprimer->Location = System::Drawing::Point(846, 3);
			this->bsupprimer->Name = L"bsupprimer";
			this->bsupprimer->Size = System::Drawing::Size(286, 81);
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
			this->bmodifier->Location = System::Drawing::Point(559, 3);
			this->bmodifier->Name = L"bmodifier";
			this->bmodifier->Size = System::Drawing::Size(281, 81);
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
			this->bajouter->Location = System::Drawing::Point(1138, 3);
			this->bajouter->Name = L"bajouter";
			this->bajouter->Size = System::Drawing::Size(284, 81);
			this->bajouter->TabIndex = 2;
			this->bajouter->Text = L"Ajouter";
			this->bajouter->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel2->Location = System::Drawing::Point(236, 60);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 776)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1431, 914);
			this->tableLayoutPanel2->TabIndex = 3;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GestionPersonnel::tableLayoutPanel2_Paint);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 141);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1425, 770);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GestionPersonnel::dataGridView1_CellContentClick);
			// 
			// GestionPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Name = L"GestionPersonnel";
			this->Text = L"Gestion Personnel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &GestionPersonnel::GestionPersonnel_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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
		ModifierPersonnel^ m = gcnew ModifierPersonnel();
		m->ShowDialog();
	}
	};
}
