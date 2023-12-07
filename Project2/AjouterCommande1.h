#pragma once


namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterCommande1
	/// </summary>
	public ref class AjouterCommande1 : public System::Windows::Forms::Form
	{
	public:
		AjouterCommande1(void)
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
		~AjouterCommande1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bRetour;
	private: System::Windows::Forms::Button^ bCommander;

	private: System::Windows::Forms::DataGridView^ CatalogueListeClient;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->bCommander = (gcnew System::Windows::Forms::Button());
			this->CatalogueListeClient = (gcnew System::Windows::Forms::DataGridView());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->CatalogueListeClient, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(17, 16);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 757)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 143)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(1652, 1260);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 5;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				57.09877F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				42.90123F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				303)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				320)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				594)));
			this->tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->bCommander, 3, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(4, 4);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(4);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1644, 92);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// bRetour
			// 
			this->bRetour->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(4, 4);
			this->bRetour->Margin = System::Windows::Forms::Padding(4);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(235, 84);
			this->bRetour->TabIndex = 0;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &AjouterCommande1::bRetour_Click);
			// 
			// bCommander
			// 
			this->bCommander->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bCommander->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bCommander->Location = System::Drawing::Point(733, 4);
			this->bCommander->Margin = System::Windows::Forms::Padding(4);
			this->bCommander->Name = L"bCommander";
			this->bCommander->Size = System::Drawing::Size(312, 84);
			this->bCommander->TabIndex = 1;
			this->bCommander->Text = L"Commander";
			this->bCommander->UseVisualStyleBackColor = true;
			this->bCommander->Click += gcnew System::EventHandler(this, &AjouterCommande1::bCommander_Click);
			// 
			// CatalogueListeClient
			// 
			this->CatalogueListeClient->AllowUserToAddRows = false;
			this->CatalogueListeClient->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->CatalogueListeClient->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->CatalogueListeClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->CatalogueListeClient->Location = System::Drawing::Point(4, 204);
			this->CatalogueListeClient->Margin = System::Windows::Forms::Padding(4);
			this->CatalogueListeClient->Name = L"CatalogueListeClient";
			this->CatalogueListeClient->RowHeadersWidth = 51;
			this->CatalogueListeClient->Size = System::Drawing::Size(1644, 749);
			this->CatalogueListeClient->TabIndex = 2;
			this->CatalogueListeClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AjouterCommande1::dataGridView1_CellContentClick);
			// 
			// AjouterCommande1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1683, 1055);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1701, 1249);
			this->MinimumSize = System::Drawing::Size(1701, 1018);
			this->Name = L"AjouterCommande1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Commande";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &AjouterCommande1::AjouterCommande1_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CatalogueListeClient))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bCommander_Click(System::Object^ sender, System::EventArgs^ e) {
		/*AjouterCommande2^ ac2 = gcnew AjouterCommande2();
		ac2->ShowDialog();*/
	}
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void bAjouterClient_Click(System::Object^ sender, System::EventArgs^ e) {
		/*AjouterClient^ ac = gcnew AjouterClient();
		ac->ShowDialog();*/
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void AjouterCommande1_Load(System::Object^ sender, System::EventArgs^ e) {
	//ServiceClient^ serviceClient = gcnew ServiceClient();
	/*System::Data::DataSet^ dataSet = serviceClient->SelectAllClient();
	CatalogueListeClient->DataSource = dataSet;
	CatalogueListeClient->DataMember = dataSet->Tables[0]->TableName;*/
}
};
}
