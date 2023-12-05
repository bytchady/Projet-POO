#pragma once
#include "AjouterCommande3.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterCommande2
	/// </summary>
	public ref class AjouterCommande2 : public System::Windows::Forms::Form
	{
	public:
		AjouterCommande2(void)
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
		~AjouterCommande2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ bSupprimerArticle;
	private: System::Windows::Forms::Button^ bAjouterArticle;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel6;
	private: System::Windows::Forms::Label^ lTotalPrixTTC;
	private: System::Windows::Forms::Label^ lTotalTVA;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lTotalPrixHT;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bAnnuler;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

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
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel6 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lTotalPrixHT = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lTotalTVA = (gcnew System::Windows::Forms::Label());
			this->lTotalPrixTTC = (gcnew System::Windows::Forms::Label());
			this->bAjouterArticle = (gcnew System::Windows::Forms::Button());
			this->bSupprimerArticle = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->bAnnuler = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel4->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->tableLayoutPanel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				96.33225F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				3.667745F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				305)));
			this->tableLayoutPanel4->Controls->Add(this->dataGridView1, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->tableLayoutPanel5, 2, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(3, 46);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(1233, 780);
			this->tableLayoutPanel4->TabIndex = 3;
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel5->ColumnCount = 1;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel5->Controls->Add(this->dataGridView2, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->bSupprimerArticle, 0, 2);
			this->tableLayoutPanel5->Controls->Add(this->bAjouterArticle, 0, 3);
			this->tableLayoutPanel5->Controls->Add(this->tableLayoutPanel6, 0, 1);
			this->tableLayoutPanel5->Location = System::Drawing::Point(930, 3);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 4;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 69.2053F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 30.7947F)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(300, 774);
			this->tableLayoutPanel5->TabIndex = 3;
			// 
			// tableLayoutPanel6
			// 
			this->tableLayoutPanel6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel6->ColumnCount = 2;
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.61225F)));
			this->tableLayoutPanel6->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.38776F)));
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixTTC, 1, 2);
			this->tableLayoutPanel6->Controls->Add(this->lTotalTVA, 1, 1);
			this->tableLayoutPanel6->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel6->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel6->Controls->Add(this->label2, 0, 2);
			this->tableLayoutPanel6->Controls->Add(this->lTotalPrixHT, 1, 0);
			this->tableLayoutPanel6->Location = System::Drawing::Point(3, 474);
			this->tableLayoutPanel6->Name = L"tableLayoutPanel6";
			this->tableLayoutPanel6->RowCount = 3;
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel6->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 59)));
			this->tableLayoutPanel6->Size = System::Drawing::Size(294, 204);
			this->tableLayoutPanel6->TabIndex = 6;
			// 
			// lTotalPrixHT
			// 
			this->lTotalPrixHT->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixHT->AutoSize = true;
			this->lTotalPrixHT->BackColor = System::Drawing::Color::White;
			this->lTotalPrixHT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixHT->Location = System::Drawing::Point(93, 0);
			this->lTotalPrixHT->Name = L"lTotalPrixHT";
			this->lTotalPrixHT->Size = System::Drawing::Size(198, 15);
			this->lTotalPrixHT->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 144);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total Prix TTC :";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Total Prix HT :";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(26, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total TVA :";
			// 
			// lTotalTVA
			// 
			this->lTotalTVA->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalTVA->AutoSize = true;
			this->lTotalTVA->BackColor = System::Drawing::Color::White;
			this->lTotalTVA->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalTVA->Location = System::Drawing::Point(93, 72);
			this->lTotalTVA->Name = L"lTotalTVA";
			this->lTotalTVA->Size = System::Drawing::Size(198, 15);
			this->lTotalTVA->TabIndex = 4;
			// 
			// lTotalPrixTTC
			// 
			this->lTotalPrixTTC->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lTotalPrixTTC->AutoSize = true;
			this->lTotalPrixTTC->BackColor = System::Drawing::Color::White;
			this->lTotalPrixTTC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lTotalPrixTTC->Location = System::Drawing::Point(93, 144);
			this->lTotalPrixTTC->Name = L"lTotalPrixTTC";
			this->lTotalPrixTTC->Size = System::Drawing::Size(198, 15);
			this->lTotalPrixTTC->TabIndex = 5;
			// 
			// bAjouterArticle
			// 
			this->bAjouterArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAjouterArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bAjouterArticle->Location = System::Drawing::Point(3, 730);
			this->bAjouterArticle->Name = L"bAjouterArticle";
			this->bAjouterArticle->Size = System::Drawing::Size(294, 41);
			this->bAjouterArticle->TabIndex = 5;
			this->bAjouterArticle->Text = L"Ajouter Article";
			this->bAjouterArticle->UseVisualStyleBackColor = true;
			// 
			// bSupprimerArticle
			// 
			this->bSupprimerArticle->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSupprimerArticle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->bSupprimerArticle->Location = System::Drawing::Point(3, 684);
			this->bSupprimerArticle->Name = L"bSupprimerArticle";
			this->bSupprimerArticle->Size = System::Drawing::Size(294, 40);
			this->bSupprimerArticle->TabIndex = 4;
			this->bSupprimerArticle->Text = L"Supprimer Article";
			this->bSupprimerArticle->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(3, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(294, 465);
			this->dataGridView2->TabIndex = 3;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(887, 774);
			this->dataGridView1->TabIndex = 2;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				66.18557F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.81443F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				286)));
			this->tableLayoutPanel3->Controls->Add(this->bAnnuler, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(3, 878);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(1233, 79);
			this->tableLayoutPanel3->TabIndex = 2;
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(629, 3);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(314, 73);
			this->bSuivant->TabIndex = 2;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &AjouterCommande2::bSuivant_Click);
			// 
			// bAnnuler
			// 
			this->bAnnuler->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bAnnuler->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bAnnuler->Location = System::Drawing::Point(949, 3);
			this->bAnnuler->Name = L"bAnnuler";
			this->bAnnuler->Size = System::Drawing::Size(281, 73);
			this->bAnnuler->TabIndex = 1;
			this->bAnnuler->Text = L"Annuler";
			this->bAnnuler->UseVisualStyleBackColor = true;
			this->bAnnuler->Click += gcnew System::EventHandler(this, &AjouterCommande2::bAnnuler_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel4, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 23)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 786)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 46)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 85)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1239, 960);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// AjouterCommande2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 985);
			this->Controls->Add(this->tableLayoutPanel1);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 1024);
			this->Name = L"AjouterCommande2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AjouterCommande2";
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel6->ResumeLayout(false);
			this->tableLayoutPanel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bAnnuler_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
	AjouterCommande3^ ac3 = gcnew AjouterCommande3();
	ac3->ShowDialog();
}
};
}