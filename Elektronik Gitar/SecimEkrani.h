#include "Gitar.h"
#include "Piyano.h"

#pragma once

namespace ElektronikGitar {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SecimEkrani için özet
	/// </summary>
	public ref class SecimEkrani : public System::Windows::Forms::Form
	{
	public:
		SecimEkrani(void)
		{
			InitializeComponent();
			//
			//TODO: Oluþturucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullanýlan tüm kaynaklarý temizleyin.
		/// </summary>
		~SecimEkrani()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnGitar;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnPiyano;


	protected:

	private:
		/// <summary>
		///Gerekli tasarýmcý deðiþkeni.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasarýmcý desteði için gerekli metot - bu metodun 
		///içeriðini kod düzenleyici ile deðiþtirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SecimEkrani::typeid));
			this->btnGitar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnPiyano = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnGitar
			// 
			this->btnGitar->BackColor = System::Drawing::SystemColors::Control;
			this->btnGitar->Font = (gcnew System::Drawing::Font(L"Forte", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGitar->ForeColor = System::Drawing::Color::Teal;
			this->btnGitar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnGitar.Image")));
			this->btnGitar->Location = System::Drawing::Point(127, 197);
			this->btnGitar->Name = L"btnGitar";
			this->btnGitar->Size = System::Drawing::Size(281, 116);
			this->btnGitar->TabIndex = 0;
			this->btnGitar->UseVisualStyleBackColor = false;
			this->btnGitar->Click += gcnew System::EventHandler(this, &SecimEkrani::Gitar_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 32.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(162)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(56, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(417, 130);
			this->label1->TabIndex = 1;
			this->label1->Text = L"ELEKTRONÝK GÝTAR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnPiyano
			// 
			this->btnPiyano->BackColor = System::Drawing::Color::SandyBrown;
			this->btnPiyano->Font = (gcnew System::Drawing::Font(L"Forte", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPiyano->ForeColor = System::Drawing::Color::Teal;
			this->btnPiyano->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPiyano.Image")));
			this->btnPiyano->Location = System::Drawing::Point(127, 343);
			this->btnPiyano->Name = L"btnPiyano";
			this->btnPiyano->Size = System::Drawing::Size(281, 116);
			this->btnPiyano->TabIndex = 0;
			this->btnPiyano->UseVisualStyleBackColor = false;
			this->btnPiyano->Click += gcnew System::EventHandler(this, &SecimEkrani::Piyano_Click);
			// 
			// SecimEkrani
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(527, 552);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnPiyano);
			this->Controls->Add(this->btnGitar);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(543, 591);
			this->MinimumSize = System::Drawing::Size(543, 591);
			this->Name = L"SecimEkrani";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Elektronik Gitar";
			this->Load += gcnew System::EventHandler(this, &SecimEkrani::SecimEkrani_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void SecimEkrani_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	
	private: System::Void Gitar_Click(System::Object^ sender, System::EventArgs^ e) {
		Gitar^ gitar = gcnew Gitar();
		gitar->Show();
		this->Hide();
	}

	private: System::Void Piyano_Click(System::Object^ sender, System::EventArgs^ e) {
		Piyano^ piyano = gcnew Piyano();
		piyano->Show();
		this->Hide();
	}
};
}
