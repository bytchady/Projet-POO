#pragma once

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterArticle
	/// </summary>
	public ref class AjouterArticle : public System::Windows::Forms::Form
	{
	public:
		AjouterArticle(void)
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
		~AjouterArticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Btn_RetourAjoutArticle;
	protected:

	protected:

	protected:

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
			this->Btn_RetourAjoutArticle = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Btn_RetourAjoutArticle
			// 
			this->Btn_RetourAjoutArticle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Btn_RetourAjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_RetourAjoutArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Btn_RetourAjoutArticle->Location = System::Drawing::Point(12, 12);
			this->Btn_RetourAjoutArticle->Name = L"Btn_RetourAjoutArticle";
			this->Btn_RetourAjoutArticle->Size = System::Drawing::Size(100, 50);
			this->Btn_RetourAjoutArticle->TabIndex = 1;
			this->Btn_RetourAjoutArticle->Text = L"Retour";
			this->Btn_RetourAjoutArticle->UseVisualStyleBackColor = false;
			this->Btn_RetourAjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArticle::Btn_RetourAjouterArticle_Click);
			// 
			// AjouterArticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->Btn_RetourAjoutArticle);
			this->Name = L"AjouterArticle";
			this->Text = L"AjouterArticle";
			this->Load += gcnew System::EventHandler(this, &AjouterArticle::AjouterArticle_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AjouterArticle_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btn_RetourAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
