#include <Windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>

#pragma once

namespace ElektronikGitar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// MelodiSil i�in �zet
	/// </summary>
	public ref class MelodiSil : public System::Windows::Forms::Form
	{
	public:
		MelodiSil(void)
		{
			InitializeComponent();
			//
			//TODO: Olu�turucu kodunu buraya ekle
			//
		}

	protected:
		/// <summary>
		///Kullan�lan t�m kaynaklar� temizleyin.
		/// </summary>
		~MelodiSil()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lblMelodiSil;
	protected:

	public: System::Windows::Forms::FlowLayoutPanel^ chckBxPanel;
	private:



	protected:

	private:
		/// <summary>
		///Gerekli tasar�mc� de�i�keni.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Tasar�mc� deste�i i�in gerekli metot - bu metodun 
		///i�eri�ini kod d�zenleyici ile de�i�tirmeyin.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MelodiSil::typeid));
			this->lblMelodiSil = (gcnew System::Windows::Forms::Label());
			this->chckBxPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// lblMelodiSil
			// 
			this->lblMelodiSil->Font = (gcnew System::Drawing::Font(L"Oswald", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblMelodiSil->ForeColor = System::Drawing::SystemColors::Desktop;
			this->lblMelodiSil->Location = System::Drawing::Point(12, 9);
			this->lblMelodiSil->Name = L"lblMelodiSil";
			this->lblMelodiSil->Size = System::Drawing::Size(483, 30);
			this->lblMelodiSil->TabIndex = 0;
			this->lblMelodiSil->Text = L"Silmek �stedi�iniz Melodileri Se�in";
			this->lblMelodiSil->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// chckBxPanel
			// 
			this->chckBxPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->chckBxPanel->Location = System::Drawing::Point(12, 42);
			this->chckBxPanel->Name = L"chckBxPanel";
			this->chckBxPanel->Size = System::Drawing::Size(483, 328);
			this->chckBxPanel->TabIndex = 1;
			// 
			// MelodiSil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(507, 432);
			this->Controls->Add(this->chckBxPanel);
			this->Controls->Add(this->lblMelodiSil);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MelodiSil";
			this->Text = L"Melodi Sil";
			this->Activated += gcnew System::EventHandler(this, &MelodiSil::MelodiSil_Activated);
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MelodiSil::MelodiSil_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MelodiSil::MelodiSil_Load);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MelodiSil_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void MelodiSil_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (e->CloseReason != System::Windows::Forms::CloseReason::ApplicationExitCall) {
			e->Cancel = true;
			this->Hide();
		}
	}
	private: System::Void MelodiSil_Activated(System::Object^ sender, System::EventArgs^ e) {
		chckBxPanel->Controls->Clear();
		ifstream fin("arduino/txts/_butonlar.txt");
		string buttonname;
		while (getline(fin, buttonname)) {
			CheckBox^ checkBox2 = gcnew System::Windows::Forms::CheckBox();
			this->Controls->Add(checkBox2);
			checkBox2->AutoSize = true;
			checkBox2->Text = marshal_as<String^>(buttonname);
			checkBox2->Font = (gcnew System::Drawing::Font(L"Montserrat", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			chckBxPanel->Controls->Add(checkBox2);
		}
		fin.close();
	}
};
}
