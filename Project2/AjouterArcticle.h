#pragma once
#include "Catalogue.h"

namespace ProjectPOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de AjouterArcticle
	/// </summary>
	public ref class AjouterArcticle : public System::Windows::Forms::Form
	{
	public:
		AjouterArcticle(void)
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
		~AjouterArcticle()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_retour_AjoutArticle;
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
			this->btn_retour_AjoutArticle = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_retour_AjoutArticle
			// 
			this->btn_retour_AjoutArticle->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_retour_AjoutArticle->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_retour_AjoutArticle->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn_retour_AjoutArticle->Location = System::Drawing::Point(12, 12);
			this->btn_retour_AjoutArticle->Name = L"btn_retour_AjoutArticle";
			this->btn_retour_AjoutArticle->Size = System::Drawing::Size(100, 50);
			this->btn_retour_AjoutArticle->TabIndex = 1;
			this->btn_retour_AjoutArticle->Text = L"Retour";
			this->btn_retour_AjoutArticle->UseVisualStyleBackColor = false;
			this->btn_retour_AjoutArticle->Click += gcnew System::EventHandler(this, &AjouterArcticle::btn_retour_AjoutArticle_Click);
			// 
			// AjouterArcticle
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1902, 1033);
			this->Controls->Add(this->btn_retour_AjoutArticle);
			this->Name = L"AjouterArcticle";
			this->Text = L"AjouterArcticle";
			this->Load += gcnew System::EventHandler(this, &AjouterArcticle::AjouterArcticle_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AjouterArcticle_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Btn_RetourAjouterArticle_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
