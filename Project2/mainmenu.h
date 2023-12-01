#pragma once
#include "Catalogue.h"
#include "GestionPersonnel.h"
#include "GestionClient.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class mainmenu : public System::Windows::Forms::Form
	{
	public:
		mainmenu(void)
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
		~mainmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tabmenu;
	public: System::Windows::Forms::Label^ NomStartup;
	private:

	private: System::Windows::Forms::Button^ bClient;
	public:

	public:



	private: System::Windows::Forms::Button^ bPersonnel;

	private: System::Windows::Forms::Button^ bStatisitques;


	private: System::Windows::Forms::Button^ bCommandes;
	private: System::Windows::Forms::Button^ bCatalogue;


	private:
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
			this->tabmenu = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bCommandes = (gcnew System::Windows::Forms::Button());
			this->bClient = (gcnew System::Windows::Forms::Button());
			this->bPersonnel = (gcnew System::Windows::Forms::Button());
			this->bStatisitques = (gcnew System::Windows::Forms::Button());
			this->bCatalogue = (gcnew System::Windows::Forms::Button());
			this->NomStartup = (gcnew System::Windows::Forms::Label());
			this->tabmenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabmenu
			// 
			this->tabmenu->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabmenu->ColumnCount = 1;
			this->tabmenu->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tabmenu->Controls->Add(this->bCommandes, 0, 3);
			this->tabmenu->Controls->Add(this->bClient, 0, 2);
			this->tabmenu->Controls->Add(this->bPersonnel, 0, 1);
			this->tabmenu->Controls->Add(this->bStatisitques, 0, 5);
			this->tabmenu->Controls->Add(this->bCatalogue, 0, 4);
			this->tabmenu->Controls->Add(this->NomStartup, 0, 0);
			this->tabmenu->Location = System::Drawing::Point(463, 131);
			this->tabmenu->Name = L"tabmenu";
			this->tabmenu->RowCount = 6;
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45.3202F)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 54.6798F)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 104)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 95)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 97)));
			this->tabmenu->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tabmenu->Size = System::Drawing::Size(332, 580);
			this->tabmenu->TabIndex = 0;
			// 
			// bCommandes
			// 
			this->bCommandes->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bCommandes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCommandes->Location = System::Drawing::Point(3, 290);
			this->bCommandes->Name = L"bCommandes";
			this->bCommandes->Size = System::Drawing::Size(326, 94);
			this->bCommandes->TabIndex = 3;
			this->bCommandes->Text = L"Commandes";
			this->bCommandes->UseVisualStyleBackColor = true;
			this->bCommandes->Click += gcnew System::EventHandler(this, &mainmenu::bCommandes_Click);
			// 
			// bClient
			// 
			this->bClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bClient->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bClient->Location = System::Drawing::Point(3, 186);
			this->bClient->Name = L"bClient";
			this->bClient->Size = System::Drawing::Size(326, 98);
			this->bClient->TabIndex = 2;
			this->bClient->Text = L"Client";
			this->bClient->UseVisualStyleBackColor = true;
			this->bClient->Click += gcnew System::EventHandler(this, &mainmenu::bClient_Click);
			// 
			// bPersonnel
			// 
			this->bPersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bPersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bPersonnel->Location = System::Drawing::Point(3, 86);
			this->bPersonnel->Name = L"bPersonnel";
			this->bPersonnel->Size = System::Drawing::Size(326, 94);
			this->bPersonnel->TabIndex = 1;
			this->bPersonnel->Text = L"Personnel";
			this->bPersonnel->UseVisualStyleBackColor = true;
			this->bPersonnel->Click += gcnew System::EventHandler(this, &mainmenu::bPersonnel_Click);
			// 
			// bStatisitques
			// 
			this->bStatisitques->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bStatisitques->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bStatisitques->Location = System::Drawing::Point(3, 485);
			this->bStatisitques->Name = L"bStatisitques";
			this->bStatisitques->Size = System::Drawing::Size(326, 92);
			this->bStatisitques->TabIndex = 4;
			this->bStatisitques->Text = L"Statistiques";
			this->bStatisitques->UseVisualStyleBackColor = true;
			this->bStatisitques->Click += gcnew System::EventHandler(this, &mainmenu::bStatisitques_Click);
			// 
			// bCatalogue
			// 
			this->bCatalogue->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bCatalogue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCatalogue->Location = System::Drawing::Point(3, 390);
			this->bCatalogue->Name = L"bCatalogue";
			this->bCatalogue->Size = System::Drawing::Size(326, 89);
			this->bCatalogue->TabIndex = 5;
			this->bCatalogue->Text = L"Catalogue";
			this->bCatalogue->UseVisualStyleBackColor = true;
			this->bCatalogue->Click += gcnew System::EventHandler(this, &mainmenu::bCatalogue_Click);
			// 
			// NomStartup
			// 
			this->NomStartup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->NomStartup->AutoSize = true;
			this->NomStartup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NomStartup->Location = System::Drawing::Point(3, 0);
			this->NomStartup->Name = L"NomStartup";
			this->NomStartup->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->NomStartup->Size = System::Drawing::Size(326, 83);
			this->NomStartup->TabIndex = 0;
			this->NomStartup->Text = L"ShopbyCESI";
			this->NomStartup->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NomStartup->Click += gcnew System::EventHandler(this, &mainmenu::label1_Click);
			// 
			// mainmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 845);
			this->Controls->Add(this->tabmenu);
			this->MaximumSize = System::Drawing::Size(1280, 1024);
			this->MinimumSize = System::Drawing::Size(1280, 814);
			this->Name = L"mainmenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Menu";
			this->Load += gcnew System::EventHandler(this, &mainmenu::MyForm_Load);
			this->tabmenu->ResumeLayout(false);
			this->tabmenu->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bPersonnel_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionPersonnel^ g = gcnew GestionPersonnel();
		g->ShowDialog();
	}
	private: System::Void bCommandes_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bClient_Click(System::Object^ sender, System::EventArgs^ e) {
		GestionClient^ cl = gcnew GestionClient();
		cl->ShowDialog();
	}
	private: System::Void bCatalogue_Click(System::Object^ sender, System::EventArgs^ e) {
		Catalogue^ C = gcnew Catalogue();
		C->ShowDialog();
	}
	private: System::Void bStatisitques_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}