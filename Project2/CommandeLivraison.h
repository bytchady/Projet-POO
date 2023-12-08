#pragma once
#include "CommandeFacturation.h"
namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de CommandeLivraison
	/// </summary>
	public ref class CommandeLivraison : public System::Windows::Forms::Form
	{
	public:
		CommandeLivraison(void)
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
		~CommandeLivraison()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	protected:
	private: System::Windows::Forms::Label^ NumRue;
	private: System::Windows::Forms::Label^ NomRue;
	private: System::Windows::Forms::Label^ NomVille;
	private: System::Windows::Forms::Label^ CodePostal;
	private: System::Windows::Forms::Label^ ComplementAdresse;
	private: System::Windows::Forms::TextBox^ textBox_NumRue;
	private: System::Windows::Forms::TextBox^ textBox_NomRue;
	private: System::Windows::Forms::TextBox^ textBox_NomVille;
	private: System::Windows::Forms::TextBox^ textBox_CodePostal;
	private: System::Windows::Forms::TextBox^ textBox_ComplementAdresse;
	private: System::Windows::Forms::DataGridView^ CatalogueLivraison;
	private: System::Windows::Forms::Button^ bRetour;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
	private: System::Windows::Forms::Button^ bSuivant;
	private: System::Windows::Forms::Label^ AdrExistant;


















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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->CodePostal = (gcnew System::Windows::Forms::Label());
			this->ComplementAdresse = (gcnew System::Windows::Forms::Label());
			this->textBox_NomRue = (gcnew System::Windows::Forms::TextBox());
			this->textBox_ComplementAdresse = (gcnew System::Windows::Forms::TextBox());
			this->NumRue = (gcnew System::Windows::Forms::Label());
			this->textBox_NumRue = (gcnew System::Windows::Forms::TextBox());
			this->NomVille = (gcnew System::Windows::Forms::Label());
			this->NomRue = (gcnew System::Windows::Forms::Label());
			this->textBox_NomVille = (gcnew System::Windows::Forms::TextBox());
			this->textBox_CodePostal = (gcnew System::Windows::Forms::TextBox());
			this->CatalogueLivraison = (gcnew System::Windows::Forms::DataGridView());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bSuivant = (gcnew System::Windows::Forms::Button());
			this->AdrExistant = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueLivraison))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->CodePostal, 0, 7);
			this->tableLayoutPanel2->Controls->Add(this->ComplementAdresse, 0, 9);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomRue, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox_ComplementAdresse, 0, 10);
			this->tableLayoutPanel2->Controls->Add(this->NumRue, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NumRue, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->NomVille, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->NomRue, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox_NomVille, 0, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox_CodePostal, 0, 8);
			this->tableLayoutPanel2->Location = System::Drawing::Point(133, 72);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 12;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(549, 827);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// CodePostal
			// 
			this->CodePostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CodePostal->AutoSize = true;
			this->CodePostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CodePostal->Location = System::Drawing::Point(3, 420);
			this->CodePostal->Name = L"CodePostal";
			this->CodePostal->Size = System::Drawing::Size(543, 60);
			this->CodePostal->TabIndex = 3;
			this->CodePostal->Text = L"Code Postal";
			this->CodePostal->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// ComplementAdresse
			// 
			this->ComplementAdresse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ComplementAdresse->AutoSize = true;
			this->ComplementAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ComplementAdresse->Location = System::Drawing::Point(3, 540);
			this->ComplementAdresse->Name = L"ComplementAdresse";
			this->ComplementAdresse->Size = System::Drawing::Size(543, 60);
			this->ComplementAdresse->TabIndex = 4;
			this->ComplementAdresse->Text = L"Complement d\'Adresse";
			this->ComplementAdresse->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NomRue
			// 
			this->textBox_NomRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_NomRue->Location = System::Drawing::Point(3, 243);
			this->textBox_NomRue->Name = L"textBox_NomRue";
			this->textBox_NomRue->Size = System::Drawing::Size(543, 31);
			this->textBox_NomRue->TabIndex = 6;
			// 
			// textBox_ComplementAdresse
			// 
			this->textBox_ComplementAdresse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_ComplementAdresse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_ComplementAdresse->Location = System::Drawing::Point(3, 603);
			this->textBox_ComplementAdresse->Name = L"textBox_ComplementAdresse";
			this->textBox_ComplementAdresse->Size = System::Drawing::Size(543, 31);
			this->textBox_ComplementAdresse->TabIndex = 9;
			// 
			// NumRue
			// 
			this->NumRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NumRue->AutoSize = true;
			this->NumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NumRue->Location = System::Drawing::Point(3, 60);
			this->NumRue->Name = L"NumRue";
			this->NumRue->Size = System::Drawing::Size(543, 60);
			this->NumRue->TabIndex = 1;
			this->NumRue->Text = L"Numero Rue";
			this->NumRue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NumRue
			// 
			this->textBox_NumRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NumRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_NumRue->Location = System::Drawing::Point(3, 123);
			this->textBox_NumRue->Name = L"textBox_NumRue";
			this->textBox_NumRue->Size = System::Drawing::Size(543, 31);
			this->textBox_NumRue->TabIndex = 5;
			// 
			// NomVille
			// 
			this->NomVille->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomVille->AutoSize = true;
			this->NomVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomVille->Location = System::Drawing::Point(3, 300);
			this->NomVille->Name = L"NomVille";
			this->NomVille->Size = System::Drawing::Size(543, 60);
			this->NomVille->TabIndex = 2;
			this->NomVille->Text = L"Nom Ville";
			this->NomVille->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// NomRue
			// 
			this->NomRue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomRue->AutoSize = true;
			this->NomRue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomRue->Location = System::Drawing::Point(3, 180);
			this->NomRue->Name = L"NomRue";
			this->NomRue->Size = System::Drawing::Size(543, 60);
			this->NomRue->TabIndex = 0;
			this->NomRue->Text = L"Nom Rue";
			this->NomRue->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBox_NomVille
			// 
			this->textBox_NomVille->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_NomVille->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_NomVille->Location = System::Drawing::Point(3, 363);
			this->textBox_NomVille->Name = L"textBox_NomVille";
			this->textBox_NomVille->Size = System::Drawing::Size(543, 31);
			this->textBox_NomVille->TabIndex = 7;
			// 
			// textBox_CodePostal
			// 
			this->textBox_CodePostal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_CodePostal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_CodePostal->Location = System::Drawing::Point(3, 483);
			this->textBox_CodePostal->Name = L"textBox_CodePostal";
			this->textBox_CodePostal->Size = System::Drawing::Size(543, 31);
			this->textBox_CodePostal->TabIndex = 8;
			// 
			// CatalogueLivraison
			// 
			this->CatalogueLivraison->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueLivraison->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueLivraison->Location = System::Drawing::Point(688, 72);
			this->CatalogueLivraison->Name = L"CatalogueLivraison";
			this->CatalogueLivraison->RowTemplate->Height = 24;
			this->CatalogueLivraison->Size = System::Drawing::Size(686, 827);
			this->CatalogueLivraison->TabIndex = 1;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(3, 3);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(124, 63);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &CommandeLivraison::bRetour_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				19.06841F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				80.93159F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				691)));
			this->tableLayoutPanel1->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->CatalogueLivraison, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel3, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->AdrExistant, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 6);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 7.670182F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 92.32982F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 90)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1377, 1043);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel3->Controls->Add(this->bSuivant, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(688, 905);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(686, 84);
			this->tableLayoutPanel3->TabIndex = 3;
			// 
			// bSuivant
			// 
			this->bSuivant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bSuivant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bSuivant->Location = System::Drawing::Point(346, 3);
			this->bSuivant->Name = L"bSuivant";
			this->bSuivant->Size = System::Drawing::Size(337, 78);
			this->bSuivant->TabIndex = 0;
			this->bSuivant->Text = L"Suivant";
			this->bSuivant->UseVisualStyleBackColor = true;
			this->bSuivant->Click += gcnew System::EventHandler(this, &CommandeLivraison::bSuivant_Click);
			// 
			// AdrExistant
			// 
			this->AdrExistant->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->AdrExistant->AutoSize = true;
			this->AdrExistant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AdrExistant->Location = System::Drawing::Point(688, 0);
			this->AdrExistant->Name = L"AdrExistant";
			this->AdrExistant->Size = System::Drawing::Size(686, 69);
			this->AdrExistant->TabIndex = 4;
			this->AdrExistant->Text = L"Adresses existantes";
			this->AdrExistant->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CommandeLivraison
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1685, 1061);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1251);
			this->MinimumSize = System::Drawing::Size(1701, 1030);
			this->Name = L"CommandeLivraison";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Adresse de Livraison";
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueLivraison))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bSuivant_Click(System::Object^ sender, System::EventArgs^ e) {
		CommandeFacturation^ cf = gcnew CommandeFacturation();
		cf->ShowDialog();
	}
};
}
