#pragma once



namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de ModifierPersonnel
	/// </summary>
	public ref class ModifierPersonnel : public System::Windows::Forms::Form
	{
	public:
		ModifierPersonnel(void)
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
		~ModifierPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ bRetour;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::VScrollBar^ vScrollBar1;
	protected:









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
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->bRetour = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20.61495F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				79.38505F)));
			this->tableLayoutPanel2->Controls->Add(this->bRetour, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->label1, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label2, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label3, 1, 5);
			this->tableLayoutPanel2->Controls->Add(this->label4, 1, 7);
			this->tableLayoutPanel2->Controls->Add(this->label5, 1, 9);
			this->tableLayoutPanel2->Controls->Add(this->label6, 1, 11);
			this->tableLayoutPanel2->Controls->Add(this->label7, 1, 13);
			this->tableLayoutPanel2->Controls->Add(this->textBox1, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox2, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 1, 6);
			this->tableLayoutPanel2->Controls->Add(this->textBox4, 1, 8);
			this->tableLayoutPanel2->Controls->Add(this->textBox6, 1, 12);
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 14);
			this->tableLayoutPanel2->Controls->Add(this->textBox5, 1, 10);
			this->tableLayoutPanel2->Controls->Add(this->button1, 1, 15);
			this->tableLayoutPanel2->Location = System::Drawing::Point(177, 49);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 16;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 64.16185F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 35.83815F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 69)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 56)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 39)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 57)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 58)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 32)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 48)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 34)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 55)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 89)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 132)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(1551, 945);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// bRetour
			// 
			this->bRetour->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bRetour->Location = System::Drawing::Point(2, 2);
			this->bRetour->Margin = System::Windows::Forms::Padding(2);
			this->bRetour->Name = L"bRetour";
			this->bRetour->Size = System::Drawing::Size(214, 66);
			this->bRetour->TabIndex = 1;
			this->bRetour->Text = L"Retour";
			this->bRetour->UseVisualStyleBackColor = true;
			this->bRetour->Click += gcnew System::EventHandler(this, &ModifierPersonnel::bRetour_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(321, 111);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 31);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(321, 242);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(321, 337);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(202, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Numéro et nom de rue";
			this->label3->Click += gcnew System::EventHandler(this, &ModifierPersonnel::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(321, 433);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Code postal";
			this->label4->Click += gcnew System::EventHandler(this, &ModifierPersonnel::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(321, 523);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 24);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ville";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(321, 603);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(159, 24);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Date d\'embauche";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(321, 692);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(139, 24);
			this->label7->TabIndex = 8;
			this->label7->Text = L"ID du supérieur";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(321, 175);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1228, 20);
			this->textBox1->TabIndex = 10;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(321, 283);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(1228, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(321, 378);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(1228, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(321, 467);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(1228, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox6
			// 
			this->textBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox6->Location = System::Drawing::Point(321, 639);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(1228, 20);
			this->textBox6->TabIndex = 15;
			// 
			// textBox7
			// 
			this->textBox7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox7->Location = System::Drawing::Point(321, 725);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(1228, 20);
			this->textBox7->TabIndex = 16;
			// 
			// textBox5
			// 
			this->textBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox5->Location = System::Drawing::Point(321, 557);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(1228, 20);
			this->textBox5->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(659, 814);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(551, 51);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Dock = System::Windows::Forms::DockStyle::Right;
			this->vScrollBar1->Location = System::Drawing::Point(1882, 0);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(22, 1041);
			this->vScrollBar1->TabIndex = 3;
			this->vScrollBar1->Value = 50;
			this->vScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &ModifierPersonnel::vScrollBar1_Scroll);
			// 
			// ModifierPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1904, 1041);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"ModifierPersonnel";
			this->ShowInTaskbar = false;
			this->Text = L"ModifierPersonnel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void bRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void vScrollBar1_Scroll(System::Object^ sender, System::Windows::Forms::ScrollEventArgs^ e) {
	}
	};
}